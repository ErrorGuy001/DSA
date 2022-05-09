class Solution {
public:
    int minimumSum(int num) {
        vector<int> n(4,0);
        for(int i = 0;i < 4;i++)
        {
            n[i] = num%10;
            num = num/10;
        }
        sort(n.begin(),n.end());
        return n[0]*10+n[1]*10+n[2]+n[3];
    }
};