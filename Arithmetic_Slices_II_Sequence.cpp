class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        long long co=0;
        vector<unordered_map<long long int,long long int>>maps(nums.size());
        for(long long i=0;i<nums.size();i++){
            for(long long j=0;j<i;j++){
                long long d=(long long int)nums[i]-(long long int)nums[j];
                long long c=maps[j][d];
                long long dd=maps[i][d];
                co+=c;
                maps[i][d]=c+dd+1;
            }
        }
        return co;
    }
};