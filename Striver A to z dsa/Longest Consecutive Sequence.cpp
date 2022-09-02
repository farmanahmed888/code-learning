class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        if(!nums.size()) return 0;
        for(auto x : nums){
            s.insert(x);
        }
        auto it = s.begin();
        auto x = s.begin();
        it++;
        int cnt = 0;
        int max = 0;
        for(;it != s.end(); it++){
            if(*it - *x == 1){
                cnt++;
                max = (max < cnt)?cnt:max;
            }else{
                cnt = 0;
            }
            x++;
        }
        return max+1;
    }
};