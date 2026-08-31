class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());

        if((long long)m*k>bloomDay.size()) return -1;

        int ans=INT_MAX;

        while(low<=high)
        {
            int mid=(low+high)/2;
            int consecutive=0;
            int bouquet=0;
            
            for(int i=0;i<bloomDay.size();i++)
            {
               
                if(bloomDay[i]<=mid)
                {
                    consecutive++;

                    if(consecutive==k)
                    {
                        bouquet++;
                      
                        consecutive=0;
                    }
                    
                }
                else
                {
                    consecutive=0;
                }
            }

            if(bouquet>=m)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;

            }

        }
        return ans;
        
    }
};