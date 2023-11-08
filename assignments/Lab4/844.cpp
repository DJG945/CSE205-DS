class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>A;
        stack<int>B;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(A.empty()==0){
                    A.pop();
                }
            }
            else{
                A.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(B.empty()==0){
                    B.pop();
                }
            }
            else{
                B.push(t[i]);
            }
        }
        if(A==B){
            return true;
        }
        else{
            return false;
        }
    }
};