class Solution {
public:
    bool canAliceWin(std::vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;
        int totalSum = 0;

        for (int num : nums) {
            if (num < 10) {
                singleDigitSum += num;
            } else if (num < 100) {
                doubleDigitSum += num;
            }
            totalSum += num;
        }

        // Alice wins if single-digit sum > Bob's sum 
        // OR double-digit sum > Bob's sum
        bool winWithSingle = singleDigitSum > (totalSum - singleDigitSum);
        bool winWithDouble = doubleDigitSum > (totalSum - doubleDigitSum);

        return winWithSingle || winWithDouble;
    }
};