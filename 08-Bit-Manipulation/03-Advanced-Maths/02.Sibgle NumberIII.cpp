class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long dif=0;
        for(int num:nums){
            dif=dif^num;
        }
        int a=0;
        int b=0;
        long long rightmost=dif&(-dif);
        for(int num:nums){
            if(num&rightmost){
                a=a^num;
            }
            else{
                b=b^num;
            }
        }
        return {a,b};
    }
};