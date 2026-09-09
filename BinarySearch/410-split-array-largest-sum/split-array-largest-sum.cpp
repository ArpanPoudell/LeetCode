class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();

        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=INT_MAX;

        while(low<=high)
        {
            int mid=(low+high)/2;
            int sum=0;
            int no=1;
            for(int num:nums)
            {
                if(sum+num<=mid)
                {
                    sum+=num;
                }
                else
                {
                    no++;
                    sum=num;
                }
            }
            if(no>k)
            {
                 
              
                low=mid+1;
            }
            else
            {
                ans=mid;
               
                high=mid-1;
            }
        }

        return ans;
        
        
    }
};