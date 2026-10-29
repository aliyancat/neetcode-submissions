class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> groups;


        for (auto str : str) {

            vector<int> count(26,0);


            for (auto ch: str) {

                count[ch-'a']++;
            }

            groups[count].push_back(str);


        }


        vector<vector<string>> result;

        for (auto entry: groups) {
            result.push_back(entry.second);
        }
        return result;
    }
};
