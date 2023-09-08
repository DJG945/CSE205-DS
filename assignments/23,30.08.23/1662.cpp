class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string t1="";
        string t2="";
        for(string i:word1){
            t1=t1+i;
        }
        for(string j:word2){
            t2=t2+j;
        }
        if(t1==t2){
            return true;
        }
        else{
            return false;
        }
    }
};