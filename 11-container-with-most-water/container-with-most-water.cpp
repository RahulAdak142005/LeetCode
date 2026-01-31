class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            if(height[i]<height[j]){
                if(height[i]*(j-i)>ans){
                    ans=height[i]*(j-i);
                }
                i++;
            }
            else if(height[i]>=height[j]){
                if(height[j]*(j-i)>ans){
                    ans=height[j]*(j-i);
                }
                j--;
            }
        }
        return ans;
    }
};