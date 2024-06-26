#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
// Function to print Fibonacci series up to n terms
void fibonacciSeries(int limit) {
    cout << "Fibonacci Series up to " << limit << " terms:" << endl;
    for (int i = 0; i < limit; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}
int main() {
    int number_of_terms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> number_of_terms;

    fibonacciSeries(number_of_terms);
    _getch();

    return 0;
}

