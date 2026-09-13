class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        // Vector to store the last seen index of each ASCII character
        // Initialized to -1 because no characters have been seen yet
        std::vector<int> lastSeen(128, -1);
        
        int maxLength = 0;
        int left = 0; // Left boundary of the sliding window
        
        // Iterate through the string with the right pointer
        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];
            
            // If the character has been seen before AND its last occurrence 
            // falls inside our current window, move the left pointer forward
            if (lastSeen[currentChar] >= left) {
                left = lastSeen[currentChar] + 1;
            }
            
            // Update the last seen position of the character
            lastSeen[currentChar] = right;
            
            // Calculate current window size and update max length
            maxLength = std::max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};