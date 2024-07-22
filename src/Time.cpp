//
// Created by Harrison Baker on 7/22/24.
//

#include "../include/Time.h"
#include <cstdlib>

// Constructors

Time::Time() {
	days, hours, minutes, seconds = 0;
}

Time::Time(int d, int h, int m, int s) {
	days = d;
	hours = h;
	minutes = m;
	seconds = s;
}

Time::Time(int h, int m, int s) {
	days = 0;
	hours = h;
	minutes = m;
	seconds = s;
}

Time::Time(int h, int m) {
	days = 0;
	hours = h;
	minutes = m;
	seconds = 0;
}

// Dau
int Time::getDays() const {
	return days;
}

void Time::setDays(int Days) {
	Time::days = Days;
}

// Minutes

int Time::getMinutes() const {
	return minutes;
}

void Time::setMinutes(int Minutes) {
	Time::minutes = Minutes;
}

// Hours

int Time::getHours() const {
	return hours;
}

void Time::setHours(int Hours) {
	Time::hours = Hours;
}

// Seconds

int Time::getSeconds() const {
	return seconds;
}

void Time::setSeconds(int Seconds) {
	Time::seconds = Seconds;
}

void Time::simplify() {
	if (seconds >= 60)
	{
		minutes += seconds / 60;
		seconds = seconds % 60;
	}
	if (seconds < 0)
	{
		minutes -= ((abs(seconds) / 60) + 1);
		seconds = 60 - ((abs(seconds) % 60));
	}

	if (minutes >= 60)
	{
		hours += minutes / 60;
		minutes  = minutes % 60;
	}
	if (minutes < 0 )
	{
		hours -= ((abs(minutes) / 60) + 1);
		minutes = 60 -  ((abs(minutes) % 60));
	}
	if (hours >= 24)
	{
		days += hours / 24;
		hours  = hours % 24;
	}
	if (hours < 0 )
	{
		days -= ((abs(hours) / 24) + 1);
		hours = 24 - ((abs(hours) % 24));
	}




}

Time Time::operator+(Time &right) {

	Time tempTime;
	tempTime.days = this->days + right.days;
	tempTime.hours = this->hours + right.hours;
	tempTime.minutes = this->minutes + right.minutes;
	tempTime.seconds = this->seconds + right.seconds;



	tempTime.simplify();

	return tempTime;
}

Time Time::operator-(Time &right) {

	Time tempTime;
	tempTime.days = this->days - right.days;
	tempTime.hours = this->hours - right.hours;
	tempTime.minutes = this->minutes - right.minutes;
	tempTime.seconds = this->seconds - right.seconds;



	tempTime.simplify();

	return tempTime;
}

Time Time::operator++() {
	this->seconds++;

	this->simplify();

	return *this;

}

Time Time::operator--() {
	this->seconds --;
	this->simplify();

	return *this;
}

Time Time::operator++(int) {
	++this->seconds;

	this->simplify();

	return *this;

}

Time Time::operator--(int) {
	--this->seconds;
	this->simplify();

	return *this;
}

bool Time::operator>(Time& right) {
	if (this->days > right.days)
	{
		return true;
	}
	else if (this->days == right.days)
	{
		if (this->hours > right.hours)
		{
			return true;
		}
		else if (this->hours == right.hours)
		{
			if (this->minutes > right.minutes)
			{
				return true;
			}

			else if (this->minutes == right.minutes)
			{
				if (this->seconds > right.seconds)
				{
					return true;
				}

			}
		}
		return false;
	}


}

bool Time::operator<(Time& right) {
	if (this->days < right.days)
	{
		return true;
	}
	else if (this->days == right.days)
	{
		if (this->hours < right.hours)
		{
			return true;
		}
		else if (this->hours == right.hours)
		{
			if (this->minutes < right.minutes)
			{
				return true;
			}

			else if (this->minutes == right.minutes)
			{
				if (this->seconds < right.seconds)
				{
					return true;
				}

			}
		}

	}
	return false;
}

ostream& operator<<(ostream &strm, const Time &obj)
{
	strm << obj.getDays() << ' ' << obj.getHours() << ':'  << obj.getMinutes() << ' ' << obj.getSeconds() << endl;
	return strm;
}
istream& operator>>(istream &strm,  const Time &obj)
{

}



