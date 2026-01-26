class Solution {
public:
    // function to create pattern from a string
    vector<int> makePattern(string str) {
        string p = "";
        vector<int> pattern;

        // build unique string p
        for (int i = 0; i < str.size(); i++) {
            bool found = false;
            for (int j = 0; j < p.size(); j++) {
                if (p[j] == str[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                p.push_back(str[i]);
            }
        }

        // map characters to index (number)
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < p.size(); j++) {
                if (str[i] == p[j]) {
                    pattern.push_back(j);
                    break;
                }
            }
        }

        return pattern;
    }

    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> patternS = makePattern(s);
        vector<int> patternT = makePattern(t);

        return patternS == patternT;
    }
};
