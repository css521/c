
/* 
for example
int array[5]={3,1,2,5,4}; 
BubbleSort(array,5);
the result:5 4 3 2 1
time：the worst θ(n²) the best θ(n) avarage θ(n²)
space : O(1) 
Very stable
*/
void BubbleSort(int array[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(array[j]>array[j-1])
				swap(array,j,j-1);
		}
	}
}