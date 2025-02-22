/*
 This program implements Multiple Inheritance.
*/
#include <iostream>
using namespace std;

class PersonalInfo
{
    protected:
    string name;
    int age;
    
    public:
    PersonalInfo(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class AcademicInfo
{
    protected:
    string course;
    float grade;
    
    public:
    AcademicInfo(string course, int grade)
    {
        this->course = course;
        this->grade = grade;
    }
};

class SkillInfo
{
    protected:
    string skill;
    int experience;
    
    public:
    SkillInfo(string skill, int experience)
    {
        this->skill = skill;
        this->experience = experience;
    }
};

class MyResume : public SkillInfo, public AcademicInfo, public PersonalInfo
{
    string resumeTitle;

    public:
    MyResume(string title, string name, int age, string course, int grade, string skill, int experience) : PersonalInfo(name, age), AcademicInfo(course, grade), SkillInfo(skill, experience) {}
    
    void CreateResume()
    {
        cout << "\n Resume Title: " << resumeTitle << endl;
        cout << "\n Name: " << name << endl;
        cout << "\n Age: " << age << endl;
        cout << "\n Course: " << course << endl;
        cout << "\n Grade: " << grade << endl;
        cout << "\n Skill: " << skill << endl;
        cout << "\n Experience: " << experience <<"+ years"<< endl;
    }
};
int main()
{
    MyResume myResume("Software Developer", "Zaki Khan", 19, "Computer Science", 99.99, "C++", 5);
    myResume.CreateResume();

    return 0;
}