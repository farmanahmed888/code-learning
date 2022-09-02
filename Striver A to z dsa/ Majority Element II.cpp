//moore voting ALGO VARIATION
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int num1 = -1;
        int num2 = -1;
        for(auto x : nums){
            if(x == num1){
                cnt1++;
            }else if(x == num2){
                cnt2++;
            }else if(cnt1 == 0){
                num1 = x;
                cnt1 = 1;
            }else if(cnt2 == 0){
                num2 = x;
                cnt2 = 1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(auto x : nums){
            if(x == num1) cnt1++;
            if(x == num2) cnt2++;
        }
        vector<int> v;
        if(cnt1 > n/3) v.push_back(num1);
        if(cnt2 > n/3) v.push_back(num2);
        if(num1 == num2) v.pop_back();
        return v;
    }
};