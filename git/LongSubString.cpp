#include <iostream>
#include <unordered_set>
using namespace std;

class LongestSubstring {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.length(); right++) {

            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

int main() {
    LongestSubstring obj;
    cout << obj.lengthOfLongestSubstring("abcabcbb");
}