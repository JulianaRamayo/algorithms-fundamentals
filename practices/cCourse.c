#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*BASIC STRUCTURE
#include <stdio.h>
int main(){

    return 0;
}*/

/*COMMENTS
// ---> one line
/* ---> multiple lines*/

/*---LIBRARY FUNCTIONS---
<stdio.h> ---> printf() %d
               scanf()
<math.h> ---> mathematical operations   %lf
              sqrt() - square root
              cbrt() - cube root
              pow(a,b=is the power) - power funtion
<ctype.h> ---> character type function %c
               toupper()
               tlower()
<stdlib.h> ---> standard utility functions
                atof (ascii to float) - cadena de caracteres a coma flotante
                atoi (ascii to integer)	- cadena de caracteres a entero*/

/*ESCAPE SEQUENCES
Character combination consisting of backlash (\) followed by a letter or combination of digits. 
They specify actions within a line or string of text.
    \n ---> new line
    \t ---> tab
    \j ---> columns
    \b ---> backspace
    \v ---> vertical tab
    \\ ---> backlash*/

/*VARIABLES
Allocated space in memory to store a value.
We refer to a variable's name to access the stored value. That variable behaves as if it was the value it contains.
We need to declare what type of data we are storing.
Two steps:*/
int x; //declaration
x = 123; //initialization
 int y = 321; //declaration + initialization
//TYPES OF VARIABLES
int age = 19; //integer %d
float height = 1.55; //floating point number %f
char grade = 'B'; //single character %c
char name[] = "Juliana" //array of characters %s
//How to display them//
//printf("You are age years old"); ---> WRONG
printf("Hello %s", char name);
printf("You are %d years old", int age);
printf("You are %f meters long", float height);
printf("Yor grade is %c", char grade);
/*Two types of variables:
Scoop = Lifetime
A SCOPE OF VARIABLES is a block or a region where a variable is declares, defined and used;
and when a block or a region ends, the variable is destroyed.
-GLOBAL variables
-LOCAL variables

/*MORE DATA TYPES*/
double a; //floating point number with double precision %lf
bool b; // we should use <stdbool.h>, it is used with true (1) or false (0) %d
/*SIZEOF() OPERATOR
Used to find the size of dataTypes in bytes.
Example with print:
printf("dataType size = %zu", sizeof(variableName));*/
printf("double a size = %zu", sizeof(a));

/*FORMAT SPECIFIERS
%c = characters
%s = string (array of characters)
%f = float
%lf = double
%d = integer*/

/*CONSTANT
Fixed value that cannot be altered by the program during its execution.
const dataType name = value;*/
const float PI = 3.1416;

/*ARITHMETIC OPERATORS
+ = addition
- = substraction
* = multiplication
/ = division
% = modulus or reminder
++ = increment
-- = decrement*/

/*USER INPUT
Two options:
scanf("formatSpecifier", &variableName);*/
scanf("%d", &age);
//fgets(variableName, inputSize, stdin); **to accept blank spaces
fgets(name, 25, stdin);

/*MATH FUNCTIONS
The library for this functions is <math.h>*/
float c = sqrt(9); //square root
int d = pow(2, 4); //powers
int e = round(3.14); //round numbers
int f = ceil(3.14); // round numbers up
int g = floor(3.99); //round numbers down
double h = fabs(-100); //absolute value
double i = log(3); //logarithms
double j = sin(45); //sine
double k = cos(45); //cosine
double l = tan(45); //tangent

/*BOOLEAN
Used with <stdbool.h>
Where TRUE = 1 and FALSE = 0
We use %d as data type.
> = greater than
< = less than
== = equal to
>= = greater than or equal to
<= = less than or equal to
! = not equal to or reverses the state of a condition
&& = AND (checks if two conditions are true)
|| = OR (checks if at least one condition is true)
Examples:*/
bool value = (9>5);
printf("%d", value); //the output should be 1 (TRUE)*/

/*IF... ELSE.. STATEMENTS.
//IF//
Syntax:
       if(testCondition){
           body of if statement
       }
Example with IF:*/
int age;
printf("Enter your age: ");
scanf("%d", &age);
if(age >= 18){
    printf("You are eligible to vote");
}
if(age < 18){
    printf("Sorry, you are not eligible to vote");
}
/*IF... ELSE...//
Syntax:
       if(testCondition){
           body of if statement
       }
       else {
           statements inside else body
       }
Example with IF... ELSE...*/
int age = 15;
if(age >= 18){
    printf("You are eligible to vote");
}
else {
    printf("Sorry, you are not elegible to vote");
}
/*ELSE IF FOR MORE OPTIONS
Syntax:
       if(testCondition1){
           statements1
       }
       else if(testCondition2){
           statements2
       }
       else{
           statements3
       }
Example with ELSE IF*/
int age = 15;
if(age > 120){
    printf("Invalid age");
}
else if(age < 0){
    printf("Invalid age");
}
else if(age >= 18){
    printf("You are elegible to vote");
}
else{
    printf("You are not elegible to vote");
}

/*TERNARY OPERATOR
Can be used to replace if... else... statements and make the code look cleaner and shorter.
Syntax:
condition ? value_if_true : value_if_false*/
int age = 15;
(age >= 18) ?
    printf("You can vote") :
    printf("You cannot vote");

/* SWITCH STATEMENTS
A more efficient alternative to using many "else if" statements. 
Allows a value to be testes for equiality against many cases.
Syntax
switch(variableName){
    case '1':
        statement1;
        break;
    case '2':
        statement2;
        break;
    case '3':
        statements3
    default:
        statement;
}

WHILE LOOP
Loops are used to repeat a block of code until a specified condition is met.
Evaluates the testExpression inside the parentheses ().
If testExpression is true, statements inside the body of while loop are executed.
The process goes on until testExpression is evaluated to false.
If testExpression is false, the loop terminates (ends).
Syntax:*/
while (testExpression) {
    //the body of the loop 
}

/*DO... WHILE LOOP
The body of do...while loop is executed at least once. Only then, the test expression is evaluated.
If testExpression is true, the body of the loop is executed again and testExpression is evaluated once more.
This process goes on until testExpression becomes false.
If testExpression is false, the loop ends.
Syntax:*/
do {
  // the body of the loop
}
while (testExpression);

/*FOR LOPP
The initialization statement is executed only once.
Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
However, if the test expression is evaluated to true, statements inside the body of the for loop are executed, 
and the update expression is updated.
Again the test expression is evaluated.
This process goes on until the test expression is false. When the test expression is false, the loop terminates.
Syntax:*/
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

/*FUNCTIONS
Blocks of code that perform a specific task.
Dividing a complex problem into smaller chuncks makes the program easy to understand and reuse.

BREAK AND CONTINUE STATEMENTS
Are almost always used with if... else statement inside loop.
BREAK STATEMENT: Ends a loop immediately when it is encountered.
Syntax:*/
break;
/*CONTINUE STATEMENT: Skips the current iteration of the loop and continues with the next iteration.
Syntax:*/
continue;

