class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;

        while(low<=high)
        {
            int mid=(low+high)/2;

            int sum=0;

            for(int num:nums)
            {
                sum+=ceil((double)num/mid);


            }

            if(sum<=threshold)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;        
    }
};