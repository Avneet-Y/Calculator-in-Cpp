OVERVIEW

The program has 2 classes.
1. Calculator
2. Scientific,
that inherits from Calculator i.e base class.

Some member functions of Calculator are virtual and are overridden in the Scientific class.

Flow :- Show a user a list of available options and to ask the desired operation to be performed.
Get additional data from the user (Like numbers on which the desired operation is to be performed)
Perform calculation, print to screen
Repeat from start

Calculator Class :- Bbase class for the calculator program. It has data members and member functions that will display messages to the screen, ask for user input, and perform calculations.

Calculator has 2 protected data members:-
1. result : for storing the result of the last Computation
2. store : For storing a number in memory so it can be accessed later for further calculation.

They are both doubles, and they are initialized to 0 in the constructor.

Public member functions 
1.add
2.subtract
3.multiply
4.divide
5.square
6.sqrt
They ask the user for either 1 or 2 numbers depending on the function, perform the required calculation, store this in the protected variable result, and print out the result to the screen.

parseOperation() is used as a helper member functions takes in the user input string and calls the appropriate member function. This is to enable the user entering "+" or "log" and having the correct function called. This is also virtual so it can be overridden for the extra functions in the scientific.

parseInput() is used for the extra result/store feature for user to be able to type the words result and store as if they are numbers. parseInput() looks for those strings and gets the values from memory to be used in any calculations.

As this class contains virtual functions, a virtual destructor will be included.

Scientific Class :- Child class of calculator. It calls the Calculator constructor to initialize result and store. 
It has following operation functions
1.sin
2.cos
3.tan
4.ln
5.log
6.abs
7.pow 
The calculated value is stored in result.

welcome() & parseOperation() are overridden to show all the options and to access the additional calculation functions. 
A virtual destructor is also included.

Main :- The main program will be one user entry loop. In the loop, a base class Calculator pointer (calcPtr) pointed at a Calculator object is used to call the Calculator member functions. The class set up allows the program to polymorphically call object methods depending on the type of the object. 

Switching to scientific mode will be made by pointing this Calculator class pointer at a derived Scientific class object. Now the program dynamically calls different member functions based on the state.

This simplifies the main code as the statement calcPtr->welcome() will automatically call the right welcome function, detailing out the proper options for the current mode.

Nifty Features :- Users are able to enter a range of inputs that correspond to each operation. For example: “+”, “add”, “addition”, “sum” all trigger the addition operation.
This calculator has a memory feature. Previous calculation is  stored in result and can be anytime. If we want to perform an operation then by typing result as first number and second as any number , operation can be performed on them.
Store keyword store a number for later use, useful for doing long calculations. An important result can be stored into store, then accessed later by using store as an entry in your calculations.
