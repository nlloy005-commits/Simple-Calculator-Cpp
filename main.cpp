#include <iostream>
#include <cmath>
using namespace std;

void showMenu() {

    cout << "Welcome to the Simple Calculator" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Power Rule (^)" << endl;
    cout << "6. Modulus (%)" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose an option (1-7)" << endl;
}

int main() {
    int choice;
    double result;
    double num1, num2;


    while (true) { 

        showMenu();
        cin >> choice;
        if (choice == 7) {
            cout << "Goodbye!" << endl;
            break;
        }
        
        cout << "Please enter your first number" << endl;
        cin >> num1;
        cout << "Please enter your second number" << endl;
        cin >> num2;

        switch(choice) {
            case 1: {
                result = num1 + num2;
                cout << "Result : " << result << endl;
                break;
            }
            case 2 : {
                result = num1 - num2;
                cout << "Result : " << result << endl;
                break;
            }
            case 3 : {
                result = num1 * num2;
                cout << "Result : " << result << endl;
                break;
            }
            case 4 : {
                if (num2 == 0) {
                    cout << "Undefined" << endl;
                    break;
                }
                else {
                result = num1 / num2;
                cout << "Result : " << result << endl;
                break;
                }
            }
            case 5 : {
                result = pow(num1, num2);
                cout << "Result : " << result << endl;
                break;
            }
            case 6 : {
                if (num2 == 0) {
                    cout << "Error! Can't perform modulus by 0 " << endl;
                }
                else {
                    result = fmod(num1, num2);
                    cout << "Result : " << result << endl;
                }
                break;
            }
            default :
            cout << "Invalid Option!" << endl;
            break;
        }
    }
    return 0;
}
