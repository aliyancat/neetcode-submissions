class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> val_freq;

        for (int i=0;i<nums.size();i++) {
            val_freq[nums[i]]++;
        }
        vector<int> arr;

        while (k > 0) {

            int max = 0;
            int freq = 0;

            for (auto srs: val_freq) {
                if (srs.second >= freq) {
                    max = srs.first;
                    freq = srs.second;

                }
            }
            arr.push_back(max);
            val_freq.erase(max);
            k--;
        }

        return arr;
    }
};
