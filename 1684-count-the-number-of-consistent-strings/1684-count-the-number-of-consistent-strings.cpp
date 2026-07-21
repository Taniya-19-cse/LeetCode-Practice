class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowedWord(allowed.begin(),allowed.end());
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            bool isConsistent=true;
            for(int j=0;j<words[i].size();j++)
            {
                if(!allowedWord.count(words[i][j])){
                    isConsistent=false;
                    break;
                }
            }
            if(isConsistent)
            {
                count++;
            }
        }
        return count;
    }
};