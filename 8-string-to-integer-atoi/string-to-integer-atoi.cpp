class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        
        // 1. Skip spaces
        while(i < n && s[i] == ' ') i++;

        // 2. Check sign
        int sign = 1;
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        // 3. Convert digits
        long result = 0;

        while(i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Handle overflow BEFORE adding
            if(result > (INT_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return sign * result;
    }
};