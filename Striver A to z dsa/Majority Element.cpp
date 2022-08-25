//Moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int cand = 0;
        for(auto x : nums){
            if(cnt == 0) cand = x;
            if(cand == x) cnt++;
            else cnt--;
        }
        return cand;
    }
};