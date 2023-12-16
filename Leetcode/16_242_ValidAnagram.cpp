class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26);
        if(s == t){
            return 1;
        }
        if(s.size() != t.size()){
            return 0;
        }
        for(int i=0; i<s.size(); i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        
        for(int i=0; i<26; i++){
            if(v[i]){
                return false;
            }
        }
        return true;
    }
};
