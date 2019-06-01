#include "Student.h"

Student::Student(string newName, int newScore)
{
	name = newName;
	score = newScore;
}
void Student::setName(string a)
{
	name = a;
}
void Student::setScore(int b)
{
	score = b;
}
string Student::getName()
{
	return name;
}
int Student::getScore()
{
	return score;
}