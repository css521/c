

/* 
for example
int array[5]={3,1,2,5,4}; 
int tempArray[5];
MergeSort(array,tempArray,0,4);
the result:1 2 3 4 5 
time：the worst θ(nlogn) the best θ(nlogn) avarage θ(nlogn)
space : O(1) 
Very stable
*/

void Merge(int array[],int tempArray[],int left,int right,int middle)
{
	int index1=left;
	int index2=middle+1;
	for(int i=left;(index1<=middle)&&(index2<=right);i++)
	{
		if(array[index1]<array[index2])
			tempArray[i]=array[index1++];
		else
			tempArray[i]=array[index2++];
	}
	while(index1<=middle)
		tempArray[i++]=array[index1++];
	while(index2<=right)
		tempArray[i++]=array[index2++];
	for(i=left;i<=right;i++)
		array[i]=tempArray[i];  
}


void MergeSort(int array[],int tempArray[],int left,int right)
{
	if(left<right)
	{
		int middle=(left+right)/2;
        MergeSort(array,tempArray,left,middle);
		MergeSort(array,tempArray,middle+1,right);
		Merge(array,tempArray,left,right,middle);
	}
}