#include"CGPA Calculator.h"
int main(){
student s;
s.input_data();
float gpa=s.calc_GPA();
cout<<"student GPA is: "<<gpa;

    return 0;
}