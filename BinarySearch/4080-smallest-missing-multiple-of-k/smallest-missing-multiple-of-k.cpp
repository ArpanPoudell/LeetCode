class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> mpp;
        for(auto it:nums)
        {
            mpp.insert(it);

        }
        int pro=k;
        for(int i=1; ; i++)
        {
            pro=k*i;
            if(mpp.find(pro)==mpp.end())
            {
                break;
            }
        }
        return pro;
        
        
    }
};