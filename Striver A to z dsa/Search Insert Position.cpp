class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n;
        while(l < r){
            int mid = (l+r)>>1;
            if(nums[mid] < target){
                l = mid +1;
            }else{
                r = mid;
            }
        }
        return l;
    }
};