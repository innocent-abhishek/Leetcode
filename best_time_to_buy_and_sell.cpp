class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int n=prices.size();
   int best_buy=prices[0];
   int ans=0;
   for(int i=1;i<n;i++){


    if(prices[i]>best_buy){
       ans=max(ans,prices[i]-best_buy);
    }
    else{
   best_buy=min(best_buy,prices[i]);
    }


   }
  
   return ans ; }
};