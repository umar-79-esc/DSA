class Solution {
    
  public:
    bool helper(vector<int> &arr, int k,long long mid,int n){
        int cnt=1;
        long long csum=0;
        for(int i=0;i<n;i++){
            if(csum+arr[i]<=mid){
                csum+=arr[i];
            }
            else{
                cnt++;
                csum=arr[i];
            }
        }
        return cnt<=k;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int low=0;
        long long high=0;
        int n=arr.size();
        if(n<k){
            return -1;
        }
        for(int i=0;i<n;i++){
            low=max(low,arr[i]);
            high+=arr[i];
        }
        if(n==k) return low;
        if(k==1) return high;
        int res=0;
        while(low<=high){
            long long  mid=low+(high-low)/2;
            if(helper(arr,k,mid,n)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};