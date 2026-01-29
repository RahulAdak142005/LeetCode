class Solution {
public:
    string check(string s,int i,int j,int n){
        if(i==j){
            i--;
            j++;
        }
        while(i>=0 && j<n){
            if(s[i]==s[j]){
                i--;
                j++;
            }
            else{
                return s.substr(i+1,j-i-1);
            }
        }
        return s.substr(i+1,j-i-1);
    }
    string longestPalindrome(string s) {
        int n=s.length();
        string ans=s.substr(0,1);
        for(int i=0;i<n-1;i++){
            string temp1=check(s,i,i,n);
            string temp2=check(s,i,i+1,n);
            int x=temp1.length();
            int y=temp2.length();
            if(x>ans.length()){
                ans=temp1;
            }
            if(y>ans.length()){
                ans=temp2;
            }
        }
        return ans;
    }
};