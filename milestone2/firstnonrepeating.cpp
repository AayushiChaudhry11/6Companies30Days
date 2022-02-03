// { Driver Code Starts
#include<iostream>
using namespace std;
#include<queue>
#include<unordered_map>
 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans="";
		    int n=A.size();
		    unordered_map<char,int> mapp;
		    queue<char> q;
		    for(int i=0;i<n;i++){
		        mapp[A[i]]++;
		        if(mapp[A[i]]==1){
		            q.push(A[i]);
		        }
		        while(!q.empty() && mapp[q.front()]!=1){
		                q.pop();
		        }
		        if(!q.empty()){
		            ans.push_back(q.front());
		        }
		        else{
		            ans.push_back('#');
		        }
		        //ans=ans+anss;
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends