#include <iostream>
using namespace std;

void print_menu(string name);

int main(int arg_count, char *args[])
{
	if (arg_count > 1){
		string name(args[1]);
	}else
	{
		cout << "Username not supplied... exiting program" << endl;
	}
	return 0;
}

void print_menu(string name){
	int choice;

	cout << "*******************\n";
	cout << " 1 - Print list.\n";
	cout << " 2 - Add to list.\n";
	cout << " 3 - Delete from list.\n";
	cout << " 4 - Quit.\n";
	cout << " Enter your choise and press return : ";

	cin >> choice;

	if(choice == 4){
		exit(0);
	}
}