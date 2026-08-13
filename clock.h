/*
 * Clock.h
 *
 * Author: Daniel Balbuena
 * Date: July 15, 2026
 */

#ifndef CLOCK_H
#define CLOCK_H

class Clock {
private:
    int hour;
    int minute;
    int second;

public:
    Clock();

    void addHour();
    void addMinute();
    void addSecond();

    void displayClocks();
    void displayMenu();

    void format12Hour();
    void format24Hour();
};

#endif
