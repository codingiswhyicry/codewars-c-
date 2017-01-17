/*

Complete the bool_to_word (Javascript: boolToWord ) method.

Given: a boolean value

Return: a 'Yes' string for true and a 'No' string for false

*/

using namespace std;

string bool_to_word(bool value)
{
  string value_string;

  if(value == true) {

   value_string = "Yes";

  }

  if(value == false) {

    value_string = "No";
  }
  
  return value_string; 
}