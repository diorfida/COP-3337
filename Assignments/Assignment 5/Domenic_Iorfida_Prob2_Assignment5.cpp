#include <iostream>
#include <string>

// function header for template function
template<typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2)
{
    // iterate through every element in each array and compare
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(list2[j] <= list1[i])
                return false;
        }
    }
    return true;
}

int main()
{
    // create two test integer arrays
    int iArr1[] = {1, 2, 3, 8, 4};
    int iArr2[] = {10, 9, 17, 63};
    // invoke the generic function and print the result
    std::cout << isGreater(iArr1, iArr2, 5, 4) << std::endl;

    // create two test double arrays
    double dArr1[] = {20.6, 8.3};
    double dArr2[] = {33.9, 21.7, 6.2};
    // invoke the generic function and print the result
    std::cout << isGreater(dArr1, dArr2, 2, 3) << std::endl;

    // create two test string arrays
    std::string sArr1[] = {"abcd", "ABCD"};
    std::string sArr2[] = {"dcba", "xyz", "eye"};
    // invoke the generic function and print the result
    std::cout << isGreater(sArr1, sArr2, 2, 3) << std::endl;

    return 0;
}