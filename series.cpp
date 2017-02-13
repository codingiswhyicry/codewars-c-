/*

Your task is to write a function which returns the sum of following series upto nth term(parameter).

Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
Rules:

You need to round the answer upto 2 decimal places and return it as String.
If the given value is 0 then it should return 0.00
You will only be given Natural Numbers as arguments.


*/


#include <iomanip>
#include <sstream>
using namespace std; 

string seriesSum(int n) {

   float total = 0.00; 
    int series_num = 1;
     
     for (int counter = 0; counter < n; counter++) {
          
         total += 1.00 / series_num; 
    
         series_num += 3;
     }
     
     if (n == 0) {
       total = 0.00; 
     }
     
     ostringstream out;
     out << fixed << setprecision(2) << total;
     return out.str();
}