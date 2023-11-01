#include <iostream>
#include <ctime>

// the myDate class
class MyDate
{
    private: // data fields
        int year, month, day;

    public:
        // default constructor sets the date based on the current date
        MyDate()
        {
            // note: time(0) represents the number of seconds elapsed since January 1, 1970
            setDate(time(0));
        }
        // sets the date based on the number of seconds elapsed since January 1, 1970
        // note: I had to use long long since the value given in the problem was longer than the space allocated for a long
        MyDate(long long elapsedTime)
        {
            setDate(elapsedTime);
        }

        // user inputs the data firlds in this constructor
        MyDate(int _year, int _month, int _day)
        {
            setYear(_year);
            setMonth(_month);
            setDay(_day);
        }

        // accessor method for the year
        int getYear() const
        {
            return year;
        }

        // accessor method for the month
        int getMonth() const
        {
            return month;
        }

        // accessor method for the day
        int getDay() const
        {
            return day;
        }

        // mutator method for the year
        void setYear(int _year)
        {
            year = _year;
        }

        // mutator method for the month
        void setMonth(int _month)
        {
            month = _month;
        }

        // mutator method for the day
        void setDay(int _day)
        {
            day = _day;
        }

        // sets the date based on the number of seconds elapsed since January 1, 1970
        // note: I had to use long long since the value given in the problem was longer than the space allocated for a long
        void setDate(long long elapsedTime)
        {
            long long int tempDay = elapsedTime / 86400; // convert the number of seconds to days
            
            // set the month and year appropriately
            month = 0;
            year = 1970;

            // repeat this process while day is not less than 31
            while(tempDay / 31 > 0)
            {
                if(month == 3 || month == 5 || month == 8 || month == 10) // case for april, june, september, and november (30 days)
                    tempDay -= 30;
                else if(month == 1 && year % 4 == 0) // case for leap year february
                    tempDay -= 29;
                else if(month == 1) // case for non-leap year february
                    tempDay -= 28;
                else // all other months
                    tempDay -= 31;

                // increase the month
                month++;

                // if then month is past december, then increase the year and reset the month
                if(month >= 12)
                {
                    year++;
                    month = 0;
                }
            }
            day = ++tempDay; // assign day to its value
        }
};

int main()
{
    MyDate date1; // uses current date (was November 1, 2023 at time of this assignment)
    MyDate date2(3435555513); // uses secons elapsed, as provided in the assignment file

    // print the output!
    std::cout << "Date 1 => Year: " << date1.getYear() << " Month: " << date1.getMonth() << " Day: " << date1.getDay() << std::endl;
    std::cout << "Date 2 => Year: " << date2.getYear() << " Month: " << date2.getMonth() << " Day: " << date2.getDay() << std::endl;

    return 0;
}