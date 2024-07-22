//
// Created by Harrison Baker on 7/22/24.
//

#ifndef TIME_TIME_H
#define TIME_TIME_H

#include <iostream>

using namespace  std;

class Time {

private:
	int days, minutes, hours, seconds;

public:

	// Constructors
	Time();
	Time(int d, int h, int m,int  s);
	Time(int h, int m,int  s);
	Time(int h, int m);

	// Days

	int getDays() const;

	void setDays(int Days);

	// Minutes

	int getMinutes() const;

	void setMinutes(int Minutes);

	// Hours

	int getHours() const;

	void setHours(int Hours);

	// Seconds

	int getSeconds() const;

	void setSeconds(int Seconds);


	void simplify();
	Time operator+(Time& right);
	Time operator-(Time& right);
	Time operator++();
	Time operator--();
	Time operator++(int);
	Time operator--(int);
	bool operator>(Time& right);
	bool operator<(Time& right);
	friend ostream& operator<<(ostream &strm, const Time &right);
	friend istream& operator>>(istream &strm,  const Time &right) ;
	operator int();
};




#endif //TIME_TIME_H
