/*
 
 Your task is to return how many times a string contains a given character.
 
 The function takes a string(inputS) as a paremeter and a char(charS) which is the character that you will have to find and count.
 
 For example, if you get an input string "Hello world" and the character to find is "o", return 2.
 
 */

#include <string>

static int stringCounter(std::string inputS,char charS) {
    
    int char_count = 0;
    
    for (int i = 0; i < inputS.size(); i++) {
        
        char selected = inputS[i];
        
        if (selected == charS) {
            
            char_count++;
        }
    }
    
    return char_count;
}
