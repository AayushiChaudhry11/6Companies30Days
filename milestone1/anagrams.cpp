// { Driver Code Starts
//Initial Template for C++
#include <iostream>
#include <sort>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<string> result;
        for(int i=0;i<string_list.size();i++){
            result.push_back(string_list[i]);
            sort(result[i].begin(),result[i].end());
        }
        vector<vector<string>> ans;
        vector<string> temp;
        for(int i=0;i<result.size();i++){
            int p=0,m=0;
            if(ans.size()==0){
                temp.push_back(string_list[i]);
                ans.push_back(temp);
                temp.clear();
            }
            else{
            for(p=0;p<ans.size();p++){
                string str=ans[p][0];
                sort(str.begin(),str.end());
                if(result[i]==str){
                    for(int h=0;h<ans[p].size();h++){
                        temp.push_back(ans[p][h]);
                    }
                    temp.push_back(string_list[i]);
                    ans[p].swap(temp);
                    temp.clear();
                    break;
                }
            }
            if(p==ans.size()){
                temp.push_back(string_list[i]);
                ans.push_back(temp);
                temp.clear();
                
            }}
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends