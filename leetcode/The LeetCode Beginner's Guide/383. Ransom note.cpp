//8 January 2026
//383. Ransom note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);

        for(int i = 0; i < magazine.length(); i++) {
            char ch = magazine[i];
            count[ch - 'a']++;
        }

        for(int i = 0; i < ransomNote.length(); i++) {
            char ch = ransomNote[i];
            if(count[ch - 'a'] == 0) {
                return false;
            }
            count[ch - 'a']--;
        }
        
        return true;
    }
};

//Talked with Shradhay in the chat after a quite time, working on my PBl project for now 
//toodles
