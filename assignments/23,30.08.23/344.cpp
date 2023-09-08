class Solution {
public:
    void rev(vector<char>& s,int i){
        int e=s.size()-1;
        if(i<=e/2){
            swap(s[i],s[e-i]);
            i++;
            rev(s,i);
        }
    }
    void reverseString(vector<char>& s) {
        int e=s.size()-1;
        int i=0;
        rev(s,i);
    }
};