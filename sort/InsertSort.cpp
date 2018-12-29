
/* 
for example
int array[5]={3,1,2,5,4}; 
InsertSort(array,5);
the result:5 4 3 2 1
time：the worst θ(n²) the best θ(n) avarage θ(n²)
space : O(1) 
Very stable
*/
void InsertSort(int array[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(array[j]>array[j-1])
				swap(array,j,j-1);
			else
			    break;
		}
	}
}
