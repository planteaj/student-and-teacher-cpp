

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include "Student.h"

class Instructor {

 public:
  bool login(std::string username, std::string password);
  std::string getInstructorName();
  Student getStudent(std::string username);
  Student getMinStudent(int gradeType);
  Student getMaxStudent(int gradeType);
  double getAvg(int gradeType);
 private:
  std::string fullName;
};
#endif
