class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v(n);
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            v[i].resize(n+1);
            v[i][0] = v[i][i] = 1;
            for(int j = 1; j < i; j++){
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
        }
        for(int i = 0; i < n; i++){
            vector<int>x;
            for(int j = 0; j <n; j++){
                if(v[i][j]){
                    x.push_back(v[i][j]);
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};