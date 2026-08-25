class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        long long low=0;
        long long high=n-1;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(nums[mid]==target) return true;

            if(nums[low]==nums[mid]&&nums[mid]==nums[high])
            {
                low=low+1;
                high=high-1;
                continue;
            }

            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target && target<=nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(target<=nums[high]&&nums[mid]<=target)
                {
                    low=mid+1;

                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return false;
        
    
    }
};