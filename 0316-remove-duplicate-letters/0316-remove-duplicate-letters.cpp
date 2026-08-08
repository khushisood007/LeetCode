class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int>mp;
        for(char x:s){
            mp[x]++;
        }
        string result = "";
        unordered_set<char>s1;
        for(char x:s){
            mp[x]--;
            if(s1.count(x)){
                continue;
            }
            while(!result.empty()&& result.back()>x && mp[result.back()]>0){
                s1.erase(result.back());
                result.pop_back();
            }
            result.push_back(x);
            s1.insert(x);
        }
        return result;
    }
};