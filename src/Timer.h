#ifndef TIMER_H_
#define TIMER_H_

#include <ctime>
#include <string>

/**
 *  Wrapper class for timer functions to measure algorithm efficiency.
 *
 *  Provides functions to start and stop the timer. 
 *  When stop is called, the number of seconds elapsed will be printed.
 */
class Timer {

public:
	/**
	 *  Constructor.
	 *  
	 *  Begins timer upon construction, which means stop function can 
	 *  be called immediately. 
	 */ 
	Timer();
	
	/**
	 *  Begins the timer
	 */ 
	void start();
	
	/**
	 *  Stops the timer
	 * 
	 *  Stops the timer and prints the elapsed time onto console.
	 *
	 *  \param msg Add a printable message;
	 */ 
	void stop();
	void stop(std::string msg);
	
private:
	/**
	 *  Private variable
	 *  
	 *  Updated with time when constructor or start() is called.
	 */
	std::clock_t mStartTime;
};

#endif // #ifndef TIMER_H_
