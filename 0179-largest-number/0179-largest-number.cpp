class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(to_string(nums[i]));
        }
        sort(vec.begin(),vec.end(),[](string a,string b){
        return a+b>b+a;
    });
    if(vec[0]=="0"){
        return "0";
    }
    string ans="";
    for(string x:vec){
        ans=ans+x;
    }
    return ans;
    }
};