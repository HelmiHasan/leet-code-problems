//Using for loop to traverse the word
//Two variables to count Capital letter and letter position initialize them as zero.
//
class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int i = 0, count = 0, letter = 0;
        
        for(; i < word.size(); i++)
        {
            //Iterate over the word if the currnt letter btn A&Z increment count
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                count++; letter = i;
            }
        }
        //Test three cases
        //Case 01 All letters in the word are not capitals
        //Case 02 All letters in this word are not capitals
        //Case 03 Only the first letter in this word is capital
        
        if(count == word.size() || count == 0 || (count == 1 && letter == 0))
            return 1;
        
        return 0;
        
    }
};