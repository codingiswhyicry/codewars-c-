/*      
 
 In this Kata , your job is to write a program that finds the sum of the numbers from 1 to n.
 
 */

class Kata {
public:
    static int total(long n) {
        
        int sum = 0;
        
        for (int counter = 0; counter <= n; counter++) {
            sum += counter;
        }
        
        return sum;
    }
};
