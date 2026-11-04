class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mep;

        for (int i=0;i<nums.size();i++) {

            mep[nums[i]]++;
        }
        for (auto ns : mep) {
            if (ns.second > nums.size()/2) {
                return ns.first;
            }
        }
    }
};