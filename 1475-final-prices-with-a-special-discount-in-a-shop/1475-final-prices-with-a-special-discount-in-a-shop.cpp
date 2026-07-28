class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>answer(prices.size());
        stack<int>s;
        for(int i=prices.size()-1;i>=0;i-- ){
            while(!s.empty() && s.top()>prices[i]){
                s.pop();
            }
            if(s.empty())
                answer[i]=prices[i];
            else
                answer[i]=prices[i]-s.top();
            s.push(prices[i]);
            
        }
        return answer;
    }
};