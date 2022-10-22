// =================================================================
//
// File: ship.h
// Authors: Daniel Emilio Fuentes Portaluppi - A01708302
//			Ivan Ricardo Paredes Áviles - A01705083
// 
// Date: 18/10/22
//
// =================================================================

#ifndef SHIP_H
#define SHIP_H

#include <iomanip>
#include <iostream>
using namespace std;

class Ship{
	private:
		//Vars
		int minute, hour, day, month, year;
		char entry;
		string UBI;
	
	public:
		//Constructors
		Ship(string, string, char, string);
		Ship();
		Ship(const Ship&);

		bool older(const Ship&);
		bool operator < (const Ship&);

		//Getters
		int getMinute() const;
		int getHour() const;
		int getDay() const;
		int getMonth() const;
		int getYear() const;
		char getEntry() const;
		string getUBI() const;

		//Setters
		void setTime(string);
		void setDate(string);
		void setEntry(char);
		void setUBI(string);
};

/* #region Constructors */ 
Ship::Ship(string date, string time, char entry_, string UBI_){
	day = (date[0]-'0')*10 + (date[1]-'0');
	month = (date[3]-'0')*10 + (date[4]-'0');
	year = (date[6]-'0')*10 + (date[7]-'0');

	hour = (time[0]-'0')*10 + (time[1]-'0');
	minute = (time[3]-'0')*10 + (time[4]-'0');

	entry = entry_;
	UBI = UBI_;	
}

Ship::Ship(){
	day = 0;
	month = 0;
	year = 0;
	hour = 0;
	minute = 0;
	entry = '0';
	UBI = "";
}

Ship::Ship(const Ship &s){
	day = s.day;
	month = s.month;
	year = s.year;
	hour = s.hour;
	minute = s.minute;
	entry = s.entry;
	UBI = s.UBI;
}
/* #endregion */

bool Ship::older(const Ship &s){
	if(year != s.year)
		return year < s.year;
	else if(month != s.month)
		return month < s.month;
	else if(day != s.day)
		return day < s.day;
	else if(hour != s.hour)
		return hour < s.hour;
	else if(minute != s.minute)
		return minute < s.minute;
	return false;
}

/* #region Setters */
void Ship::setTime(string time){
	hour = (time[0]-'0')*10 + (time[1]-'0');
	minute = (time[3]-'0')*10 + (time[4]-'0');
}

void Ship::setDate(string date){
	day = (date[0]-'0')*10 + (date[1]-'0');
	month = (date[3]-'0')*10 + (date[4]-'0');
	year = (date[6]-'0')*10 + (date[7]-'0');
}

void Ship::setEntry(char entry_){
	entry = entry_;
}

void Ship::setUBI(string UBI_){
	UBI = UBI_;
}
/* #endregion */

/* #region Getters */
int Ship::getMinute() const {
	return minute;
}

int Ship::getHour() const {
	return hour;
}

int Ship::getDay() const {
	return day;
}

int Ship::getMonth() const {
	return month;
}

int Ship::getYear() const {
	return year;
}

char Ship::getEntry() const {
	return entry;
}

string Ship::getUBI() const {
	return UBI;
}
/* #endregion */

#endif