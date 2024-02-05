
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        //Your code here
        if(n<2){
            return n;
        }
        int last =fibonacci(n-1);
        int slast= fibonacci(n-2);
        return last +slast;
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}
// } Driver Code Ends
