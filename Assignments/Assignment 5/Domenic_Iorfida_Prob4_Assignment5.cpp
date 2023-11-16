#include <iostream>
#include <cmath>

class Triangle
{
    private:
        double side1, side2, side3; // triangle side lengths

    public:
        // default constructor, initialize with all length 1
        Triangle()
        {
            side1 = 1.0;
            side2 = 1.0;
            side3 = 1.0;
        }

        // user specified side lengths
        Triangle(double _side1, double _side2, double _side3)
        {
            side1 = _side1;
            side2 = _side2;
            side3 = _side3;
        }

        // returns the perimeter by adding all the side lengths
        double getPerimeter() const
        {
            return side1 + side2 + side3;
        }

        // returns the area using Heron's formula
        double getArea() const
        {
            double semiPerimeter = getPerimeter() / 2;
            return sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
        }

        // print all of the triangle statistics
        void display() const
        {
            std::cout << "Area: " << getArea() << std::endl;
            std::cout << "Perimeter: " << getPerimeter() << std::endl;
            std::cout << "Side 1 Length: " << side1 << std::endl;
            std::cout << "Side 2 Length: " << side2 << std::endl;
            std::cout << "Side 3 Length: " << side3 << std::endl;
        }

        // overload the specified operators for triangles by comparing their areas

        bool operator < (Triangle t2)
        {
            if(getArea() < t2.getArea())
                return true;
            else
                return false;
        }

        bool operator >= (Triangle t2)
        {
            if(getArea() >= t2.getArea())
                return true;
            else
                return false;
        }

        bool operator != (Triangle t2)
        {
            if(getArea() != t2.getArea())
                return true;
            else
                return false;
        }
};

int main()
{
    // create the specified triangles
    Triangle t1(4, 4, 4);
    Triangle t2(5, 5, 2);
    Triangle t3(5.5, 5.5, 1);

    // use the display function for all triangles
    std::cout << "Triangle t1" << std::endl;
    t1.display();
    std::cout << "Triangle t2" << std::endl;
    t2.display();
    std::cout << "Triangle t3" << std::endl;
    t3.display();

    // display the results of all operator comparisons
    // note: my compiler didn't like putting the operation directly in the print statement

    bool less12 = t1 < t2;
    std::cout << "t1 < t2: " << less12 << std::endl;
    bool less13 = t1 < t3;
    std::cout << "t1 < t3: " << less13 << std::endl;
    bool less23 = t2 < t3;
    std::cout << "t2 < t3: " << less23 << std::endl;

    bool greaterEqual12 = t1 >= t2;
    std::cout << "t1 >= t2: " << greaterEqual12 << std::endl;
    bool greaterEqual13 = t1 >= t3;
    std::cout << "t1 >= t3: " << greaterEqual13 << std::endl;
    bool greaterEqual23 = t2 >= t3;
    std::cout << "t2 >= t3: " << greaterEqual23 << std::endl;

    bool notEqual12 = t1 != t2;
    std::cout << "t1 != t2: " << notEqual12 << std::endl;
    bool notEqual13 = t1 != t3;
    std::cout << "t1 != t3: " << notEqual13 << std::endl;
    bool notEqual23 = t2 != t3;
    std::cout << "t2 != t3: " << notEqual23 << std::endl;

    return 0;
}