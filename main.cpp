#include "mbed.h"

void fibonacci_loop(int max_term)
{
    printf("Lab 2 program using loops\r\n");
    //first term
    int term_1 = 0;
    //second term
    int term_2 = 1;
    //next term
    int term_next = 0;

    for(int i = 1; i < max_term; i++ )
    {
        if(i == 1)
            printf("%d, ", term_1);
        if(i == 2)
            printf("%d, ", term_2);
        else {
            //get next term value
            term_next = term_1 + term_2;
            //update term_1 value for next loop iterration
            term_1 = term_2;
            //update term_2 value for next loop iterration
            term_2 = term_next;
            printf("%d, ", term_next);
        }
        
    }
    printf("\r\n");
}

int fib(int i)
{
    //return i for the first 2 terms 
    if (i == 0 || i == 1)
    {
        return i;
    }
    else {
        //calculate the ith term number using recursion
        return fib(i -1) + fib(i -2);
    }

}

void fibonacci_recursive( int max_term)
{
    printf("Lab 2 program using recursive function\r\n");

    for(int i = 0; i < max_term; i++ )
    {
        printf("%d, ", fib(i));
    }

    printf("\r\n");
}

// main() runs in its own thread in the OS
int main()
{
    //final position of the sequence
    int max_term = 10;

    //call fibonacci looping program
    fibonacci_loop(max_term);

    //call fibonacci resursive program
    fibonacci_recursive(max_term);
    
}

