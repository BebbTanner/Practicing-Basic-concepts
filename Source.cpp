/*Tanner Bebb
* This is just a program to pracitce concepts to be sure that I understand them and how they work

* Work on the .append function for strings
* I would like to practice pointers and dynamic arrays in this program

*/

#include <iostream>
#include <cstring>
#include <time.h>
//#include "Class.h"
using namespace std;

double basicMath();

double numberArray();

string reverseString();

string nameArray();



int main() {
//I would like to insert a do while loop to repeat the process. I had one implemented, but the complier was telling 
//me that response was undefied when I had it defined at the top? 

	cout << nameArray() << endl;
	cout << reverseString() << endl;
	cout << numberArray() << endl;
	cout << basicMath() << endl;
}

double basicMath() {
	double x, y;
	double Add, Sub, Multi, Divid;
	string tryAgain;

	cout << "Please enter a number: " << endl;
	cin >> x;
	cout << "Please enter another number: " << endl;
	cin >> y;

	Add = x + y;
	cout << "Your two numbers added together: " << Add << endl;
	Sub = x - y;
	cout << "Your two numbers subtracted: " << Sub << endl;
	Multi = x * y;
	cout << "Your numbers multiplied: " << Multi << endl;
	Divid = x / y;
	cout << "Your numbers divided: " << Divid << endl;

	return 0;
}

string reverseString() {
	string Name; 

	cout << "Please enter a name to be reversed: " << endl;
	cin >> Name;

	reverse(Name.begin(), Name.end());

	cout << Name << endl;

	return 0;
}

string myArray() {
	string myArray[5];

/*In order to fill the array we must use a for loop*/

/*for loop to fill the array*/
	for (int i = 0; i < 5; i++) {
		cout << "Please enter a name: " << endl;
		cin >> myArray[i];
	}

	/*for loop to print out the array*/
	for (int j = 0; j < 5; j++) {
		//cout << "Here are the values that you entered in the array: " << endl;
		cout << myArray[j] << endl;
	}

	return 0;
}

double numberArray() {
/*Array with numbers
I want to try and use the rand function
to try and select a random number from this list.

When it is runs successfully I want to try it with
string values as well I am trying to replicate
what nick does with the raffle function in
python*/
	double numArray[5] = { 1, 4096, 15, 56, 37 };

	return 0;
}