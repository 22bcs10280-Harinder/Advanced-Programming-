class Solution 
{
public:
string longestNiceSubstring(string s) {
        if (s.size() < 2){
            return "";
        }
        unordered_set<char> st(begin(s), end(s));
        for (int i = 0; i < s.size(); i++) {
             if (st.find((char) toupper(s[i])) == end(st) || st.find((char) tolower(s[i])) == end(st)) {
                string left = longestNiceSubstring(s.substr(0, i));
                string right = longestNiceSubstring(s.substr(i + 1));
                return left.size() >= right.size() ? left : right;
            }
        }
        return s;
    }
};