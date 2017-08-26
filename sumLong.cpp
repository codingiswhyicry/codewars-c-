/*
 In this Kata , your job is to write a program that finds the sum of the numbers from 1 to n.
 
 e.g.
 total(10) => 55
 total(20) => 210
 total(34) => 595
 
 */

class Kata {
    
public:
    static long total(long n) {
        
        long sum = 0;
        
        for (long count = 0; count <= n; count++) {
            
            sum += count;
            
        }
        
        return sum;
    }
};
