
/* 
for example
int array[5]={3,1,2,5,4}; 
SelectionSort(array,5);
the result:5 4 3 2 1
time：the worst θ(n²) the best θ(n²) avarage θ(n²)
space : O(1) 
not stable
*/
void SelectionSort(int array[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int biggest=i;
		for(int j=i+1;j<n;j++)
		{
			if(array[smallest]<array[j])
				biggest=j;
		}
		swap(array,i,biggest);
	}
}