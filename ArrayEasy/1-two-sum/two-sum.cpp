class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapss;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int remaining=target-num;
            if(mapss.find(remaining)!=mapss.end())
            {
                return {i,mapss[remaining]};
            }
            mapss[num]=i;
        }
        return{};
    }
        
        
    };
