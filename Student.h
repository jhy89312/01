#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student();
	Student(string, int);
	void setName(string);
	void setScore(int);
	string getName();
	int getScore();
private:
	string name;
	int score;
};
#endif