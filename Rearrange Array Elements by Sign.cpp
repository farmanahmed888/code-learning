class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        vector<int>ans;
        for(auto x : nums){
            if(x >= 0){
                p.push_back(x);
            }else{
                n.push_back(x);
            }
        }
        for(int i = 0; i < p.size(); i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};