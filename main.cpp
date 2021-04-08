/*Folder: Little_Sister_YourLastName
CPP: Function_Practice_Little_Sister.cpp
Teacher: Dr. Tyson McMillan, 04-7-2021
Student: Dr_T

Description: Dr_T's little sister is smart.
She uses a divide and concur method to get $20 from the parents.
She asks mom and dad individually. Based upon their responses she can
earn $0, $20, or $40 from them.
Create a dad/mom yes/no (True/false) program to capture the possibilities.
Use functions and pass by value.
Also address the programming challenges in int main() make the appropriate
function prototypes, function definition, and functions calls to make the program work.
This completed work shall be uploaded to Extra Credit item 15: Little_Sister_YourLastName.zip
*/
#include<iostream>
#include "Input_Validation_Extended.h" 
using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
void welcomeMessage(); 
void dayOfTheWeek(int);
double numberCube(double); 


int main()
{
    int dayMain = 0; 
    double number = 0.0; 
    double result = 0.0; 
    
    welcomeMessage(); //function call 
    //function calls (true = "yes", false="no")
    cout << "\nLittle Sister Function calls: ";
    cout << "\nOption 1, Little Sister Earns: $" << MakeBank(true,false);
    cout << "\nOption 2, Little Sister Earns: $" << MakeBank(false,true);
    cout << "\nOption 3, Little Sister Earns: $" << MakeBank(true,true);
    cout << "\nOption 4, Little Sister Earns: $" <<  MakeBank(false,false);

    cout << "\nPlease enter a day of the week (1-7): ";
    dayMain = validateInt(dayMain); 
    //cin >> dayMain; 
    dayOfTheWeek(dayMain);

    cout << "\nPlease enter a number, I will cube it: ";
    number = validateDouble(number);   
    result = numberCube(number); //function call store result in a variable

    /*Programming Challenges
      **1. Extend this program to output how much Little Sister earns in each scenario.
      **2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      ***3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      ***4. Output each day of the week in a different color.
      5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      6. Extend this program set the precision of the numberCube result to 4 decimal places
      7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
      ***8. Add input validation with Dr_T's .h file 
      9. Add add a class to this program 
    */
    return 0;
}

double MakeBank(bool mom, bool dad)
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.
  if(mom == true)
  {
    amtEarned += 20.0; //amtEarned = amtEarned + 20.0; 
  }

  if(mom == false)
  {
   // cout << "\n\tAin't - mom" << endl; 
  }

  if(dad == true)
  {
    amtEarned += 20.0; //amtEarned = amtEarned + 20.0; 
  }

  if(dad == false)
  {
     //cout << "\n\tNo - says Dad!" << endl; 
  }

	return amtEarned;
}

void welcomeMessage()
{
  cout << "\nMake Bank, Dr_T. Boom, Pop, Pow!!!" << endl; 
  for(int i=0; i < 15; i++)
  {
    cout << "*"; 
  }  
}

void dayOfTheWeek(int day)
{
   string color; 
   string reset = "\x1b[0m";

  if(day == 1)
  {
    color = "\x1b[" + to_string(32) + ";1m";
    cout << color << "\nIt's Sunday!" << reset << endl; 
  }
  else if(day == 2)
  {
    color = "\x1b[33;1m";
    cout << color <<  "\nIt's Monday!" << reset << endl; 
  }
  else if(day == 3)
  {
    cout << "\nIt's Tuesday!" << endl; 
  }
  else if(day == 4)
  {
    cout << "\nIt's Wednesday!" << endl; 
  }
  else if(day == 5)
  {
    cout << "\nIt's Thursday!" << endl; 
  }
  else if(day == 6)
  {
    cout << "\nIt's Friday!" << endl; 
  }
  else if(day == 7)
  {
    cout << "\nIt's Saturday!" << endl; 
  }
  else //default clause 
  {
    cout << "\nError: somthing when wrong." << endl; 
  }

}

double numberCube(double x)
{
  return (x * x * x); 
}
