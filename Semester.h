#ifndef SEMESTER_
#define SEMESTER_


class Semester{

private:
	std::string semesterName;
	Date startDate;
	Date endDate;
public:
	//Semester(semesterName(), Date(startDate()), Date(endDate());

	void printSemester();

	std::string getSemesterName();
	//Date getStartDate();
	//Date endDate();

	std::string setSemesterName();
	void setStartDate(int, int, int);
	void setEndDate(int, int, int);

};
#endif