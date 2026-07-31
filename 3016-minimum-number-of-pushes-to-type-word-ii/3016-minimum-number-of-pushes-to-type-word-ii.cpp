class Solution {
public:
    int minimumPushes(string word) {
     vector<int> freq(26,0);
     int result=0;
     for(int i=0;i<word.size();i++)
     {
        freq[word[i]-'a']++;
     }
     sort(freq.begin(),freq.end(),greater<int>());
     for(int i=0;i<freq.size();i++)
     {
        int fq=freq[i];
        int press=i/8+1;
        result+=press*fq;
     }
     return result;
    }
};