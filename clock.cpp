/*
 * Clock.cpp
 *
 * Author: Daniel Balbuena
 * Date: July 15, 2026
 */

#include <iostream>
#include <iomanip>
#include "Clock.h"

using namespace std;

// Constructor
Clock::Clock() {
    hour = 0;
    minute = 0;
    second = 0;
}

// Add one hour
void Clock::addHour() {
    hour++;

    if (hour == 24) {
        hour = 0;
    }
}

// Add one minute
void Clock::addMinute() {
    minute++;

    if (minute == 60) {
        minute = 0;
        addHour();
    }
}

// Add one second
void Clock::addSecond() {
    second++;

    if (second == 60) {
        second = 0;
        addMinute();
    }
}

// Display 12-hour clock
void Clock::format12Hour() {

    int displayHour = hour;
    string period = "AM";

    if (displayHour == 0) {
        displayHour = 12;
    }

    else if (displayHour == 12) {
        period = "PM";
    }

    else if (displayHour > 12) {
        displayHour -= 12;
        period = "PM";
    }

    cout << setw(2) << setfill('0') << displayHour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second
         << " " << period;
}

// Display 24-hour clock
void Clock::format24Hour() {

    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second;
}

// Display both clocks
void Clock::displayClocks() {

    cout << "**************************    **************************" << endl;
    cout << "*     12-Hour Clock      *    *     24-Hour Clock      *" << endl;
    cout << "*       ";

    format12Hour();

    cout << "       *    *        ";

    format24Hour();

    cout << "        *" << endl;

    cout << "**************************    **************************" << endl;
}

// Display menu
void Clock::displayMenu() {

    cout << endl;
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
}
