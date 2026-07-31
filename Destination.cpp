class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>st;
        int n=paths.size();
         string src;
         string dest;
        for(int i=0;i<n;i++){
            src=paths[i][0];
            st.insert(src);
        }

         for(int i=0;i<n;i++){
             dest=paths[i][1];
             if(st.find(dest)==st.end()){
                return dest;
             }

             
         }
          return " ";
    }
};