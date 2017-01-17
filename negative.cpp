/*
    In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?
 */

int makeNegative(int num)
{
    int negative;
    
    if (num > 0) {
        negative = 0 - num;
    }
    
    else {
        negative = num;
    }
    
    return negative;
}
