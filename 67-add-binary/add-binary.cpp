class Solution {
public:
    string addBinary(string a, string b) {
        char carry='0';
        int n1=a.length()-1;
        int n2=b.length()-1;
        string ans="";
        while(n1>=0 && n2>=0){
            if(a[n1]=='0' && b[n2]=='0' && carry=='0'){
                ans.insert(0,1,'0');
                carry='0';
                n1--;
                n2--;
            }
            else if(a[n1]=='0' && b[n2]=='0' && carry=='1'){
                ans.insert(0,1,'1');
                carry='0';
                n1--;
                n2--;
            }
            else if(a[n1]=='0' && b[n2]=='1' && carry=='0'){
                ans.insert(0,1,'1');
                carry='0';
                n1--;
                n2--;
            }
            else if(a[n1]=='0' && b[n2]=='1' && carry=='1'){
                ans.insert(0,1,'0');
                carry='1';
                n1--;
                n2--;
            }
            else if(a[n1]=='1' && b[n2]=='0' && carry=='0'){
                ans.insert(0,1,'1');
                carry='0';
                n1--;
                n2--;
            }
            else if(a[n1]=='1' && b[n2]=='0' && carry=='1'){
                ans.insert(0,1,'0');
                carry='1';
                n1--;
                n2--;
            }
            else if(a[n1]=='1' && b[n2]=='1' && carry=='0'){
                ans.insert(0,1,'0');
                carry='1';
                n1--;
                n2--;
            }
            else if(a[n1]=='1' && b[n2]=='1' && carry=='1'){
                ans.insert(0,1,'1');
                carry='1';
                n1--;
                n2--;
            }
        }
        while(n1>=0){
            if(a[n1]=='0' && carry=='0'){
                ans.insert(0,1,'0');
                carry='0';
                n1--;
            }
            else if(a[n1]=='0' && carry=='1'){
                ans.insert(0,1,'1');
                carry='0';
                n1--;
            }
            else if(a[n1]=='1' && carry=='0'){
                ans.insert(0,1,'1');
                carry='0';
                n1--;
            }
            else if(a[n1]=='1' && carry=='1'){
                ans.insert(0,1,'0');
                carry='1';
                n1--;
            }
        }
        while(n2>=0){
            if(b[n2]=='0' && carry=='0'){
                ans.insert(0,1,'0');
                carry='0';
                n2--;
            }
            else if(b[n2]=='0' && carry=='1'){
                ans.insert(0,1,'1');
                carry='0';
                n2--;
            }
            else if(b[n2]=='1' && carry=='0'){
                ans.insert(0,1,'1');
                carry='0';
                n2--;
            }
            else if(b[n2]=='1' && carry=='1'){
                ans.insert(0,1,'0');
                carry='1';
                n2--;
            }
        }
        if(carry=='1'){
            ans.insert(0,1,'1');
        }
        return ans;
    }
};