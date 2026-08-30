class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
       int ans=INT_MAX;

        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long totalhours=0;

            for(int pile:piles)
            {
                totalhours+=ceil((double) pile/mid);

            }

            if(totalhours<=h)
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