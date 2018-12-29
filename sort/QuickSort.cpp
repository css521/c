
/* 
for example
int array[5]={3,1,2,5,4}; 
QuickSort(array,0,4);
the result:1 2 3 4 5 
time：the worst θ(n²) the best θ(nlogn) avarage θ(nlogn)
space : O(nlogn) 
not stable
*/
void QuickSort(int array[], int left, int right)   
{   
    if (left < right)   
    {   
        int i = left, j = right, x = array[left];   
        while (i < j)   
        {   
            while(i < j && array[j] >= x) //from right to left，find the first number <x
                j--;     
            if(i < j)    
                array[i++] = array[j];   
                 
            while(i < j && array[i] < x) // from left to right，find the first number >x
                i++;     
            if(i < j)    
                array[j--] = array[i];   
        }   
        array[i] = x;   
        QuickSort(array, left, i - 1); // recursive call
        QuickSort(array, i + 1, right);   
    }   
}   