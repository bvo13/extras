class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i = 0;i<s.length();i++){
            if(smap.count(s[i])!=0){
                smap[s[i]]++;
            }
            else{
                smap.insert({s[i],1});
            }
            if(tmap.count(t[i])!=0){
                tmap[t[i]]++;
            }
            else{
                tmap.insert({t[i],1});
            }
        }
    return smap==tmap;
    }
};