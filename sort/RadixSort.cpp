
/* 
for example 
int array[5]={3,1,2,5,4}; 
int size=sizeof(array)/sizeof(int);
RadixSort(array,size);
the result:1 2 3 4 5 
time：the worst θ(d(r+n)) the best θ(d(n+rd)) avarage θ(d(r+n)) 
r is the cardinality of the keyword,d is the length of the keyword
space : O(rd+n) 
very stable
*/
int KeySize(int array[],int size)
{
	int key_size=1;

	for(int i=0;i<size;i++)
	{
		int temp=1;
		int n=10;
		while(array[i]/n>0)
		{
			temp++;
			n*=10;
		}
        key_size=(temp>key_size)?temp:key_size;
	}
	return key_size;
}


void RadixSort(int array[],int size)
{
	int bucket[10][10]={0};//Define base bucket
	int order[10]={0};//Save the number of elements in each cardinality bucket
	int key_size=KeySize(array,size);//Calculates the maximum number of key digits
	
	for(int n=1;key_size>0;n*=10,key_size--)
	{
		/*The elements to be sorted are sequentially placed into the cardinality bucket according to the size of the key values*/
		for(int i=0;i<size;i++)
		{
			int lsd=(array[i]/n)%10;
			bucket[lsd][order[lsd]]=array[i];
			order[lsd]++;
		}

		/*Reattach the elements in the cardinality bucket*/
		int k=0;
		for(int i=0;i<10;i++)
		{
			if(order[i]!=0)
			{
				for(int j=0;j<order[i];j++)
				{
					array[k]=bucket[i][j];
					k++;
				}
				order[i]=0;
			}
		}
	}
}
