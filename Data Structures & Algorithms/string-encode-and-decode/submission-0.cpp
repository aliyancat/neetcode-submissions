class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded;

        for (const string& str : strs) {
            // Store the length first, followed by '#', then the string.
            encoded += to_string(str.size()) + "#" + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            // Find the '#' separating the length from the string.
            int delimiter = s.find('#', i);

            // Parse the string length.
            int length = stoi(s.substr(i, delimiter - i));

            // The string starts immediately after '#'.
            int start = delimiter + 1;
            result.push_back(s.substr(start, length));

            // Move to the next encoded string.
            i = start + length;
        }

        return result;
    }
};