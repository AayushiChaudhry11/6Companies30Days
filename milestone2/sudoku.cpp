// { Driver Code Starts
// Initial Template for C++

#include <iostream>
#include<vector>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        int v=0;
        for(int i=0;i<9;i++){
            vector<int> result;
            for(int j=0;j<9;j++){
                int key=mat[i][j];
                if(key==0){
                    continue;
                }
                else if(key!=0 && count(result.begin(), result.end(), key)>0){
                   // v++;
                   return 0;
                }
                else{
                    result.push_back(key);
                }
            }
        }
        for(int j=0;j<9;j++){
            vector<int> result2;
            for(int i=0;i<9;i++){
                int key=mat[i][j];
                if(key==0){
                    continue;
                }
                else if(key!=0 && count(result2.begin(), result2.end(), key)>0){
                   // v++;
                   return 0;
                }
                else{
                    result2.push_back(key);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
             vector<int> result3; 
             for(int a=0;a<3;a++){
                 for(int b=0;b<3;b++){
                      int key=mat[i+a][j+b];
                      if(key==0){
                          continue;
                      }
                      else if(key!=0 && count(result3.begin(), result3.end(), key)>0){
                          //v++;
                          return 0;
                      }
                      else{
                          result3.push_back(key);
                      }
            }
            }
            }
        }
        return 1;
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends