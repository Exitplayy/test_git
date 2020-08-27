#pragma once
class Cat {
	string sound;
	string type;
	int age;
public:
	Cat() {
		sound = "May";
		type = "Cats";
		age = 12;
	}

	void sound() {
		cout << endl << sound << endl;
	}

	void type() {
		cout << endl << type << endl;
	}

	void show() {
		cout << endl << type << endl;
		cout << endl << age << endl;
	}
};
