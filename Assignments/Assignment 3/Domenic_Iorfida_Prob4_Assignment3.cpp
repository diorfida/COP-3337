#include <string>
#include <iostream>

using std::string;

// attendance class
class Attendance 
{
    public:
        // returns true if student was absent for strictly fewer than 2 days total and was never late for 3 or more consecutive days.
        bool checkAttendance() 
        {
            if(!isAbsent() && !isLate())
                return true;
            else
                return false;
        }

        // constructor
        Attendance(const string& atd) 
        {
            attendance = atd;
        }
    private:
        /*
        attendance record for a student 
        'A': Absent
        'L': Late
        'P': Present
        */
        string attendance;

        bool isAbsent() // returns true if student missed 2 or more days and false otherwise
        {
            int absent = 0;
            for(int i = 0; i < attendance.length(); i++)
            {
                if(attendance[i] == 'A')
                    absent++;
                if(absent >= 2)
                    return true;
            }
            return false;
        }
        bool isLate() //returns true if student was late for 3 or more consecutive days and false otherwise
        {
            int consecLate = 0;
            for(int i = 0; i < attendance.length(); i++)
            {
                if(attendance[i] == 'L')
                    consecLate++;
                else
                    consecLate = 0;
                if(consecLate >= 3)
                    return true;
            }
            return false;
        }
};

// main function that was provided in the assignment to test the attendance class and compare output.
int main() 
{
    Attendance atd1("PPALLP");
    Attendance atd2("PPALLL");
    
    (atd1.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";
    std::cout << std::endl;
    (atd2.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";
    std::cout << std::endl;

    return 0;
}