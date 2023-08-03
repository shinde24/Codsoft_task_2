#include <iostream>
using namespace std;

int main(){
    double num1, num2, result;
    char operation;
    char continueCalculation; //To store user's choice for further calculations.

    cout << "Simple Calculator" << endl;

    do{
        //First user input number
        cout << "Enter the first number: ";
        cin >> num1;

        //Operation user want to do.
        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;

        //Second user input number
        cout << "Enter the first number: ";
        cin >> num2;

        //Select an operation and display of result
        switch(operation){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if(num2 != 0){
                    result = num1 / num2;
                }
                else{
                    // indicates an error when num2 == 0.
                    cout << "Error: Cannot divide by zero!" << endl;
                    return 1; 
                }
                
                break;
            default: 
                cout << "Error: Invalid operation!" << endl;
            }

            cout << "Result: " << result << endl;

            //Ask user if they want to continue or not.
            cout << "Do you want to contiue? (y/n): ";
            cin >> continueCalculation;
        } 
        
        while(continueCalculation == 'y' || continueCalculation == 'Y');

        cout << "Calculator closed." << endl;
        return 0;
}