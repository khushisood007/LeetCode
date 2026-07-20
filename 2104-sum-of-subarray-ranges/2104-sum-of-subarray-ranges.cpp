class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
       int n=nums.size();
       vector<int>prevless(n),nextless(n);
       vector<int>prevgreater(n),nextgreater(n);
       stack<int>s;
       while(!s.empty()){
        s.pop();
       }
       for(int i=0;i<n;i++){
        while(!s.empty() && nums[s.top()]>nums[i]){
            s.pop();
        }
        if(s.empty())
            prevless[i]=-1;
        else
            prevless[i]=s.top();
        s.push(i);
       }
       while(!s.empty()){
        s.pop();
       }
       for(int i=n-1;i>=0;i--){
        while(!s.empty() && nums[s.top()]>=nums[i]){
            s.pop();
        }
        if(s.empty())
            nextless[i]=n;
        else
            nextless[i]=s.top();
        s.push(i);
       }
       while(!s.empty()){
        s.pop();
       }
       for(int i=0;i<n;i++){
        while(!s.empty() && nums[s.top()]<nums[i]){
            s.pop();
        }
        if(s.empty())
            prevgreater[i]=-1;
        else
            prevgreater[i]=s.top();
        s.push(i);
       }
       while(!s.empty()){
        s.pop();
       }
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && nums[s.top()]<=nums[i]){
            s.pop();
        }
        if(s.empty())
            nextgreater[i]=n;
        else
            nextgreater[i]=s.top();
        s.push(i);
    }
    long long minsum=0;
    long long maxsum=0;
    for(int i=0;i<n;i++){
    long long left=i-prevless[i];
    long long right=nextless[i]-i;
    minsum=minsum+1LL * nums[i]*left*right;
    }
    for(int i=0;i<n;i++){
        long long left=i-prevgreater[i];
        long long right=nextgreater[i]-i;
        maxsum=maxsum+1LL*nums[i]*left*right;
    }
    return maxsum-minsum;
    }
};