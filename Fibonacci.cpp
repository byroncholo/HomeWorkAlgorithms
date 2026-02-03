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

*/



/* 2.1 Fibonacci with iteration */
int fibIter(int n ){
    int Tn1 = 1;
    int Tn2 = 1;
    for(int i = 3; i <= n; i++){
        int Tn3 = Tn1 + Tn2; // the next term is generated with the sum of the previous two
        Tn1 = Tn2; // change the predecesors numbers
        Tn2 = Tn3; 
    }
    return Tn2; // return the last term in the sequence


}
/* 2.2 Fibonacci with recursion*/

int T(int n){
    if(n == 1 || n == 2) // base case
        return 1;
    return 
        T(n-1) + T(n-2); // induction step
}


int main(){
    // sample output
    std::cout << fibIter(10) << std::endl;
    std::cout << T(10) << std::endl;
}
