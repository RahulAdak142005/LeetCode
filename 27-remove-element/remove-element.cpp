class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a=nums.size();
        int count=0;
        vector<int>v;
        for(int i=0,j=a-1;i<=j;){
            if(nums[j]==val){
                j--;
            }
            else if(nums[i]==val){
                nums[i]=nums[j];
                v.push_back(nums[i]);
                i++;
                j--;
                count++;
            }
            else if(nums[i]!=val){
                v.push_back(nums[i]);
                count++;
                i++;
            }
        }
        return count;
    }
};