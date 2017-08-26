/*
 
 Complete the bool_to_word (PHP: boolToWord ) method.
 
 Given: a boolean value
 
 Return: a 'Yes' string for true and a 'No' string for false
 
 */

using namespace std;

string bool_to_word(bool value)
{
    string answer;
    value == true ? answer = "Yes": answer = "No";
    return answer;
}
