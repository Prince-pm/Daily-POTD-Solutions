class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        
        while (word.length() < k) {
            string next = "";
            for (char ch : word) {
                // next character with wrap-around
                next += (ch == 'z') ? 'a' : ch + 1;
            }
            word += next;
        }
        
        return word[k - 1];
    }
};