class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<4;++i){
           if(s1[i]==s2[i])
              continue;
           else if(s1[i]==s2[i+2] && s1[i+2]==s2[i])
               swap(s1[i],s1[i+2]);
        }
        return s1==s2;        
    }
};