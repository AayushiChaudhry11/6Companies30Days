class Solution {
public:
    int longestMountain(vector<int>& arr) {
       int n=arr.size();
        int maxlen=0;
       for(int i=1;i<n-1;i++){
           if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
               int left=i-1;
               int right=i+1;
               while(left>0 && arr[left-1]<arr[left]){
                   left--;
               }
               while(right<n-1 && arr[right+1]<arr[right]){
                   right++;
               }
               
               maxlen=max(maxlen,right-left+1);
               
           }
       }
        return maxlen;
    }
};