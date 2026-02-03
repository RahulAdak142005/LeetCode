class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int s=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<s-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1,k=s-1;j<k;){
                if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                }
            }
        }
        return v;
    }
};