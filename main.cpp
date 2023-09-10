#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){

  cout << "Type your first name in here: " << endl;

  string firstName;

  cin >> firstName; 

      
  const string greeting = "Hello," + firstName + "!";
  const string spaces (greeting.size(), ' ');

  //Building the rows
  

  //Building the second and fourth rows first because of the empty spaces
  
  string secondRow = "* " + spaces + " *";

  //Building the first and fifth rows utilizing the second

  const string firstRow(secondRow.size(), '*');

  //Building the third row with the greating
  
  string greetingRow = "* " + greeting + " *";


  cout << firstRow << endl;
  cout << secondRow << endl;
  cout << greetingRow << endl;
  cout << secondRow << endl;
  cout << firstRow << endl;

  return 0;
}




