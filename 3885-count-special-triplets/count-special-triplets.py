class Solution:
    def specialTriplets(self, nums: List[int]) -> int:
        start = {}
        mid = {}
        res = 0
        mod = 10**9 + 7

        for n in nums:
                res += mid.get(n / 2,0)
                mid[n] = start.get(n * 2,0) + mid.get(n, 0)
                start[n] = start.get(n, 0) + 1
        return res % mod