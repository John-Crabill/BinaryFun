/*
 * interface.cpp
 *
 *  Created on: Nov 23, 2014
 *      Author: John Crabill
 */

#include <iostream>
#include "binary.h"

using namespace ods;
using namespace std;


int main() {
binary<int> start;

cout << "This is a program intended to teach binary and " << endl
	<< "to have fun with transforming sentences into " << endl
	<< "binary. Binary works by having each place" << endl
	<< "from the right doubling each time it goes" << endl
	<< "over one, so position one is one, position" << endl
	<< "two is two, and position three is four etc..." << endl;
cout << endl;

cout << "Pick an option: "<< endl
		<< "1. Number to Binary " << endl
		<< "2. Binary to Word" << endl
		<< "3. A Word to Binary" << endl
		<< "4. A Sentence to Binary" << endl
		<< "5. Quit" << endl;
int choice;
cin >> choice;

while(choice != 5) {

if(choice == 1) {
cout << "Please select a number to be turned into Binary " << endl
	<< "(Please be less than 1023 due to program restraints)." << endl;
int num = 0;
string n;
cin >> num;
n = start.numberBinary(num);
if(num <= 1023) {
cout << "This is the binary of that number: " << n << endl;
}
}


if(choice == 2) {
cout << "Please use a short binary sequence to see how this works" << endl
		<< "Note: There is no space between binary numbers and it is" << endl
		<< "the standard 64 bit binary." << endl
		<< "64 bit." << endl;

string binarySequence;
cin >> binarySequence;

string c;
c = start.binaryToWord(binarySequence);
cout << c << endl;
}

if(choice == 3) {
cout << "Please use a word to see how this works" << endl;

string word;
cin >> word;

string g;
g = start.wordToBinary(word);
cout << g << endl;
}

if(choice == 4) {
cout << "Please use a short sentence, please state" << endl
		<< "how many words you are using, and then type" << endl
		<< "your sentence. Ex: 4    Hello, how are you?" << endl;

int number;
cin >> number;

for(int i = 0; i < number; i++) {
	string sentence;
	cin >> sentence;

	string o;
	o = start.wordToBinary(sentence);
	cout << o;
	if(i < number - 1) {
	cout << start.wordToBinary(" ");
	}
}
cout << endl;
}

if(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
cout << "This is not a choice, please pick again" << endl;
}

cout << "Pick an option: "<< endl
		<< "1. Number to Binary " << endl
		<< "2. Binary to Word" << endl
		<< "3. A Word to Binary" << endl
		<< "4. A Sentence to Binary" << endl
		<< "5. Quit" << endl;
cin >> choice;

}
}



