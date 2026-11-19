#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> num;
    
    // Check if the number is divisible by 2
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    
    return 0;
}
