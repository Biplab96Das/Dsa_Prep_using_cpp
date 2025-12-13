class Solution {
public:
    bool isValidCode(string &s)
    {
        if(!s.size())
           return false;
        for(char c:s)
        {
            if(!isalnum(c)&&c!='_')
              return false;  
        }   
        return true;
    }
    bool isValidBusiness(string &s)
    {
        
        if(s=="electronics" || s=="grocery" || s=="pharmacy" || s=="restaurant")
           return true; 
        return false;     
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();  
        map<string,multiset<string>> mp;
        for(int i=0;i<n;++i)
        {
            if(isValidCode(code[i]) && isValidBusiness(businessLine[i]) && isActive[i])
            {
               mp[businessLine[i]].insert(code[i]);
            }
        }    
        vector<string>ans;
        for(auto i: mp)
        {
            for(string j:i.second)
            {
                ans.push_back(j);
            }
        }
            
        return ans;
    }
};