class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        int k = 0;
        for(auto x : m){
            nums[k++] = x.first;
        }
        return m.size();
    }
};