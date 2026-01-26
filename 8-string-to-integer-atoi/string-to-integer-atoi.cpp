class Solution {
public:
    int myAtoi(string s) {
        char *end;
        long a=strtol(s.c_str(),&end,10);
        if(a>INT_MAX){
            return INT_MAX;
        }
        else if(a<INT_MIN){
            return INT_MIN;
        }
        return a;
    }
};