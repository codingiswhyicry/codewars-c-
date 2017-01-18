/*
Your task is to return how many times a string contains a given character.

The function takes a string(inputS) as a paremeter and a char(charS) which is the character that you will have to find and count.

For example, if you get an input string "Hello world" and the character to find is "o", return 2.

*/


#include <string>
static int stringCounter(std::string inputS,char charS){
  int length = inputS.size();
  int char_num = 0;
  for(int x(0); x < length; x++) { 
    if (inputS[x] == charS){   char_num++;   } 
  }
  return char_num;
}
