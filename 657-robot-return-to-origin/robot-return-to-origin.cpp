class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char s: moves)
        {
            if(s=='U')
            {
                y += 1;
            }
            if(s=='D')
            {
                y -= 1;
            }
            if(s=='L')
            {
                x += 1;
            }
            if(s=='R')
            {
                x -= 1;
            }
        }
        if(x==0 && y==0)
          return true;
        return false;  
    }
};