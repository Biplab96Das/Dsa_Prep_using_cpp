class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>Merged;
        int cnt=0;
        int n = nums1.size() + nums2.size();
        int idx1 = n/2;
        int idx2 = idx1-1;
        int idx1ele=-1;
        int idx2ele=-1;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
               {if(cnt==idx1)
                  idx1ele=nums1[i];
                if(cnt==idx2)
                  idx2ele=nums1[i];  
                cnt++;++i;}
            else
              {if(cnt==idx1)
                  idx1ele=nums2[j];
                if(cnt==idx2)
                  idx2ele=nums2[j];  
                cnt++;++j;}  
        }
        while(i<nums1.size())
        {
            if(cnt==idx1)
                  idx1ele=nums1[i];
            if(cnt==idx2)
                  idx2ele=nums1[i];  
            cnt++;++i; 
        }
        while(j<nums2.size())
        {
            if(cnt==idx1)
                  idx1ele=nums2[j];
            if(cnt==idx2)
                  idx2ele=nums2[j];  
            cnt++;++j;
        }
        cout<<"Size of Merged array : "<<n<<" == "<<Merged.size();
        if(n % 2 == 1)
          return (double)(idx1ele);
        else
          return ((double)((double)idx1ele + (double)idx2ele) / 2);        
    }
};