class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long int l = 0, r = 0;
        long long int sum  = 0, res = 0;
        while(r < nums.size()){
            sum = sum + nums[r];
            while(nums[r] * (r-l+1) > sum + k){
                sum = sum - nums[l];
                l++;
            }
            res = max(res, (r-l+1));
            r++;
        }
        return res;
    }
};