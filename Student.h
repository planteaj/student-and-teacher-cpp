
#include <string>

#ifndef STUDENT_H
#define STUDENT_H

class Student {

 public:
  bool login(std::string username, std::string password);
  std::string getStudentName();
  int getProjectGrade();
  int getQuizGrade();
  int getMidtermGrade();
  int getFinalGrade();
  double getOverallGrade();

 private:
  std::string fullName;
  int projectGrade;
  int quizGrade;
  int midtermGrade;
  int finalGrade;


};
#endif
