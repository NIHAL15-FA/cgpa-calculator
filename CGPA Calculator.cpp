#include <iostream>
#include "CGPA Calculator.h"
#include <fstream>
using namespace std;
void student::input_data(){
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your ID: ";
cin>>id;
cout<<"Enter NO of courses: ";
cin>>no_courses;
 for(int i=0; i<no_courses; i++)
 {
    cout<<"Enter course name: ";
    cin>>ncourses[i];
    cout<<"Enter course grade: ";
    cin>> grades[i];
    cout<<"Enter credit hours: ";
    cin>>credits[i];
 }
}
float student::calc_GPA() {
float t_point=0;
int t_credit=0;
for (int i=0; i<no_courses; i++){
t_point+= grades[i]*credits[i];
t_credit+=credits[i];}
return t_point/ t_credit;
}
float student::calc_CGPA(){
return calc_GPA();
}
void student::print_grade(){
cout<<"\n  sudent Grades   \n";
for(int i=0; i<no_courses; i++)
{
cout<<"course:"<<ncourses[i]
<<", Grades: "<<grades[i]
<<"credits:"<<credits[i];
}
}
void student::save_file(){
ofstream file("CGPA_data.txt");
if(file.is_open()){
    file<<name;
    file<<id;
    file<<no_courses;
        for(int i=0; i<no_courses; i++){
            file<<ncourses[i]<<endl;
            file<<grades[i]<<endl;
            file<<credits[i]<<endl;
        }
        file.close();
        cout<<"data saved successfully.\n";
}
else{
    cout<<"can't open the file.";  
}
}
void student::read_file()
{
    ifstream file("CGPA_data.txt");
    if (file.is_open()){
        file>>name;
        file>>id;
        file>>no_courses;
        for(int i=0; i<no_courses; i++)
        {
            file>>ncourses[i]>>grades[i]>>credits[i];
        }
        file.close();
        cout<<"data loaded successfully.\n";
    }
    else{
        cout<<"can't read data.\n";
    }
}



