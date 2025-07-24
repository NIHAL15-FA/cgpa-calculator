#include <iostream>
using namespace std;
class student{
public:
    string name;
  int  id;
  int no_courses;
  string ncourses[6];
  float grades[6];
  int credits[6];

void input_data();
float calc_GPA();
float calc_CGPA();
void print_grade();
void save_file();
void read_file();
};