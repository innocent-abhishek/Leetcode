/*if i is not vowels then increment i (i++)
 if j is not vowel then increment j by (j++)
 if both are vowels then swap them anf increnment i(i++) decrement j(j--)*/



class Solution {
public:

  bool isvowel(char &ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       {
        return true;
       }

       return false;
  }


    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;

         while(i<j){
          if(!isvowel(s[i]))
          {
            i++;
          }else if(!isvowel(s[j]))
          {
            j--;
          }else{//both are vowels
          swap(s[i],s[j]);
          i++;
          j--;

          }

         }
         return s;
    }
};