/*

Introduction

Digital Cypher assigns to each letter of the alphabet unique number. For example:

 a  b  c  d  e  f  g  h  i  j  k  l  m
 1  2  3  4  5  6  7  8  9 10 11 12 13
 n  o  p  q  r  s  t  u  v  w  x  y  z
14 15 16 17 18 19 20 21 22 23 24 25 26
Instead of letters in encrypted word we write the corresponding number, eg. The word scout:

 s  c  o  u  t
19  3 15 21 20
Then we add to each obtained digit consecutive digits from the key. For example. In case of key equal to 1939 :

   s  c  o  u  t
  19  3 15 21 20
 + 1  9  3  9  1
 ---------------
  20 12 18 30 21

   m  a  s  t  e  r  p  i  e  c  e
  13  1 19 20  5 18 16  9  5  3  5
+  1  9  3  9  1  9  3  9  1  9  3
  --------------------------------
  14 10 22 29  6 27 19 18  6  12 8
Task

Write a function that accepts str string and key number and returns an array of integers representing encoded str.

Input / Output

The str input string consists of lowercase characters only.
The key input number is a positive integer.

Example

Encode("scout",1939);  ==>  [ 20, 12, 18, 30, 21]
Encode("masterpiece",1939);  ==>  [ 14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8]

*/

#include <iostream>  //includes iostream
#include <string>    //includes string library
#include <vector>    //includes vector library 
#include <algorithm>

using namespace std;

class Kata {
    
    public:

     static int char_to_int(char a) {
        
        int return_int; 
        
        switch(a) {
            
          case 'a' : { return_int = 1;  break; } 
          case 'b' : { return_int = 2;  break; }  
          case 'c' : { return_int = 3;  break; } 
          case 'd' : { return_int = 4;  break; } 
          case 'e' : { return_int = 5;  break; } 
          case 'f' : { return_int = 6;  break; } 
          case 'g' : { return_int = 7;  break; } 
          case 'h' : { return_int = 8;  break; } 
          case 'i' : { return_int = 9;  break; } 
          case 'j' : { return_int = 10; break; } 
          case 'k' : { return_int = 11; break; }  
          case 'l' : { return_int = 12; break; } 
          case 'm' : { return_int = 13; break; } 
          case 'n' : { return_int = 14; break; } 
          case 'o' : { return_int = 15; break; } 
          case 'p' : { return_int = 16; break; } 
          case 'q' : { return_int = 17; break; } 
          case 'r' : { return_int = 18; break; } 
          case 's' : { return_int = 19; break; } 
          case 't' : { return_int = 20; break; } 
          case 'u' : { return_int = 21; break; } 
          case 'v' : { return_int = 22; break; } 
          case 'w' : { return_int = 23; break; } 
          case 'x' : { return_int = 24; break; } 
          case 'y' : { return_int = 25; break; } 
          case 'z' : { return_int = 26; break; } 
          
        }
        
          return return_int; 
      }

    

        static vector<int> Encode(string str, int n) { // declares function Encode 
        
            vector<int> encoded_vector, key_vector; 
            int key_digit = 0; 
            
            for (int i = 0; i < str.size(); i++) {
                
                char selected = str[i];
                int switched_char = char_to_int(selected); 
                
                
                encoded_vector.push_back(switched_char);
            }
            
            if (n != 0) {
                
                for (; n; n /= 10) {
                  
                    key_vector.insert(key_vector.begin(), n % 10);
                    cout << "the value of n is " << n % 10 << endl; 
                }
                
                reverse(key_vector.begin(), key_vector.end()); 
                
                for (int i = 0; i <= encoded_vector.size(); i++) {
                     
                    int selected_int = encoded_vector[i];
                    // cout << "the selected int is" << selected_int << endl;
                    
                    if (key_digit <= key_vector.size()) {
                        
                        key_digit++;
                        // cout << "the key digit is" << key_digit << endl; 
                        encoded_vector[i] = selected_int + key_vector[key_digit]; 
                        // cout << "the new value is" << encoded_vector[i] << endl; 
                        
                    }
                    
                    if (key_digit > key_vector.size()) {
                        
                        key_digit = 0; 
                        // cout << "the key digit is" << key_digit << endl;
                        encoded_vector[i] = selected_int + key_vector[key_digit]; 
                        // cout << "the new value is" << encoded_vector[i] << endl; 
                    }
                    
                }
                
            }
            
            return encoded_vector; 
        }
        
};