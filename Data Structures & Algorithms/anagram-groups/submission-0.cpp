class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //map from vector<int> to vector<str>
        std::map<vector<int>, vector<string>> anagrams;

        for (int i = 0; i < strs.size(); i++) {
            // convert to vector
            vector<int> a(26, 0);

            string target = strs[i];
            
            for (int j = 0; j < target.length(); j++) {
                int letter = target[j] - 'a';
                a[letter]++;
            }

            // hash it
            anagrams[a].push_back(target);
        }

        vector<vector<string>> ret;

        for (const auto& [k, v] : anagrams) {
            ret.push_back(v);
        }

        return ret;
    }
};
