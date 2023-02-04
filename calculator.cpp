#include <iostream>
#include "calculator.h"
using namespace std;
/// Constructor
/// Initilize data members to 0 doubles
Calculator::Calculator() : result(0.0), store(0.0) {}

void Calculator::add()
{
    string a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    result = parseInput(a) + parseInput(b);
    cout << "The Result is " << result;
}
void Calculator::subtract()
{
    string a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    result = parseInput(a) - parseInput(b);
    cout << "The Result is " << result;
}
void Calculator::multiply()
{
    string a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    result = parseInput(a) * parseInput(b);
    cout << "The Result is " << result;
}
void Calculator::divide()
{
    string a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    result = parseInput(a) / parseInput(b);
    cout << "The result is " << result;
}
void Calculator::square()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    cout << "The result is " << result;
}
void Calculator::sqrt()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sqrt(parseInput(a));
    cout << "The Result is " << result;
}
void Calculator::setMem()
{
    string a;
    cout << "Enter a Number: ";
    cin >> a;
    store = parseInput(a);
    cout << "The memory is " << store;
}
void Calculator::printMem() const
{
    cout << "The memory is " << store;
}
/// subs in number value when strings result or store are entered
double Calculator::parseInput(const std::string& input) const
{
    if (input == "result")
    {
        return result;
    }
    else if (input == "store")
    {
        return store;
    }
    else
    {
        return stod(input);
    }
}
void Calculator::welcome() const
{
    cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
}
/// parse input and decide which member func to call
void Calculator::parseOperation(const std::string& input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrt();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
}
