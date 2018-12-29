
/* 
for example this a big top pile
int a[5]={3,1,2,5,4}; 
vector<int>array(a,a+5);
HeapSort(array);
the result:1 2 3 4 5 
time：the worst θ(nlogn) the best θ(nlogn) avarage θ(nlogn)
space : O(1) 
not stable
*/
void MakeHeap(vector<int>& a, int size) //Size is the size of the array
{
    for (int i = size - 1; i > 0; i--)
    {
        if (i % 2 && a[i] > a[(i - 1) / 2])//odd number
            swap(a[i], a[(i - 1) / 2]);
        else if (i % 2 == 0 && a[i] > a[(i - 2) / 2])//even number
            swap(a[i], a[(i - 2) / 2]);
    }
}
void HeapSort(vector<int>& a)
{
    int n = a.size();
    while (n)
    {
        MakeHeap(a, n); //Each time a new maximum element is moved to the top of the heap, that is, a[0]
        n--;
        swap(a[0], a[n]); //Move the current maximum to the back as an ordered element
    }
}
