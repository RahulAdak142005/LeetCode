class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> stack1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack1.push(s[i]);
            } else {
                if ((s[i] == ')' || s[i] == '}' || s[i] == ']') &&
                    stack1.empty()) {
                    return false;
                } else {
                    if (s[i] == ')' && stack1.top() == '(') {
                        stack1.pop();
                    } else if (s[i] == '}' && stack1.top() == '{') {
                        stack1.pop();
                    } else if (s[i] == ']' && stack1.top() == '[') {
                        stack1.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if (stack1.empty()) {
            return true;
        }
        return false;
    }
};