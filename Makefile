Student.o: Student.cpp
	g++ -c Student.cpp

Instructor.o: Instructor.cpp
	g++ -c Instructor.cpp

main.o:	main.cpp
	g++ -c main.cpp

main: Student.o Instructor.o main.o
	g++ -o main Student.o Instructor.o main.o

clean: rm -f core *.o
