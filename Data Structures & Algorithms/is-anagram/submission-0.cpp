class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, size_t> map1;
        std::unordered_map<char, size_t> map2;

        for (size_t i = 0; i < s.length(); i++) {
            char target = s[i];
            if (map1.count(target))
                map1[target]++;
            else
                map1[target] = 1;
        }

        for (size_t i = 0; i < t.length(); i++) {
            char target = t[i];
            if (map2.count(target))
                map2[target]++;
            else
                map2[target] = 1;
        }

        for (const auto& [key, value] : map1) {
            if (map1[key] != map2[key])
                return false;
        }

        for (const auto& [key, value] : map2) {
            if (map1[key] != map2[key])
                return false;
        }

        return true;
    }
};
