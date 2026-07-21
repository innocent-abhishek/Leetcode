/*using standard tenplate library
first copy the element of the array in the new array
then copy the elements to the new array form end of the arra to start of the array 
as the return was array so we that to return the new array ans
*/
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }

        for(int i=n-1;i>=0;i--)
        {
            ans.push_back(nums[i]);
        }

       return ans;
    }
};