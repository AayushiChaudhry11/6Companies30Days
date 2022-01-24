// { Driver Code Starts
#include <iostream>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull res[n];
	    int two=0;
	    int three=0;
	    int five=0;
	    res[0]=1;
	    for(int i=1;i<n;i++){
	        res[i]=min(2*res[two],min(3*res[three],5*res[five]));
	        if(res[i]==2*res[two]){
	            two++;
	        }
	        if(res[i]==3*res[three]){
	            three++;
	        }
	        if(res[i]==5*res[five]){
	            five++;
	        }
	    }
	    return res[n-1];
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends