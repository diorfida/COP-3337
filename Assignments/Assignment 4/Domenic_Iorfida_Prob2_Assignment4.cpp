#include <iostream>
#include <string>

// define the Person class
class Person
{
    private: // date fields
        int age;
        char * name;
    
    public:
        // our main constructor
        Person(int _age, std::string _name)
        {
            setAge(_age);
            setName(_name);
        }

        // copy constructor
        Person(const Person & oldPerson)
        {
            setAge(oldPerson.age);

            int count = 0;
            while(oldPerson.name[count] != '\0')
            {
                count++;
            }
            count++;

            name = new char[count];

            for(int i = 0; i < count; i++)
            {
                name[i] = oldPerson.name[i];
            }
        }

        // destructor
        ~Person()
        {
            delete [] name;
        }

        // display the data fields
        void display()
        {
            std::cout << "Name: ";
            for(int i = 0; name[i] != '\0'; i++)
            {
                std::cout << name[i];
            }
            std::cout << ". Age: " << age << std::endl;
        }

        // set mathod for age
        void setAge(int _age)
        {
            if(_age >= 0)
                age = _age;
        }

        // set method for name
        void setName(std::string _name)
        {
            char * temp = new char[_name.length() + 1];
            temp[_name.length()] = '\0';

            for(int i = 0; i < _name.length(); i++)
            {
                temp[i] = _name[i];
            }
            delete [] name;
            name = temp;
        }
};

int main()
{
    Person p1(19, "Domenic"); // create first person object
    // display the newly created person
    std::cout << "Displaying Person 1: ";
    p1.display();

    Person p2(22, "Danielson"); // create another person object
    p2 = p1; // shallow copy the first person to the new second person
    // display the new person
    std::cout << "Displaying Person 2: ";
    p2.display();

    Person p3(p1); // create another person using the copy constructor
    // display the new person
    std::cout << "Displaying Person 3: ";
    p3.display();

    // change the name of person 1
    std::cout << "Changing Person 1 name to Brian." << std::endl;
    p1.setName("Brian");

    // display all of the person obejcts to observe the difference between the shallow and deep copies.
    std::cout << "Displaying All Person Objects" << std::endl;
    p1.display();
    p2.display();
    p3.display();

    return 0;
}