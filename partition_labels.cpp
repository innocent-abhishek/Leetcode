class Solution {
public:
    vector<int> partitionLabels(string s) {
         int n=s.length();
         vector<int>v;
         map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }

        int st=0;
        int e=0;
        int i=0;
        while(i<n){

            e=max(e,mp[s[i]]);

            if(i==e){
                v.push_back(e-st+1);
                st=i+1;
            }
            i++;
        }
      return v;
    }
};