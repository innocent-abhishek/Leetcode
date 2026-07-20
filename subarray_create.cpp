#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> nums={1,2,3,4};
   int n=nums.size();

  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
         cout<<"("<<i<<","<<j<<")";
    }
    cout<<endl;

  }


}
/*out put
(0,0)(0,1)(0,2)(0,3)
(1,1)(1,2)(1,3)
(2,2)(2,3)
(3,3)*/