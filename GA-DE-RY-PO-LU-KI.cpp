
/*

 Introduction
 
 The GADERYPOLUKI is a simple substitution cypher used in scouting to encrypt messages. The encryption is based on short, easy to remember key. The key is written as paired letters, which are in the cipher simple replacement.
 
 The most frequently used key is "GA-DE-RY-PO-LU-KI".
 
 G => A
 g => a
 a => g
 A => G
 D => E
 etc.
 The letters, which are not on the list of substitutes, stays in the encrypted text without changes.
 
 Task
 
 Your task is to help scouts to encrypt and decrypt thier messages. Write the Encode and Decode functions.
 
 Input/Output
 
 The input string consists of lowercase and uperrcase characters and white . The substitution has to be case-sensitive.
 
 */

#include <string>
#include <iostream>
using namespace std;

char switchChar(char c) {
    
    char return_c;
    
    switch(c) {
            
        case 'g' : { return_c = 'a'; break; }
            
        case 'G' : { return_c = 'A'; break; }
            
        case 'a' : { return_c = 'g'; break; }
            
        case 'A' : { return_c = 'G'; break; }
            
        case 'd' : { return_c = 'e'; break; }
            
        case 'D' : { return_c = 'E'; break; }
            
        case 'e' : { return_c = 'd'; break; }
            
        case 'E' : { return_c = 'D'; break; }
            
        case 'r' : { return_c = 'y'; break; }
            
        case 'R' : { return_c = 'Y'; break; }
            
        case 'y' : { return_c = 'r'; break; }
            
        case 'Y' : { return_c = 'R'; break; }
            
        case 'p' : { return_c = 'o'; break; }
            
        case 'P' : { return_c = 'O'; break; }
            
        case 'o' : { return_c = 'p'; break; }
            
        case 'O' : { return_c = 'P'; break; }
            
        case 'l' : { return_c = 'u'; break; }
            
        case 'L' : { return_c = 'U'; break; }
            
        case 'u' : { return_c = 'l'; break; }
            
        case 'U' : { return_c = 'L'; break; }
            
        case 'k' : { return_c = 'i'; break; }
            
        case 'K' : { return_c = 'I'; break; }
            
        case 'i' : { return_c = 'k'; break; }
            
        case 'I' : { return_c = 'K'; break; }
            
        default :  { return_c = c;   break; }
    }
    
    return return_c;
    
}


string encode (const string& str) {
    
    string encoded_str;
    
    char strin[str.size()];
    
    for (int i = 0; i < str.size(); i++) {
        
        char selected = str[i];
        
        char switched;
        
        switched = switchChar(selected);
        
        strin[i] = switched;
        
    }
    
    encoded_str = strin;
    
    cout << encoded_str << endl;
    
    return encoded_str;
}


string decode (const string& str) {
    
    string decoded_str;
    
    char strin[str.size()];
    
    for (int i = 0; i < str.size(); i++) {
        
        char selected = str[i];
        
        char switched;
        
        switched = switchChar(selected);
        
        strin[i] = switched;
        
    }
    
    decoded_str = strin;
    
    cout << decoded_str << endl;
    
    return decoded_str;
}

