#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct xrec 
{ 
	int studentNumber; 
	float quizOneGrade, quizTwoGrade, midtermGrade, finalExamGrade;
	char letterGrade;
	float aveScore;

}; 
typedef struct xrec StudentRecord;



void input(StudentRecord * studentPtr);
void computeGrade(StudentRecord * studentPtr);
void output(const StudentRecord student);


int main()
{
	StudentRecord student[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		input(&student[i]);
		computeGrade(&student[i]);
	}

	for (i = 0; i < 5; i++)
	{
		output(student[i]);
	}
	
	return 0;
}

void input(StudentRecord * studentPtr)
{

	printf("Enter Student Number: ");
	scanf_s("%d", &studentPtr->studentNumber);
	printf("Enter Two 10 point Quizzes: ");
	scanf_s("%f %f", &studentPtr->quizOneGrade, &studentPtr->quizTwoGrade);
	printf("Enter Midterm and Final Grades. These are 100 Point Tests: ");
	scanf_s("%f %f", &studentPtr->midtermGrade, &studentPtr->finalExamGrade);
}

void computeGrade(StudentRecord * studentPtr)
{
	studentPtr->aveScore = ((studentPtr->quizOneGrade + studentPtr->quizTwoGrade) / 20) * 25 + (studentPtr->midtermGrade / 100) * 25 + (studentPtr->finalExamGrade / 100) * 50;
	if (studentPtr->aveScore >= 90)
		studentPtr->letterGrade = 'A'; 
	else if (studentPtr->aveScore >= 80)
		studentPtr->letterGrade = 'B';
	else if (studentPtr->aveScore >= 70)
		studentPtr->letterGrade = 'C';
	else if (studentPtr->aveScore >= 60)
		studentPtr->letterGrade = 'D';
	else 
		studentPtr->letterGrade = 'F';

}

void output(const StudentRecord student)
{
	printf("The record for Student number: %d\n\n", student.studentNumber);
	printf("The Quiz Grades are: %.2f %.2f\n\n", student.quizOneGrade, student.quizTwoGrade);
	printf("The Midterm and Exam Grades are: %.2f %.2f\n\n", student.midtermGrade, student.finalExamGrade);
	printf("The Numeric average is: %.2f\n\n", student.aveScore);
	printf("And the letter grade assigned is: %c\n\n\n\n", student.letterGrade);
}