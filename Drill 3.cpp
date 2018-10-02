#include <string>
#include <iostream>

using namespace std;

int main()
{
	int age = 0;
	string f_name;
	string fr_name;
	char f_sex = 0;
	cout << "\tChapter 03 | Drill\n\n"<<endl;
	cout << "***** Enter the name of the person you want to write to : "<< endl;
	cin >> f_name;
	cout << "***** Enter his/her age : "<< endl;
	cin >> age;
	
	if (age <= 0 || age >= 110)
	{
		cout << "You're kidding...";
	}
	cout << "***** Input another friend's name : " << endl;
	cin >> fr_name;
	cout << "***** Enter "<<fr_name<<"'s sex (m/f) : " << endl;
	cin >> f_sex;
	
	cout << "Dear " << f_name << "!"<<endl;
	cout << "It has been a long time when we last saw each other.\nI can't wait to see you again. How you doin'?"<< endl;
	cout << "Have you seen " << fr_name << " lately?"<<endl;
	if (f_sex == 'm')
	{
		cout << "If you see " << fr_name << " tell him to call me."<< endl;
	}
	else if (f_sex == 'f')
	{
		cout << "If you see " << fr_name << " tell her to call me." << endl;
	}
	cout << "I hear you just had a birthday and you are " << age << " years old"<< endl;
	
	if (age < 12)
	{
		cout << "Next year you'll be " << age << "." << endl;
	}
	else if (age == 17)
	{
		cout << "Next year you'll be able to vote." << endl;
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement." << endl;
	}
	cout << "Yours sincerely,\n\n................\n" <<"Lucski Attila" << endl; 
}
