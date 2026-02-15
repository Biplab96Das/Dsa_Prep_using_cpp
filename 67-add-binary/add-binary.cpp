class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        int sum;
        while(i>=0 || j>=0 || carry==1)
        {
            sum = carry;
            if(i>=0)
            {
                sum = sum + a[i] - '0';
                --i;
            }
            if(j>=0)
            {
                sum = sum + b[j] - '0';
                --j;
            }
            res += char((sum % 2) + '0');
            carry = sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};