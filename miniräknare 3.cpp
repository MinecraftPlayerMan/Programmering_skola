#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {

int matte;
float tal1, tal2;
string matte1, svar;
bool loop = true;
while (loop == true) {

// l�gger in en rad...
cout << "Skriv in ett tal sedan ett r�knes�ttet sedan ett tal: ";

cin >> tal1 >> matte1 >> tal2; 

cout << "Siffra 1: ";
cin >> tal1;

cout << "Siffra 2: ";
cin >> tal2; 


if (matte1 == "+")
{
	cout << tal1+tal2 << endl;
}

if (matte1 == "-")
{
	cout << tal1-tal2 << endl;
}

if (matte1 == "*")
{
	cout << tal1*tal2 << endl;
}

if (matte1 == "/")
{
	cout << tal1/tal2 << endl;
}

cout << "Vill du k�ra igen? ";
cin >> svar;
if (svar == "ja"){
	loop = true;
}
if (svar =="nej"){
	cout << "hejd�!";
	loop = false;
}
}
	return 0;
}
