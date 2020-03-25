#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

 integer                int
 character              char
 boolean                bool
 floating point         float
 double floating point  double
 
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    int temp = 75;
    int ph = 5;
    int toxicity = 6;

    bool happy = true;
    bool codingIsHard = true;
    bool codingIsFun = true;

    char Noah = 'n';
    char Julie = 'j';
    char Backpack = 'b';

    float pi = 3.14145f;
    float randomNumber = 3.45f;
    float hardDriveStorage = 256.43f;

    double longNumber = 3.5434546984;
    double penWidth = 1.303405;
    double eulersConstant = 0.5772156649;

    ignoreUnused(temp, ph, toxicity, happy, codingIsHard, codingIsFun, Noah, Julie, Backpack, pi, randomNumber, hardDriveStorage, longNumber, penWidth, eulersConstant);

}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 
//1
bool temprature(int temp = 70, int humidity = 55)
{
    ignoreUnused(temp, humidity);
     
    return {};
}
//2
int TimeSignature(int beatsInMeasure, bool quarterNoteGetsBeat = true)
{
    ignoreUnused(beatsInMeasure, quarterNoteGetsBeat);

    return {};
}
//3
bool spellingOfYes(char firstLetter = 'y', char secondLetter = 'e', char thirdLetter = 's')
{
    ignoreUnused(firstLetter, secondLetter, thirdLetter);

    return {};
}
//4
int addedNumber(int firstNumber, int secondNumber)
{
    ignoreUnused(firstNumber, secondNumber);

    return {};
}
//5
bool jazz(int swingLevel = 1000, bool theLicc = true)
{
    ignoreUnused(swingLevel, theLicc);

    return {};
}
//6
float calculatedNumber(int numberOne, float numberTwo = 3.5664f)
{
    ignoreUnused(numberOne, numberTwo);

    return {};
}
//7
char abcd(char firstLetter = 'a',char secondLetter = 'b', char thirdLetter = 'c')
{
    ignoreUnused(firstLetter, secondLetter, thirdLetter);

    return {};
}
//8
double shoppingList(bool beans = true, bool eggs = true)
{
    ignoreUnused(beans, eggs);

    return {};
}
//9
float profit(double revinue, double expenses)
{
    ignoreUnused(revinue, expenses);

    return {};
}
//10
int moneyMadeWhileSportsBetting(bool profitability, int profit)
{
    ignoreUnused(profitability, profit);

    return {};
}


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
  auto totalTemp = temprature();
    //2)
    bool fourFour = TimeSignature(true,true);
    //3)
    bool rightSpelling = spellingOfYes(true);
    //4)
    int totalSum = addedNumber(5,6);
    //5)
    bool otherMusic = jazz(1,false);
    //6)
    auto sumOfcalculatedNumber = calculatedNumber(50,60);
    //7)
    int lettersMissed = abcd('c', 'b', 'a');
    //8)
    auto itemsMissed = shoppingList(false, false);
    //9)
    float loss = profit(-5,30);
    //10)
    int moneyLost = moneyMadeWhileSportsBetting(false, 0);
    
    ignoreUnused(carRented, totalTemp, fourFour, rightSpelling,totalSum, otherMusic, sumOfcalculatedNumber, lettersMissed, itemsMissed, profit, loss, moneyLost);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
