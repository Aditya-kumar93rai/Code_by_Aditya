class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;

        for (int num = 100; num <= 998; num += 2) {
            int x = num;

            int a = x / 100;
            int b = (x / 10) % 10;
            int c = x % 10;

            vector<int> freq(10, 0);

            for (int d : digits)
                freq[d]++;

            if (freq[a] > 0) {
                freq[a]--;

                if (freq[b] > 0) {
                    freq[b]--;

                    if (freq[c] > 0)
                        ans.push_back(num);
                }
            }
        }

        return ans;
    }
};