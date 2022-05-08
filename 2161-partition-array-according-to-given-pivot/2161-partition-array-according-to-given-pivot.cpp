class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int low =0;
        int high = nums.size();
        for(auto i : nums)
        {
            if(i < pivot)
                ++low;
            if(i > pivot)
                --high;
        }
        int same = low;
        low = 0;
        vector<int> res(nums.size());
        for(auto i : nums)
        {
            if(i == pivot)
                res[same++] = i;
            if(i > pivot)
                res[high++] = i;
            if(i < pivot)
                res[low++] = i;
        }
        return res;
    }
};