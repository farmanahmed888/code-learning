//https://leetcode.com/problems/combinations/
class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &ds, int n, int k, int idx){
        if(k == ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = idx; i <= n; i++){
            ds.push_back(i);
            solve(ans, ds, n, k,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        int idx = 1;
        vector<vector<int>> ans;
        vector<int> ds;
        solve(ans, ds, n, k, idx);
        return ans;
    }
};