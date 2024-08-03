#include <stdio.h>
#include <stdlib.h>
#include <math.h> //for math operations
#include <string.h>
int main() //<- A calling function
{
    //VARIABLES
    char charName[] = "Beam"; //The declaration [x] is for storing multiple data (characters); where x is the amount of data given.
    int charAge = 67;
    printf("There was a man named %s, \n", charName);
    printf("he is %d years old. \n", charAge);
    printf("He liked the name %s, \n", charName);
    printf("but didn't like being %d.\n", charAge);

    //DATA TYPES
    char student[] = "Beam";
    int age = 16;
    double gpa = 3.9; //double (%d) is more precise than float (%f) + takes more memory
    char grade = 'A'; // '' (%c) is for ONE character ONLY and no [] after variable name
    char school[] = "Saint Gabriel's College";

    printf("%s is a student of ", student);
    printf("%s. In his last semester, he got ", school);
    printf("a GPA of %.2f with ", gpa); //Rounding Numbers (float): %.(decimal places)f
    printf("grade %c.", grade);
    printf(" He's proud of himself. ");
    printf("He's %d years old.\n", age);
    printf("But even that, he still has to focus more on %s as he got %.1f for 2 of them in M.4.", "Biology and Chemistry", 3.5);

    //MATH OPERATIONS
    printf("%.3d", 28/4);
    int num = 2;
    printf("%d", num + 6);
    printf("%.2f", (pow(2,3) * sqrt(36)) / 12);

    //CONSTANTS
    const int number = 5;
    printf("%d", number);

    //USER INPUT
    int Age;
    printf("What is your age? \n");
    scanf("%d", &Age); //& is a Pointer, used for scanf only
    printf("You're %d years old.", Age);
    double Gpa;
    printf(" But what about your GPA? \n");
    scanf("%d", &Gpa);

    //Q: What is the difference between %f and %lf in C?
    //A: The short answer is that it has no impact on printf,
    //   and denotes use of float or double in scanf.
    //   For printf, arguments of type float are promoted to
    //   double so both %f and %lf are used for double. For scanf,
    //   you should use %f for float and %lf for double.
    
    printf("Your GPA is %.2f. \n", gpa);
    printf("Forgot to ask, but what's your nickname again? \n");
    char Name[30]; //Add * to change a character to a string of characters
    scanf("%s", &Name);
        //fgets gets a whole line of text, whereas scanf ignores texts after [space].
        //stdin = Standard Input
    printf("Your name is %s, got it.", Name);
    char country[100];
    printf(" So where are you from? \n");
    scanf("%s", &country);
    printf("You're from %s. ", country);
    printf("Nice to meet you, %s!", Name);
    
    //BASIC CALCULATOR
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Result: %f", num1 + num2);

    //MADLIBS GAME
    char colour1[20];
    char colour2[20];
    char pluralNoun1[20];
    char pluralNoun2[20];
    char personF[30];
    char personL[30];
   
    printf("Enter a colour: ");
    scanf("%s %s", colour1, colour2);
    printf("Enter a plural noun: ");
    scanf("%s %s", pluralNoun1, pluralNoun2);
    printf("Enter someone's firstname and lastname: ");
    scanf("%s %s", personF, personL);
   
    printf("Roses are %s %s;\n", colour1, colour2);
    printf("%s %s are blue;\n", pluralNoun1, pluralNoun2);
    printf("I love %s %s.", personF, personL);

    //ARRAYS
    //An array is a data structure where we can store more than
    //one data value; a container of all input data values.
   
    int luckyNum[30];// <- declaration; amount of data
    luckyNum[0] = 650; // <- assigning numbers; index of a data
    luckyNum[1] = 973; // <- assigning numbers; index of a data
    printf("%d", luckyNum[29]); //The identifying [n]; where n is an index number (starts with 0 as position #1).

    return 0; }

//FUNCTIONS IN C
/* A function (or a method) is a collection of code that
performs a specific task when a programme runs. */

void sayHi(char username[], int age) { //<- void = a function that doesn't return any information
//What's inside the () is a parameter; a value given to a function.
    printf("Hello, %s, you're %d.\n", username, age);
}

//RETURN TYPES
double cube(double num) {
    //    double result = pow(num, 3);
    //or  double result = num*num*num;
    //return result;
    return pow(num, 3);
}