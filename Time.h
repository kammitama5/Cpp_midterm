#ifndef TIME_
#define TIME_


class Time{

private:
	int hour;
	int minute;
public:
	Time(int = 0, int = 0);

	//void Time& setHour(int);
	//void Time& setMinute(int);
	
	int getHour() const;
	int getMinute() const;

	void printUniversal() const;
	void printStandard() const;




};
#endif