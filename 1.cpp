#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    // Basic input/output
    cout << "Welcome to C++ Programming Practice!" << endl;
    
    // Variables and user input
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    // Demonstrate factorial calculation
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    
    // Demonstrate prime number check
    if (isPrime(number)) {
        cout << number << " is a prime number" << endl;
    } else {
        cout << number << " is not a prime number" << endl;
    }
    
    // Vector demonstration
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "\nVector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    
    // Calculate sum of vector elements
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    cout << "\nSum of vector elements: " << sum << endl;
    
    // String operations
    string message = "C++ Programming";
    cout << "\nString operations:" << endl;
    cout << "Original string: " << message << endl;
    cout << "Length: " << message.length() << endl;
    
    // Demonstrate string concatenation
    string additional = " is fun!";
    message += additional;
    cout << "After concatenation: " << message << endl;
    
    return 0;
}
