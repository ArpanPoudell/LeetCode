class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low=*max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans=INT_MAX;

        while(low<=high)
        {
            int mid=(low+high)/2;

            int daysneeded=1;
            int currweight=0;

            for(int weight:weights)
            {
                if(weight+currweight<=mid)
                {
                    currweight+=weight;
                }
                else
                {
                    daysneeded++;
                    currweight=weight;
                }

               


            }

            if(daysneeded<=days)
            {
                ans=mid;
                 high=mid-1;
            }
            else low=mid+1; 
        }
        return ans;
        
    }
};