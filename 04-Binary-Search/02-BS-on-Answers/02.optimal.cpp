class Solution {
  public:
    bool helper(vector<int> &arr, int k,int mid,int n){
        int cnt=1;
        int last=arr[0];
        for(int i=1;i<n;i++){
            if((arr[i]-last)>=mid){
                last=arr[i];
                cnt++;
            }
        }
        return cnt>=k;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int low=1;
        int n=arr.size();
        int res=0;
        sort(arr.begin(),arr.end());
        int high=arr[n-1]-arr[0];
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(helper(arr,k,mid,n)){
                low=mid+1;
                res=mid;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
};