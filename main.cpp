

#include <iostream>
#include "MyTime.h"
#include "OutOfRangeException.h"

using namespace std;

int main()
{
    int hour,minute,second;
    MyTime time;

    while(cout << "Enter time in format HH:MM:SS ")
        {
            cin>>hour>>minute>>second;
            try
            {
                time.setTime(hour,minute,second);
                break;
            }

            catch (OutOfRangeException &OutOfRangeException){
            cout << "Exception Occured !!! " << OutOfRangeException.what() << endl;
            }
          }

        time.nextSecond();
        cout << "After one second, time is -> " << time.toString() << endl;

        time.nextMinute();
        cout << "After one minute, time is -> " << time.toString() << endl;

        time.nextHour();
        cout << "After one hour, time is -> " << time.toString() << endl;

        time.previousSecond();
        cout << "Before one second, time was -> " << time.toString() << endl;

        time.previousMinute();
        cout << "Before one minute, time was -> " << time.toString() << endl;

        time.previousHour();
        cout << "Before one hour, time was -> " << time.toString() << endl;
}
