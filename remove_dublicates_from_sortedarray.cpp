/*if the numbes is same then MOVE ON i++
elese 
the number is not same then 
increment j by 1;
and replace the number at j with the number at i;

then store the value of j+1 in k;
and the funther numbers are not neede replace them by '_'
 return k;

*/





class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         
         int  j=0;
         int n=nums.size();
             for(int i=0;i<n;i++)
             {
                if(nums[i]!=nums[j]){
                    j++;
                    nums[j]=nums[i];
                }
             }

             int k=j+1;

             for(int h=j+1;h<n;h++)
             {
                nums[h]='_';
             }
             return k;
    }
};