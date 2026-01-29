class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        int b=nums2.size();
        for(int i=0;i<b;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int c=nums1.size();
        if(c%2==0){
            median=(nums1[(c/2)-1]+nums1[c/2])/2.0;
        }
        else{
            median=nums1[c/2];
        }
        return median;
    }
};