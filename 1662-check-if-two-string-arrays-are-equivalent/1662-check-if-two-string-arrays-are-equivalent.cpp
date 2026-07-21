class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word="";
        string wordTwo="";
        for(int i=0;i<word1.size();i++)
        {
            word+=word1[i];
        }
          for(int i=0;i<word2.size();i++)
        {
            wordTwo+=word2[i];
        }
        if(word==wordTwo)
        {
            return true;
        }
        return false;
    }
};