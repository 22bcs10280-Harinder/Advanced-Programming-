class Solution {
public:
    bool isPalindrome(string s) {
        string filteredString;
        
        for (char c : s) {
            if (isalnum(c)) {
                filteredString += tolower(c);
            }
        }
        
        int n = filteredString.length();
        return check(0, n - 1, filteredString);
    }

private:
    bool check(int left, int right, const string& s) {
        if (left >= right) {
            return true;
        }
        if (s[left] != s[right]) {
            return false;
        }
        return check(left + 1, right - 1, s);
    }
};