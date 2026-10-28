class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>key_val;

        for (int i=0;i<nums.size();i++) {
            key_val[nums[i]] = i;
        }

        for (int i=0;i<nums.size();i++) {

            int difference = target - nums[i];
            auto it = key_val.find(difference);

            if (it != key_val.end()){
                return {i,it->second};
            }
        }
    }
};
