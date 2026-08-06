class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> seen;
        int index=0;
        for(auto num:nums)
        {
            if(seen.find(num)==seen.end())
            {
                seen.insert(num);
                nums[index]=num;
                index++;
            }
        }
        return index;

        
    }
};