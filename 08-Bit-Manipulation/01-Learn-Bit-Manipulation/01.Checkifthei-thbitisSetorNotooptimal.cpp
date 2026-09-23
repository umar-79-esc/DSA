class Solution {
  public:
    bool checkKthBit(int n, int k) {
        return (n & (1 << k)) != 0;
    }
};

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        return (n >> k) & 1;
    }
};