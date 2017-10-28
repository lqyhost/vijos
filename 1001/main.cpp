#include <iostream>
#include "string.h"

using namespace std;

class Student
{
private:
    char name[20]="";
    int mark = 0;
    int student_mark = 0;
    bool student_officer = false;
    bool east_student = false;
    int paper_number = 0;
    int scholarship = 0;
public:
    Student(){}
    Student(char _name[], int _mark, int _student_mark, char _student_officer, char _east_student, int _paper_number)
    {
        strcpy(name, _name);
        mark = _mark;
        student_mark = _student_mark;
        if (_student_officer == 'Y')
            student_officer = true;
        else if (_student_officer == 'N')
            student_officer = false;
        if (_east_student == 'Y')
            east_student = true;
        else if (_east_student == 'N')
            east_student = false;
        paper_number = _paper_number;
        CountScholarship ();
    }
    void CountScholarship ()
    {
        scholarship = 0;
        if ((mark > 80) && (paper_number > 0))
            scholarship +=8000;
        if ((mark > 85) && (student_mark > 80))
            scholarship += 4000;
        if (mark > 90)
            scholarship += 2000;
        if ((mark > 85) && (east_student))
            scholarship += 1000;
        if ((student_mark > 80) && (student_officer))
            scholarship += 850;
    }
    int Scholarship()
    {
        return scholarship;
    }
    char* GetName()
    {
        return name;
    }
};

void SortStudents(Student students[],int number)
{
    for (int i =1;i<number;i++)
    {
        for (int j=i; j>0; j--)
        {
            Student st=Student();
            if (students[j-1].Scholarship()<students[j].Scholarship())
            {
                st = students[j-1];
                students[j-1]=students[j];
                students[j]=students[j-1];
            }
        }
    }
}

int main()
{
    char _name[20]="";
    int _mark = 0, _student_mark = 0, _paper_number = 0;
    char _student_officer, _east_student;
    int students_number =0, i =0;
    cin>>students_number;
    Student students[students_number];
    while(cin>>_name>>_mark>>_student_mark>>_student_officer>>_east_student>>_paper_number)
    {
        students[i]=Student(_name, _mark, _student_mark, _student_officer, _east_student, _paper_number);
        i++;
    }
    SortStudents(students,students_number);
    cout<<students[0].GetName()<<endl<<students[0].Scholarship()<<endl;
    return 0;
}
