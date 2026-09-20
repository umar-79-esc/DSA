class compare{
        int m;
    public:
        compare(int median){
            m=median;
        }
        bool operator()(const int a,const int b)const{
            int difa=abs(a-m);
            int difb=abs(b-m);
            if(difa!=difb){
                return difa>difb;
            }
            return a>b;
        }
};
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int> ans;
        int me=(n-1)/2;
        int m=arr[me];
        compare comp(m);
        priority_queue<int, vector<int>, compare> minh(comp);

        for(int num:arr){
            minh.push(num);
            if(minh.size()>k) minh.pop();
        }
        while (!minh.empty()) {
            ans.push_back(minh.top());
            minh.pop();
        }
        return ans;
    }
};