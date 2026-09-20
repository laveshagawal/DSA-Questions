class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char c : s) {
            freq[c]++;
        }

        // Store characters and frequencies
        vector<pair<char, int>> chars(freq.begin(), freq.end());

        // Sort by frequency in decreasing order
        sort(chars.begin(), chars.end(),
             [](auto& a, auto& b) { return a.second > b.second; });

        // Build answer
        string ans;

        for (auto& [ch, count] : chars) {
            ans.append(count, ch);
        }

        return ans;
    }
};