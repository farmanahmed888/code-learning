class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int hsh[10000];
        for(int i= 0; i < 10000; i++) hsh[i] = 0;
        for(auto x : nums){
            hsh[x] = 1;
        }
        int missing = -1;
        for(int i = 0; i < 10000; i++){
           if(hsh[i] == 0){
                missing = i;
               break;
           }
        }
        return missing;
    }
};