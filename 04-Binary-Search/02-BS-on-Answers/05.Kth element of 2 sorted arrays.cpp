class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
        if(a.size()>b.size()) return kthElement(b,a,k);
        int n=a.size();
        int m=b.size();
        int low=max(k-m,0);  //if k>m then we have to take atleast k-m elements from a
        int high=min(n,k);     //if k<n then we can take atmost k elements from a
        while(low<=high){
            int c1=low+(high-low)/2;
            int c2=k-c1;

            int L1=(c1==0) ? INT_MIN:a[c1-1];
            int L2=(c2==0) ? INT_MIN:b[c2-1];

            int R1=(c1==n) ? INT_MAX:a[c1];
            int R2=(c2==m) ? INT_MAX:b[c2];

            if(L1<=R2 && L2<=R1){
                return max(L1,L2);
            }
            else if(L1>R2){
                high=c1-1;
            }
            else{
                low=c1+1;
            }
        }  
        return 0;
    }  
};