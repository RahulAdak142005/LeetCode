class Solution {
public:
    int divide(int dividend, int divisor) {
        long long quotient=0;
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        if(dividend==INT_MAX && divisor==-1){
            return (-1*INT_MAX);
        }
        int sign=((dividend>0)^(divisor>0))? -1 : 1;
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        while (a >= b) {
            a -= b;
            quotient++;
        }
        long long x=sign * quotient;
        if(x>INT_MAX){
            return INT_MAX;
        }
        else if(x<INT_MIN){
            return INT_MIN;
        }
        return x;
    }
};