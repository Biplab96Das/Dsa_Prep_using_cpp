class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        int rev = 0;
        int ld;
        while(copy>0)
        {
            ld = copy%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
            {
                return 0;
            }
            rev = rev*10 + ld;
            copy /= 10;
        }
        return (rev==x);
    }
};