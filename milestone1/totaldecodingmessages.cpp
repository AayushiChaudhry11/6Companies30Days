// { Driver Code Starts
#include<iostream>
#include<cstring>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    long long n= str.length();
		    const int mod=1e9+7;
		    long long count[n+1];
		    count[0]=1;
		    count[1]=1;
		    if(str[0]=='0'){
		        return 0;
		    }
		    for(long long i=2;i<=n;i++){
		        count[i]=0;
		        if(str[i-1]>'0'){
		           count[i]=(count[i]+count[i-1])%mod; 
		      
		        }
		        if((str[i-2]=='2'&&str[i-1]<'7')||(str[i-2]=='1')){
		            count[i]=(count[i]+count[i-2])%mod;
		        }
		    }
		    return count[n];
		      
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends