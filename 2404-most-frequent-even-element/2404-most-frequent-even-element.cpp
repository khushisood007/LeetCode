class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans=-1;
        int maxfreq=0;
        for(auto x:mp){
            if(x.first%2==0){
            if(x.second>maxfreq){
               maxfreq=x.second;
               ans=x.first;
            }
            else if(x.second==maxfreq){
                ans=min(ans,x.first);
            }
            }
        }
        return ans;
    }
};