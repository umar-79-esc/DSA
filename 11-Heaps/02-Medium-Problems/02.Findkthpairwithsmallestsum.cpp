class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        priority_queue< tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> minh;
        
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<min(n1,k);i++){
            minh.push({nums1[i]+nums2[0],i,0});
        }
        while(!minh.empty() && res.size()<k){
            auto[sum,i,j]=minh.top();
            minh.pop();

            res.push_back({nums1[i],nums2[j]});
            if((j+1)<n2){
                minh.push({nums1[i]+nums2[j+1],i,j+1});
            }
        }
        return res;
    }
};