//File: Time.h  Time Class Header File
#ifndef TIME_H	// used to avoid multiple definitions 
#define TIME_H	// not part of the class
class Time
{
	public: 
		Time();	  	// constructor
		~Time(); 	// destructor
		// Function prototypes
		void setTime(int, int, int );
		void displayTime() const;
	private: 
		int hour, minute, second; 		
}; // a semicolon must appear here
#endif  // TIME_H
