class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int>s;
       for(string op:operations){
        if(op=="C")
            s.pop();
        else if(op=="D")
            s.push(2*(s.top()));
        else if(op=="+"){
            int first=s.top();
            s.pop();
            int second=s.top();
            s.push(first);
            s.push(first+second);
        }
        else{
            s.push(stoi(op));
        }
        
       }
       int ans=0;
       while(!s.empty()){
        ans=ans+s.top();
        s.pop();
       }
       return ans;
    }
};