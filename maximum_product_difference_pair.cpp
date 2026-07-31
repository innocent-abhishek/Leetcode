class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int l=nums[n-1];
        int sl=nums[n-2];
        int s=nums[0];
        int ss=nums[1];

        return ((l*sl)-(s*ss));
    }
};