class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int ans = -1;
        while(l < r){
            int mid = (l+r)>>1;
            if(nums[mid] < target){
                l = mid + 1;
            }else{
                r = mid;
            }
        }
        return (nums[r] == target)?r:-1;
    }
};