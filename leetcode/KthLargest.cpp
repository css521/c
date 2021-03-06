
/*
Design a class to find the kth largest element in a stream. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Your KthLargest class will have a constructor which accepts an integer k and an integer array nums, which contains initial elements from the stream. For each call to the method KthLargest.add, return the element representing the kth largest element in the stream.

Example:

int k = 3;
int[] arr = [4,5,8,2];
KthLargest kthLargest = new KthLargest(3, arr);
kthLargest.add(3);   // returns 4
kthLargest.add(5);   // returns 5
kthLargest.add(10);  // returns 5
kthLargest.add(9);   // returns 8
kthLargest.add(4);   // returns 8
*/

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> heap;  
	//priority_queue<int, vector<int>, greater<int>> heap;
	//priority_queue<int, vector<int>, less<int>> heap;	
    int size;
    KthLargest(int k, vector<int> nums) 
    {
        size = k;
        for (int it:nums)
		{            
            heap.push(it);
            if (heap.size() > k)
                heap.pop();        
        }    
    }    
    int add(int val) 
    {        
        heap.push(val);        
        if (heap.size() > size) 
            heap.pop();        
        return heap.top();    
    }
};
