/*
Nick Azar 9/25/17 period 4
Take in Data
Display Data, Accept User Responce, Display changed data
*/
//Libraries
#include <iostream>
#include <conio.h>
//Namespace
using namespace std;
//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//MAIN
void main() {
	//Variables
	int age; // What is your age?
	char last_first; // last letter of your first name
	double money; //How much money do you have at home?
	double myHomeMoney = 10; //10 cents
	bool more;

	//User queries
	cout << "What is your age : ";
	cin >> age;
	cout << "What is the last letter of your first name : ";
	cin >> last_first;
	cout << "How much money do you have at home : ";
	cin >> money;
	more = money > myHomeMoney;

	// After Questions
	cout << "Wow you are " << age << ". That is suprising. " << endl;
	cout << "Your last letter of your first name is " << last_first << ". WOW!" << endl;
	cout << "You have " << money << " at home." << endl;
	if (more) {
		cout << "How much do you have in your account?";
	}



	//Pause
	pause();
}
