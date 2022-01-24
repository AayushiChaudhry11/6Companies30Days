// { Driver Code Starts
#include <iostream>
#include<string>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int count=1;
  int f=0;
  int n=src.length();
  for(int i=0;i<n-1;i++){
      if(src[i]!=src[i+1]){
          f++;
      }
  }
  string result="";
  int p=0;
  for(int i=0;i<n-1;i++){
      if(src[i]==src[i+1]){
          count++;
      }
      else {
          
        //   result.append(m);
        result=result+src[i];
          string l=to_string(count);
          result.append(l);
          count=1;
      }
  }
  result=result+src[n-1];
  string l=to_string(count);
  result.append(l);
  
  return result;
}     
 
