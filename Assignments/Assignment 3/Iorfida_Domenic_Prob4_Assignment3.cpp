#include <string>
#include <iostream>

using std::string;

class Attendance 
{
    public:
        bool checkAttendance() 
        {
            
        }
        Attendance(const string& atd) 
        {

        }
    private:
        string attendance;

        bool isAbsent() 
        {

        }
        bool isLate() 
        {

        }
};

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