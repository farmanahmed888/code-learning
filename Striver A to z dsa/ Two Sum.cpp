class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> num(nums.size()+1);
        for(int i = 1; i < num.size(); i++){
            num[i] = nums[i - 1];
        }
        map<int,int> m;
        vector<int> v;
        for(int i = 0; i < num.size(); i++){
            if(!m[target-num[i]]){
                m[num[i]] = i;
            }
            else{
                v.push_back(i-1);
                v.push_back(m[target - num[i]]-1);
                break;
            }
        }
        return v;
    }
};