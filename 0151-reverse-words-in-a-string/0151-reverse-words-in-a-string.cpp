class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word;
        string result;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                   word+=s[i];
            }else if(!word.empty())
            {
                words.push_back(word);
                word="";
            }
       
        }
        if(word.size()>0)
        {
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size();i++){
            result+=words[i];
            if(i<words.size()-1)
            {
                result+=" ";
            }
        }
        return result;
    }
};