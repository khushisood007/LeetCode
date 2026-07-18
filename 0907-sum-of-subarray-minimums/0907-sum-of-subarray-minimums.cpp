class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n),right(n);
        const int MOD=1e9+7;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&arr[s.top()]>arr[i]){
                s.pop();
            }
            if(s.empty())
                left[i]=i+1;
            else
                left[i]=i-s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&& arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(s.empty())
                right[i]=n-i;
            else
                right[i]=s.top()-i;
            s.push(i);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans=(ans+1LL*arr[i]*left[i]*right[i])%MOD;
        }
        return ans;
    }
};