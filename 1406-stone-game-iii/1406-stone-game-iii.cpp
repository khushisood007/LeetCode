class Solution {
public:
vector<int>t;
    int solve(vector<int>& stoneValue,int i){
        if(i>=stoneValue.size()){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int result=stoneValue[i]-solve(stoneValue,i+1); 
        if(i+1<stoneValue.size()){
        result=max(result,stoneValue[i]+stoneValue[i+1]-solve(stoneValue,i+2));
        }
        if(i+2<stoneValue.size()){
        result=max(result,stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-solve(stoneValue,i+3));
        }
        return t[i]=result;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        t.resize(stoneValue.size()+1,-1);
        int diff=solve(stoneValue,0);
        if(diff<0){
            return "Bob";
        }
        else if(diff>0){
            return "Alice";
        }
        else{
            return"Tie";
        }
    }
};