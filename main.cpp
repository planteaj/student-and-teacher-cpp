#include <iostream>
#include "Instructor.h"
#include "Student.h"

using namespace std;

int main(int argc, char** argv){
  bool loopOne = true;
  string title = "User Types,\n\t1 - Instructor\n\t2 - Student\nSelect a login user type or enter 3 to exit:";
  while(loopOne){

    bool loopTwo = true, loopThree = true;
    int loginNum;
    string uName = "", pwd = "";
    cout << title << endl;
    cin >> loginNum;

    if(loginNum == 1){
      cout <<"Enter credentials to login, Enter username: ";
      cin >> uName;
      cout <<"Enter password: ";
      cin >> pwd;
      Instructor temp;
      if(temp.login(uName, pwd)){
	cout << "\nYou are now logged in as instructor " + temp.getInstructorName() << endl;
	while(loopTwo){
	  loopThree = true;
	  int bio;
	  cout << "Query options," << endl;
	  cout << "\t1 - view grades of a student" << endl;
	  cout << "\t2 - view stats" << endl;
	  cout << "Enter option number: " ;
	  cin >> bio;
	  if(bio == 1){
	    string sName;
	    Student sTemp;
	    cout << "enter student username to view grade: ";
	    cin >> sName;
	    sTemp = temp.getStudent(sName);
	    cout << "Student Name: " << sTemp.getStudentName() << endl;
	    cout << "\tProject\t" << sTemp.getProjectGrade() << endl;
	    cout << "\tQuiz\t" << sTemp.getQuizGrade() << endl;
	    cout << "\tMidterm\t" << sTemp.getMidtermGrade() << endl;
	    cout << "\tFinal\t" << sTemp.getFinalGrade() << endl;
	    cout << "\tOverall\t" << sTemp.getOverallGrade() << endl;
	    loopTwo = false;
	  } else if(bio == 2){
	    while(loopThree) {
	      int avgSelect;
	      Student minTemp;
	      Student maxTemp;
	      cout << "Grade types," << endl;
	      cout << "\t\t1 - Project grade" << endl;
	      cout << "\t\t2 - Quiz grade" << endl;
	      cout << "\t\t3 - Midterm grade" << endl;
	      cout << "\t\t4 - Final grade " << endl;
	      cout << "\t\t5 - Overall grade" << endl;
	      cout << "Select a grade type to view stats: ";
	      cin >> avgSelect;
	      if (avgSelect == 1){
		cout << "Project grade stats," << endl;
		minTemp = temp.getMinStudent(avgSelect);
		cout << "\t\tmin\t" << minTemp.getProjectGrade() << "% " << minTemp.getStudentName() << endl;
		maxTemp = temp.getMaxStudent(avgSelect);
		cout << "\t\tmax\t" << maxTemp.getProjectGrade() << "% " << maxTemp.getStudentName() << endl;
		cout <<"\t\tavg\t" << temp.getAvg(avgSelect) << endl;
		loopThree = false;
	      } else if (avgSelect == 2){
		cout << "Quiz grade stats," << endl;
		minTemp = temp.getMinStudent(avgSelect);
		cout << "\t\tmin\t" << minTemp.getQuizGrade() << "% " << minTemp.getStudentName() << endl;
		maxTemp = temp.getMaxStudent(avgSelect);
		cout << "\t\tmax\t" << maxTemp.getQuizGrade() << "% " << maxTemp.getStudentName() << endl;
		cout <<"\t\tavg\t" << temp.getAvg(avgSelect) << endl;
		loopThree =false;
	      } else if (avgSelect == 3){
		cout << "Midterm grade stats," << endl;
		minTemp = temp.getMinStudent(avgSelect);
		cout << "\t\tmin\t" << minTemp.getMidtermGrade() << "% " << minTemp.getStudentName() << endl;
		maxTemp = temp.getMaxStudent(avgSelect);
		cout << "\t\tmax\t" << maxTemp.getMidtermGrade() << "% " << maxTemp.getStudentName() << endl;
		cout <<"\t\tavg\t" << temp.getAvg(3) << endl;
		loopThree = false;
	      } else if (avgSelect == 4){
		cout << "Final grade stats," << endl;
	        minTemp = temp.getMinStudent(avgSelect);
		cout << "\t\tmin\t" << minTemp.getFinalGrade() << "% " << minTemp.getStudentName() << endl;
	        maxTemp = temp.getMaxStudent(avgSelect);
		cout << "\t\tmax\t" << maxTemp.getFinalGrade() << "% " << maxTemp.getStudentName() << endl;
		cout <<"\t\tavg\t" << temp.getAvg(4) << endl;
		loopThree = false;
	      } else if (avgSelect == 5){
		cout << "Overall grade stats," << endl;
	        minTemp = temp.getMinStudent(avgSelect);
		cout << "\t\tmin\t" << minTemp.getOverallGrade() << "% " << minTemp.getStudentName() << endl;
	        maxTemp = temp.getMaxStudent(avgSelect);
		cout << "\t\tmax\t" << maxTemp.getOverallGrade() << "% " << maxTemp.getStudentName() << endl;
		cout <<"\t\tavg\t" << temp.getAvg(5) << endl;
		loopThree = false;
	      } else {
		cout << "Invalid option. Please enter a valid option:" << endl;
	      } // else
	    } // while(loopThree
	  } else {
	    cout <<"Invalid option. Please enter a valid option:" << endl;
	      loopTwo = false;
	  } //else
	} // while(loopTwo
      } else {
	cout << "login as instructor failed." << endl;
      } //if(temp.login
    } else if(loginNum ==2){
      cout << "enter credentials to login, Enter username: ";
      cin >> uName;
      cout << "Enter password: ";
      cin >> pwd;
      Student temp;
      if(temp.login(uName, pwd)){
	cout << "You are now logged in as student " + temp.getStudentName() << endl;
	char bio;
	cout << "Do you want to view grades (y/n)? ";
	cin >> bio;
	if(bio == 'y'){
	  cout << "Student name:"<< temp.getStudentName() << endl;
	  cout << " \tProject\t" << temp.getProjectGrade() << "%" << endl;
	  cout << " \tQuiz\t" << temp.getQuizGrade() << "%" << endl;
	  cout << " \tMidterm\t" << temp.getMidtermGrade() << "%" << endl;
	  cout << " \tFinal\t" << temp.getFinalGrade() << "%" << endl;
	  cout << " \tOverall\t" << temp.getOverallGrade() << "%\n" << endl;
	} //if
      } else {
	cout << "login as student failed." << endl;
      } //if(temp.login
    } else if(loginNum ==3){
      loopOne = false;
    } else {
      cout << "Invalid option. Please enter a valid option.final" << endl;;
    } //if(loginNum
  } //loopOne
} //main
