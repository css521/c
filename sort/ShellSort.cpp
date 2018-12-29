
/* 
for example
int array[5]={3,1,2,5,4}; 
ShellSort(array,5);
the result:5 4 3 2 1
time：the worst θ(n²) the best θ(n) avarage θ(n^1.3)
space : O(1) 
not stable
*/
void ShellSort(int array[],int n)
{
	for(int delta=n/2;delta>0;delta/=2)
	{
		for(int i=0;i<delta;i++)
		{
			for(int j=i+delta;j<n;j+=delta)
			{
				for(int k=j;k>0;k-=delta)
				{
					if(array[k]>array[k-1])
						swap(array,k,k-1);
				}
			}
		}
	}
}