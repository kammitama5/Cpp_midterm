#ifndef DATE_
#define DATE_


class Date{

private:
	int month;
	int day;
	int year;

public:
	Date(int = 0, int = 1, int = 1980);
	void setDate(int, int, int);

	void setHour(int);
	void setDay(int);
	void setYear(int);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

};
#endif