/* Given an input string s, reverse the order of the words.
   Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. 
   Do not include any extra spaces.
   
   Return a string of the words in reverse order concatenated by a single space.
*/

/* 
   Example :
   Input: s = "the sky is blue"
   Output: "blue is sky the"
   
*/


class Solution {
public:
    string reverseWords(string str) {
        string result = "";
        int j = 0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i] == ' ')
            {
                if(i > j)
                    result = str.substr(j,i-j) + " " + result;
                    j = i+1;
            }
            else if(i == str.size()-1)
                result = str.substr(j,s.size()-j) + " " + result;
        }
        s=result.substr(0,result.size()-1);
        return str;
    }
};
