#include "Student.h"

int main()
{
	Student student1("John", 90);
	Student student2("Mary", 80);

	string name;
	int score;
	cin >> name >> score;
	student1.setName(name);
	student2.setScore(score);
	cout << student1.getName() << " " << student1.getScore() << endl;
	cout << student2.getName() << " " << student2.getScore() << endl;
	system("pause");
}