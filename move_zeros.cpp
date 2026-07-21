/*if the number is not zero 
then swap the values of i and k;
increment k by 1;
k++;
else 
just MOVE ON ;
i++;
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
        int k=0;
        int n=nums.size();
       for(int i=0;i<n;i++)
       {  if(nums[i]!=0)
       {
        swap(nums[i],nums[k]);
        k++;
       }



       }
    }
};