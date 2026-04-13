//Created by Alexa De La Cruz
//4/10/2026

#ifndef RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H
#define RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H

//Challenge 1
long long factorial(int n) {
    if (n <= 1) return 1; 
    return n * factorial(n - 1); 
}


int fibonacci(int n) {
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2); 


int sumDigits(int n) {
    if (n < 10) return n; 
    return (n % 10) + sumDigits(n / 10); 
}

//Challenge 2
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) { 
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    
    towerOfHanoi(n - 1, source, destination, auxiliary);
    
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
