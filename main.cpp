#include <iostream>
#include "include/Time.h"
#include "unistd.h"

using namespace  std;


void testTimeAssignment();
void testTimeSimplify();
void testTimePlusMinusOperator();
void testTimePrefixPostFixOperator();
void startClock();
void testTimeRelationOperator();
void testTimeStreamOperators();
void testTimeIntegerConversion();



int main() {

	// startClock();
	// testTimeSimplify();
	// testTimePlusMinusOperator();
	// testTimePrefixPostFixOperator();
	//testTimeRelationOperator();

	// testTimeStreamOperators();
	testTimeIntegerConversion();

	return 0;
}

void testTimeAssignment()
{
	Time classStart ( 0, 90, 80, 1);

	classStart.simplify();

	cout << classStart.getHours() << ':' << classStart.getMinutes() << endl;
}

void testTimeSimplify()
{
	Time myTime(36, 61, 61);

	Time myOtherTime(-1, -1, -1);

	cout << myTime.getDays() << ' ' <<  myTime.getHours() << ':' << myTime.getMinutes() << ' '  << myTime.getSeconds() << endl;

	myTime.simplify();

	cout << myTime.getDays() << ' ' <<  myTime.getHours() << ':' << myTime.getMinutes() << ' '  << myTime.getSeconds() << endl;


	cout << myOtherTime.getDays() << ' ' <<  myOtherTime.getHours() << ':' << myOtherTime.getMinutes() << ' '  << myOtherTime.getSeconds() << endl;

	myOtherTime.simplify();

	cout << myOtherTime.getDays() << ' ' <<  myOtherTime.getHours() << ':' << myOtherTime.getMinutes() << ' '  << myOtherTime.getSeconds() << endl;

}

void testTimePlusMinusOperator()
{
	Time time1 (9, 20, 20);
	Time time2 (1, 10, 10);


	Time time3 = time1 + time2;
	cout <<  time3.getDays() << ' ' << time3.getHours()  << ':' << time3.getMinutes() << ' ' << time3.getSeconds() << endl;

	time3 = time1 - time2;
	cout <<  time3.getDays() << ' ' << time3.getHours()  << ':' << time3.getMinutes() << ' ' << time3.getSeconds() << endl;
}

void testTimePrefixPostFixOperator()
{
	Time time1 (9, 20, 59);


	cout <<  time1.getDays() << ' ' << time1.getHours()  << ':' << time1.getMinutes() << ' ' << time1.getSeconds() << endl;
	time1++;

	cout << time1.getDays() << ' ' << time1.getHours()  << ':' << time1.getMinutes() << ' ' << time1.getSeconds() << endl;

	time1--;

	cout <<  time1.getDays() << ' ' << time1.getHours()  << ':' << time1.getMinutes() << ' ' << time1.getSeconds() << endl;
}

void startClock()
{
	Time startingTime(0, 11, 41, 0);

	while (true)
	{
		startingTime++;
		startingTime.simplify();
		cout << time;
		sleep(1);
	}
}

void testTimeRelationOperator()
{
	Time time1 (1, 1, 1, 1);
	Time time2 (10, 38);

	bool isGreater = time1 > time2;
	bool isLess = time1 < time2;

	cout << isGreater << endl;
	cout << isLess << endl;
}

void testTimeStreamOperators()
{
	Time time (0, 12, 38, 0);
	cout << time;
}

void testTimeIntegerConversion()
{
	Time time(1, 0, 0, 0);
	cout << static_cast<int>(time) << endl;
}