class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int> res;
        int m=(n-1)/2;
        m=arr[m];
        int left=0,right=n-1;
        while(res.size()<k){
            int rd=abs(arr[right]-m);
            int ld=abs(arr[left]-m);

            if(ld>rd){
                res.push_back(arr[left]);
                left++;
            }
            else{
                res.push_back(arr[right]);
                right--;
            }
        }
        return res;
    }
};
