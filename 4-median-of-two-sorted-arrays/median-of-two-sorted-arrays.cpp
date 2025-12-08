class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>Merged;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
               Merged.push_back(nums1[i++]);
            else
              Merged.push_back(nums2[j++]);  
        }
        while(i<nums1.size())
           Merged.push_back(nums1[i++]);
        while(j<nums2.size())
           Merged.push_back(nums2[j++]);
        int n = nums1.size() + nums2.size();
        cout<<"Size of Merged array : "<<n<<" == "<<Merged.size();
        if(n % 2 == 1)
          return (double)(Merged[n/2]);
        else
          return ((double)((double)Merged[n/2 - 1] + (double)Merged[n/2]) / 2);        
    }
};