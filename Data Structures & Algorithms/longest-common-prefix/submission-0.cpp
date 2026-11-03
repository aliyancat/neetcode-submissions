class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        for (int i = 0; i < strs[0].size(); i++) {

            bool flag = true;

            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].size() || strs[0][i] != strs[j][i]) {
                    flag = false;
                    break;
                }
            }

            if (flag == true) {
                ans += strs[0][i];
            }
            else {
                break;
            }
        }

        return ans;
    }
};