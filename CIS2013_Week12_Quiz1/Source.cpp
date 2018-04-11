#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class House {
	string color;
	int year, carPorts, windows, doors;
public:
	void default() {
		color = "green";
		year = '0';
		carPorts = '0';
		windows = '0';
		doors = '0';
	}
	void set_color(string a) {
		color = a;
		cout << "The color is now " << a;
	}
	void set_year(int a) {
		year = a;
		cout << "The year is now " << a;
	}
	void set_park(int a) {
		carPorts = a;
		cout << "There are now " << a << " parking spots";
	}
	void set_windows(int a) {
		windows = a;
		cout << "There are now " << a << " windows";
	}
	void set_doors(int a) {
		doors = a;
		cout << "There are now " << a << "doors";
	}
	void value() {

		int value = year * 400 + windows * 100 + carPorts * 1000 + doors * 50;
		cout << "The value of your " << color << " house is " << value << ".\n";
		
	}

};

int main() {
	char input;
	string temp;
	int tempint;
	House home;
	home.default();
	do {
		cout << "\nPress:\nC)to change color\nY)to change year\nP)to change parking spots\nW)to change windows\nD)to change doors\nV)to calculate value\nX)to exit\n";
		cin >> input;
		if (input == 'c') {
			cin >> temp;
			home.set_color(temp);
		}
		else if (input == 'y') {
			cin >> tempint;
			home.set_year(tempint);
		}
		else if (input == 'p') {
			cin >> tempint;
			home.set_park(tempint);
		}
		else if (input == 'w') {
			cin >> tempint;
			home.set_windows(tempint);
		}
		else if (input == 'd') {
			cin >> tempint;
			home.set_doors(tempint);
		}
		else if (input == 'v') {
			home.value();
		}
		else if (input == 'x') {}
		else {
			cout << "Invalid command.\n";
		}
	} while (input != 'x');

	return 0;
}