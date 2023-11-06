#include <iostream>

// teh MySet class
class MySet
{
    private: // data fields
        unsigned int range;
        int size;
        bool * set;

    public:
        // the main constructor, initialize data fields
        MySet(unsigned int _range)
        {
            range = _range;
            size = 0;
            set = new bool[range + 1] {false};
        }

        // copy constructor
        MySet(const MySet & oldSet)
        {
            range = oldSet.range;
            size = oldSet.size;

            // deep copy the set array
            bool * temp = new bool[range + 1] {false};
            for(int i = 0; i < range + 1; i++)
            {
                temp[i] = oldSet.set[i];
            }
            delete [] set;
            set = temp;
        }

        // destructor
        ~MySet()
        {
            delete [] set;
        }

        // inserts an element into the set
        void insertElement(int k)
        {
            // check if the input is in range then insert it in the set if it is
            if(k > range)
                std::cout << "Invalid insert attempted for the number " << k << "!" << std::endl;
            else
            {
                set[k] = true;
                size++;
            }
        }

        // deletes an element from the set
        void deleteElement(int m)
        {
            // check if the input is in range then delete it in the set if it is
            if(m > range)
                std::cout << "Invalid delete attempted for the number " << m << "!" << std::endl;
            else
            {
                set[m] = false;
                size--;
            }
        }

        // prints the set
        void printSet() const
        {
            std::cout << "{ ";
            bool hasElements = false; // keeps track of if any elements were printed
            for(int i = 0; i < range + 1; i++)
            {
                if(set[i] && !hasElements) // first instance of a number to print
                {
                    std::cout << i;
                    hasElements = true;
                }
                else if(set[i]) // all other print instances
                    std::cout << ", " << i;
            }
            if(!hasElements) // case where we have an empty set
                std::cout << "---";
            std::cout << " }" << std::endl;
        }

        // checks if two sets are equal to each other
        bool isEqualTo(const MySet & second) const
        {
            if(size != second.size) // don't even bother checking the array elements if they don't have the same size
                return false;
            for(int i = 0; i < range + 1; i++)
            {
                if(set[i] != second.set[i]) // if one is not equal
                    return false;
            }
            return true; // if the program made it this far, the sets are indeed equal
        }
};

int main()
{
    MySet s1(20); // create a set with range of numbers [0, 20]

    // insert the numbers 13, 7, 20, and 21 into the set
    s1.insertElement(13);
    s1.insertElement(7);
    s1.insertElement(20);
    s1.insertElement(21);

    s1.printSet(); // print the set!

    // delete numbers 22 and 13 from the set
    s1.deleteElement(22);
    s1.deleteElement(13);

    s1.printSet(); // print the set!

    MySet s2(100); // create a second set with a range [0, 100]

    s2.printSet(); // print the second set

    MySet s3(s1); // create a third set using set 1 in the copy constructor

    // check of s3 and s1 are equal and display the result
    std::cout << "s3.isEqualTo(s1) = " << s3.isEqualTo(s1) << std::endl;

    return 0;
}