#include <iostream>
#include <string>
#include <initializer_list>
#include <algorithm>
using namespace std;

struct  Grades
{
    int science[5] = {};
    int math[5] = {};
    int history[5] = {};
};

class   Student
{
    private:
        int     roll;
        string  name;
        Grades  grades;
    public:
        Student(int r, string n, Grades g);
        Student(Student &s);
        void    setRoll(int r);
        void    setName(string n);
        void    setSciGrades(initializer_list<int> newGrades);
        void    setMatGrades(initializer_list<int> newGrades);
        void    setHisGrades(initializer_list<int> newGrades);
        int     *getGrades(string subject);
        string  subjectGrade(string subject);
        int     classGrade();
};

Student::Student(int r, string n, Grades g)
{
    setRoll(r);
    setName(n);
    setSciGrades({g.science[0], g.science[1], g.science[2], g.science[3], g.science[4]});
    setMatGrades({g.math[0], g.math[1], g.math[2], g.math[3], g.math[4]});
    setHisGrades({g.history[0], g.history[1], g.history[2], g.history[3], g.history[4]});

}

Student::Student(Student &s)
{
    this->roll = s.roll;
    this->name = s.name;
    this->grades = s.grades;
}

void    Student::setRoll(int r)
{
    roll = r;
}

void    Student::setName(string n)
{
    name = n;
}

void    Student::setSciGrades(initializer_list<int> newGrades)
{
    size_t count = min(newGrades.size(), size_t(5));
    copy(newGrades.begin(), newGrades.begin() + count, grades.science);
}

void    Student::setMatGrades(initializer_list<int> newGrades)
{
    size_t count = min(newGrades.size(), size_t(5));
    copy(newGrades.begin(), newGrades.begin() + count, grades.math);
}

void    Student::setHisGrades(initializer_list<int> newGrades)
{
    size_t count = min(newGrades.size(), size_t(5));
    copy(newGrades.begin(), newGrades.begin() + count, grades.history);
}

int     *Student::getGrades(string subject)
{
    if (subject == "math")
        return (grades.math);
    else if (subject == "science")
        return (grades.science);
    else if (subject == "history")
        return (grades.history);
    else
        return (NULL);
}

string  Student::subjectGrade(string subject)
{
    int     hold[5] = {};
    int     average = 0;

    if (subject == "math")
        copy(grades.math, grades.math + 5, hold);
    else if (subject == "science")
        copy(grades.science, grades.science + 5, hold);
    else if (subject == "history")
        copy(grades.history, grades.history + 5, hold);
    else
        return ("Either no grades for this subject or subject is missing.");
    
    for (int i = 0; i < 5; i++)
        average += hold[i];
    average /= 5;

    if (average < 60)
        return ("F");
    else if (average >= 60 && average < 70)
        return ("D");
    else if (average >= 70 && average < 80)
        return ("C");
    else if (average >= 80 && average < 90)
        return ("B");
    else
        return ("A");
}

int     Student::classGrade()
{
    int science = 0;
    int math = 0;
    int history = 0;
    int average = 0;
    int totals[3] = {};
    int final = 0;

    for (int i = 0; i < 5; i++)
        science += grades.science[i];
    average = science / 5;
    totals[0] = average;

    for (int i = 0; i < 5; i++)
        math += grades.math[i];
    average = math / 5;
    totals[1] = average;

    for (int i = 0; i < 5; i++)
        history += grades.history[i];
    average = history / 5;
    totals[2] = average;

    for (int i = 0; i < 3; i++)
        final += totals[i];
    final /= 3;

    return (final);
}

int main()
{
    int     roll;
    string  name;
    Grades  grades;

    cout<<"Please enter the roll number of the student: ";
    cin>>roll;
    cout<<"Please enter the name of the student: ";
    cin>>name;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Please enter the science grades of the student ("<<i+1<<"/5): ";
        cin>>grades.science[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Please enter the math grades of the student ("<<i+1<<"/5): ";
        cin>>grades.math[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Please enter the history grades of the student ("<<i+1<<"/5): ";
        cin>>grades.history[i];
    }
    Student s(roll, name, grades);
    cout<<"The science grade for "<<name<<" is: "<<s.subjectGrade("science")<<endl;
    cout<<"The math grade for "<<name<<" is: "<<s.subjectGrade("math")<<endl;
    cout<<"The history grade for "<<name<<" is: "<<s.subjectGrade("history")<<endl;
    cout<<"The overall score for "<<name<<" is: "<<s.classGrade()<<endl;
}