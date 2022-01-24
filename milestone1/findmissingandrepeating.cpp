// { Driver Code Starts
#include <iostream>
#include <sort>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int p=0;
        int *ans=new int[2];
        unordered_map<int,int> umap;
        int rep;
        int rep2=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                rep=arr[i];
            }
        }
        ans[0]=rep;
        int *diff=new int[n];
        for(int i=0;i<n;i++){
             diff[i]={arr[i]-(i+1)};
        }
        for(int i=1;i<n-1;i++){
            if(diff[i]==1 && diff[i-1]==0){
                rep2=i+1;
            }
            if(diff[i]==-1 && diff[i+1]==0){
                rep2=i+1;
            }
        }
        if(diff[0]!=0 && rep!=1 ){
            rep2=1;
        }
        if(diff[n-1]!=0 && rep!=n){
            rep2=n;
        }
        ans[1]=rep2;
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends