class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int>mp;
        for(int x:word){
            mp[x]++;
        }
        
        for(auto x:mp){
           mp[x.first]--;
           int frequency =0;
           bool equal= true;
        
        for(auto y:mp){
            if(y.second==0){
              continue;
            }
            if(frequency==0){
                frequency=y.second;
            }
            else if(y.second!=frequency){
                   equal=false;
                   break;
            }
        }
        mp[x.first]++;
            if(equal){
                return true;
            }
        }
            return false;
    }
};