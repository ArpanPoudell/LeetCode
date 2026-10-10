class Solution {
public:


void findCandidates(int ind,vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>&ds)
{
    if(ind==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        
        }
        return ;
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        findCandidates(ind,arr,target-arr[ind],ans,ds);
        ds.pop_back();
    }
     findCandidates(ind+1,arr,target,ans,ds);


}


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCandidates(0,candidates,target,ans,ds);
        return ans;



        
    }
};