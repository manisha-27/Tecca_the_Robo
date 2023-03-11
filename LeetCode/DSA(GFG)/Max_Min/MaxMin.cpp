// Time Complexity: O(N)

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min=A[0],max=A[0];
    // 	int length=sizeof(A)/sizeof(A[0]);
    // 	cout<<length<<endl;
    	for(int i=0;i<N;i++){
    	   // cout<<A[i]<<" ";
    	    if(A[i]<min)
    	    min=A[i];
    	    if(A[i]>max)
    	    max=A[i];
    	}
    // 	cout<<endl;
    // 	cout<<min<<" "<<max<<endl;
    	return min+max;
    }
};
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min=A[0],max=A[0];
    // 	int length=sizeof(A)/sizeof(A[0]);
    // 	cout<<length<<endl;
    	for(int i=0;i<N;i++){
    	   // cout<<A[i]<<" ";
    	    if(A[i]<min)
    	    min=A[i];
    	    if(A[i]>max)
    	    max=A[i];
    	}
    // 	cout<<endl;
    // 	cout<<min<<" "<<max<<endl;
    	return min+max;
    }

};
