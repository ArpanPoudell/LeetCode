class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0) {return 0;}

        sort(nums.begin(),nums.end());

        int count=0;
        int longest=1;
        int lastsmall=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(lastsmall==nums[i]-1)
            {
                count+=1;
                lastsmall=nums[i];


            }
            else if(nums[i]!=lastsmall)
            {
                count=1;
                lastsmall=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;


        
        
    }
};