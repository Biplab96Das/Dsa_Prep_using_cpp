class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int ld;
        int copy=x;
        while(copy != 0)
        {
            ld = copy%10;
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            copy /= 10;
            rev = rev*10 + ld;
        }
        return rev;
    }
};