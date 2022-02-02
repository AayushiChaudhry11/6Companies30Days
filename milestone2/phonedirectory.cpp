// { Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <vector>
#include<sort>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        sort(contact,contact+n);
        vector<string> contacts;
        contacts.push_back(contact[0]);
        for(int i=1;i<n;i++){
            if(contact[i]!=contact[i-1]){
                contacts.push_back(contact[i]);
            }
        }
        int m=contacts.size();
        vector<vector<string>>result;
        string p="";
        int pl=0;
        for(int i=0;i<s.length();i++){
            p=p+s[i];
            pl++;
            vector<string> ans;
            for(int j=0;j<m;j++){
                // vector<string> ans;
                // int pl=p.length();
                string r=contacts[j].substr(0,pl);
                //int res = p.compare(r);
                if (r==p)
                {
                    ans.push_back(contacts[j]);
                }
                
            }
            if(ans.size()==0){
                ans.push_back("0");
                result.push_back(ans);
            }
            else
            result.push_back(ans);
        }
    return result;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends