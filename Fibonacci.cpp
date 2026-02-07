#include <iostream>
// Name: Byron Cholo
// Date: 2/02/2026
// Problem 2:
/*
The Fibonacci sequence is generated using the following recurrence formula:
T(n) = T(n-1) + T(n-2)
T(0) = 0
T(1) = 1
T(2) = 1
2.1 Write a C++ program that generates the sequence using iteration.
2.2 Write a C++ program that generates the sequence using recursion
Solution:
*/
/* 2.1 Fibonacci with iteration */
int fibIter(int n ){
    int Fn1 = 1;
    int Fn2 = 1;
    int Fn3 = 0;

    if (n == 1) 
        return Fn1;
    if (n == 2) 
        return Fn2;
    for(int i = 3; i <= n; i++){
        Fn3 = Fn1 + Fn2; // the next term is generated with the sum of the previous two
        Fn1 = Fn2; // change the predecesors numbers
        Fn2 = Fn3; 
    }
    return Fn3; // return the last term in the sequence
}



/* 2.2 Fibonacci with recursion*/

int F(int n){
    if(n == 1 || n == 2) // base case
        return 1;
    return 
        F(n-1) + F(n-2); // induction step
}


int main(){
    // sample output
    std::cout << fibIter(6) << std::endl;
    std::cout << F(6) << std::endl;
}
