//KMP Algorithm
class Solution {
public:
    vector<int> buildLPS(string &p) {
        int n = p.size();
        vector<int> lps(n, 0);
        int len = 0, i = 1;

        while (i < n) {
            if (p[i] == p[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) len = lps[len - 1];
                else i++;
            }
        }
        return lps;
    }

    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;

        vector<int> lps = buildLPS(needle);
        int i = 0, j = 0;

        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++; j++;
                if (j == m) return i - j; // found
            } else {
                if (j != 0) j = lps[j - 1];
                else i++;
            }
        }
        return -1;
    }
};
