// { Driver Code Starts
//Initial template for C++

#include <iostream>
#include<vector>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> result;
        vector<int> sample;
        // int max=INT_MIN;
        for(int i=0;i<k;i++){
            sample.push_back(arr[i]);
            // if(arr[i]>max){
            //     max=arr[i];
            // }
        }
        int maxx=*max_element(sample.begin(),sample.end());
        result.push_back(maxx);
        // sample.begin().pop();
        // sample.erase(sample.begin());
        for(int i=k;i<n;i++){
          int top=sample.front();
          sample.erase(sample.begin());
          int z=arr[i];
          sample.push_back(z);
          if(top==maxx)
            maxx=*max_element(sample.begin(),sample.end());
          else
            maxx=max(maxx,arr[i]);
          result.push_back(maxx);
        //   sample.begin().pop();
        //   sample.erase(sample.begin());
        }
        return result;
    }  
    };

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends