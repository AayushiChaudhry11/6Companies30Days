// { Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int count=0;
        int rem[k];
        for(int i=0;i<k;i++){
            rem[i]=0;
        }
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int p=nums[i]%k;
            rem[p]++;
        }
        for(int i=1;i<=k/2;i++){
            if(rem[i]==rem[k-i]){
                count++;
                // cout<<count<<endl;
            }
        }
        if(n%2==0){
        if(count==k/2 && rem[0]%2==0 && rem[k/2]%2==0 && k%2==0){
        return true;
        }
        else if(count==((k-1)/2) && rem[0]%2==0  && k%2!=0){
            return true;
        }
        else if(k==1){
            return true;
        }
        else{
            return false;
        }}
        else{
            return false;
        }
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends