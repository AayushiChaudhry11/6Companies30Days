// { Driver Code Starts
// Initial template for C++

#include <iostream>
#include <math>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#include<climits>

class Solution {
  public:
    int maxProfit(int k, int N, int A[]) {
        // code here
        int profit[k+1][N+1];
        for(int i=0;i<N+1;i++){
            profit[0][i]=0;
        }
        for(int i=0;i<k+1;i++){
            profit[i][0]=0;
        }
        for(int i=1;i<k+1;i++){
            for(int j=1;j<N;j++){
                int maxx=INT_MIN;
                for(int m=0;m<j;m++){
                maxx=max(maxx,A[j]-A[m]+profit[i-1][m]);
                    
                }
                profit[i][j]=max(maxx,profit[i][j-1]);
            }
        }
        return profit[k][N-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends