#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct date // дата рождения
{
	char daymon[6];
	int year;
};


class Person
{
	char surname[30]; //private
	char name[30];
	char midname[30];
	char adress[30];
	char gender[6];
	char education[30];
	date t;
public:
	Person();
	char* geteducation();
	char* getgender();
	int getyear();
	void show();
};

Person::Person()
{
	cout << "Input surname:"; cin >> surname;
	cout << "Input name:"; cin >> name;
	cout << "Input midname:"; cin >> midname;
	cout << "Input adress:"; cin >> adress;
	cout << "Input gender:"; cin >> gender;
	cout << "Input education:"; cin >> education;
	cout << "Day.mon:"; cin >> t.daymon;
	cout << "Year:"; cin >> t.year;
}

void Person::show()
{
	cout << "Surname :" << surname << endl;
	cout << "Name :" << name << endl;
	cout << "Midname :" << midname << endl;
	cout << "Adress :" << adress << endl;
	cout << "Education :" << education << endl;
	cout << "Was born :" << t.daymon << '.' << t.year << endl;

}char* Person::geteducation()
{
	return education;
}

char* Person::getgender()
{
	return gender;
}

int Person::getyear()
{
	return (2022-t.year);
}

void spisage(Person spis[], int n) // список персон заданного возраста
{
	int year;
	cout << "Input age:";
	cin >> year;
	for (int i = 0; i < n; i++)
		if (spis[i].getyear() > year)
			spis[i].show();
}

void spiseducation(Person spis[], int n) // список персон заданного образования
{
	char education[30];
	cout << "Input education:";
	cin >> education;
	for (int i = 0; i < n; i++)
		if (strcmp(spis[i].geteducation(), education) == 0)
			spis[i].show();
}

void spisgender(Person spis[], int n) // список персон заданных полов
{
	int i;
	char gender[6];
	cout << "Input gender:";
	cin >> gender;
	for (i = 0; i < n; i++)
		if (strcmp(spis[i].getgender(), gender) == 0)
			spis[i].show();
}

void main()
{
	setlocale(LC_ALL, "russian");
	Person* spis;
	int n;
	cout << "Input a number of person: ";
	cin >> n;
	spis = new Person[n];
	for (int i = 0; i < n; i++)
	{
		cout << "==============================" << endl;
		spis[i].show();
	}
	spisage(spis, n);
	spiseducation(spis, n);
	spisgender(spis, n);
	delete[] spis;
	cout << "press any key!";
	_getch();
}