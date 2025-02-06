class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> charSet;
        int left = 0, right = 0, maxLength = 0;
        while(right < s.size()){
            if(charSet.find(s[right]) == charSet.end()){
                charSet.insert(s[right]);
                right++;
                maxLength = max(maxLength, right - left);
            }else{
                charSet.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};