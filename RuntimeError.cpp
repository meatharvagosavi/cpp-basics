#include <iostream>
#include <cmath>
using namespace std;


int main() {

    // Find square root of 'n' entered by the user.
    cout << "Program starts -->" << endl << endl;

    float n;

    cout << "Enter n: ";
    cin >> n;

    // to avoid runtime error of -ve sqr root
    // using try funnction for execute once
	try {
		
	if(n < 0)
	{
		throw "plz enter positive number not negative srry!"; // it throw this mssg if enter -ve
	}
	
    float result = sqrt(n);
    
    cout << "Result: " << result << endl << endl;
	} 
	catch (const char *msg) { // it catches the throw message 
	cout << msg << endl << endl;
    }

    cout << "<-- Program ends" << endl;

    return 0;
}
