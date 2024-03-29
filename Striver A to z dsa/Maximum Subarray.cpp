//kadane algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefixmax = nums[0];
        int currsum = 0;
        for(int i = 0; i < nums.size(); i++){
            currsum += nums[i];
            if(prefixmax < currsum) prefixmax = currsum;
            if(currsum < 0) currsum = 0;
        }
        return prefixmax;
    }
};