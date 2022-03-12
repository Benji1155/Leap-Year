#include <iostream>
using namespace std;
int main()
{
	//Declaring varables
	int n1 = 0;
	//asking question
	cout << "Enter a year: ";
	cin >> n1;
	//doing maths
	if (n1 % 4 == 0)
		if (n1 % 100 == 0)
			cout << "This is not a leap year!";

		else cout << "This is a leap year";
	else cout << "Not a leap year";
return(0);

}