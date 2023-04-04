#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

class Point
{
private:
	string name;
	string student_No;
	float score;
	static int student;
	static float scoreSum;
	static float scoreAve;
public:
	Point(string name1, string student_No1, float score1);
	~Point();
	void putStudnet();
	void putScore();

};

int Point::student = 0;
float Point::scoreSum = 0.0;
float Point::scoreAve = 0.0;

void putStudentID(string& name, string& student_No, float& score);

int main()
{
	string name, student_NO;
	float score=0.0;
	for (int i = 0; i < 4; i++)
	{
		putStudentID(name, student_NO, score);
	Point P(name, student_NO, score);
	P.putStudnet();
	P.putScore();
	}
}


Point::Point(string name1, string student_No1, float score1)
{
	name = name1; student_No = student_No1; score = score1;
	++student;
	scoreSum += score;
	scoreAve = scoreSum / student;
}

Point::~Point()
{
	--student;
	scoreSum -= score;
}

void Point::putStudnet()
{
	cout << "姓名：" << name << endl << "学号：" << student_No << endl << "成绩:" << score << endl;
}

void Point::putScore()
{
	cout << "学生人数：" << student << endl << "学生平均分：" << scoreAve << endl;
}

void putStudentID(string& name, string& student_No, float& score)
{

	cout << "输入学生姓名："; cin >> name;
	cout << "输入学生学号："; cin >> student_No;
	cout << "输入学生成绩："; cin >> score;
}


