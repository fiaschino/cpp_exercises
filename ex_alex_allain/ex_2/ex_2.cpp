#include <iostream>
#include <string>

using namespace std;

int main ()
{ 
	string user_first_name;
	string user_second_name;

	cout << "Please enter your first name: \n";
	cin >> user_first_name;
	cout << "Please now enter your second name: \n";
	cin >> user_second_name;
	string user_full_name = 
		user_first_name + " " + user_second_name;

	cout << "Your full name then is " + user_full_name + "\n";

	cout << "I will also show you what happens when you perform the following operations: \n";
	cout << "1234/2000 = " << 1234/2000 << "\n";
	cout << "1234.0/2000.0 = " << 1234.0/2000.0 << "\n" ;

}
