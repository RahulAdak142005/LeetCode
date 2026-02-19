class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0 && digits[i]==9){
            digits[i]=0;
            i--;
        }
        if(i==-1){
            vector<int>v(n+1);
            v[0]=1;
            for(int j=1;j<=n;j++){
                v[j]=digits[j-1];
            }
            return v;
        }
        if(i!=-1){
            digits[i]++;
        }
        return digits;
    }
};