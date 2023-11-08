class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(st.empty()==0){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while(st.empty()==0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};