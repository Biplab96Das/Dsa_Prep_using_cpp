class Solution {
    public boolean isPalindrome(int x) {
        int rev = 0;
        int copy = x;
        int ld;
        while(copy>0)
        {
          ld = copy%10;
          if(rev>Integer.MAX_VALUE/10 || rev<Integer.MIN_VALUE/10)
          {
            return false;
          }
          rev = rev*10 + ld;
          copy /= 10;
        }
        return (rev == x);
    }
}