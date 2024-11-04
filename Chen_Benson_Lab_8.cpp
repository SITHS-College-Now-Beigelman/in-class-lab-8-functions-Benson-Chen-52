// Benson Chen
// Lab 8
// 11/4/24

#include <iostream>
#include <cmath> //Pre-determined function library
using namespace std;

int doubleMultiply(int a, int b) //Function for part 2
{
    int product; //Declares an integer variable 'product'
    product = a * b * 2; //Multiples the product by 2
    return product; //Returns the product
}
double getSum(double x, double y, double z) //Function for part 3
{
    double result; //Declares a floating point variable 'result'
    result = x + y + z; //Adds all the numbers
    return result; //Returns result
}
int main()
{   
    //Part 1
    double num; //Declares a floating point variable 'num'
    cout << "Enter a decimal number: "; //Asks user for user input
    cin >> num;
    cout << endl;

    //Using pre-determined functions to calculate values
    cout << "The square root of the number is: " << sqrt(num) << endl; //Square root of the number
    cout << "The number raised to the 4th power is: " << pow(num, 4) << endl; //Takes the number to the 4th power
    cout << "The floor of the number is: " << floor(num) << endl; //Gets the floor of the number

    //Part 2
    int num1, num2; //Declares two integer variables
    cout << "\nEnter two integers: "; //User input for two integers
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
        << doubleMultiply(num1, num2) << endl; //Uses the function 'doubleMultiply' to do the calculations for the two integers

    //Part 3
    double number1, number2, number3; //Declares 3 floating point variables
    cout << "\nEnter 3 decimal numbers: "; //User input for 3 decimal values
    cin >> number1 >> number2 >> number3;
    //A double variable 'result' and sets it equal to the function getSum which adds the 3 numbers
    double result = getSum(number1, number2, number3);
    cout << "The sum of the numbers is: " << result << endl; //prints the sum
    return 0;
}
/*
Enter a decimal number: 5.6

The square root of the number is: 2.36643
The number raised to the 4th power is: 983.45
The floor of the number is: 5

Enter two integers: 7 2
Twice the product of the numbers is: 28

Enter 3 decimal numbers: 4.5 1.3 19.7
The sum of the numbers is: 25.5
*/