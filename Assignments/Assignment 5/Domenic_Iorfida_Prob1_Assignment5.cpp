#include <iostream>
#include <string>

// function prototype
template<typename T>
T getMin(const T array [ ], int size);

int main()
{
    // create test arrays of different data types
    int i_array[4] = {1, 3, -3, 80};
    double d_array[4] = {1.57, 3.14159, -360, 0};
    std::string s_array[4] = {"abcd", "ab", "Adad", "Cat"};

    // invoke the generic function and print the result
    std::cout << getMin(i_array, 4) << std::endl;
    std::cout << getMin(d_array, 4) << std::endl;
    std::cout << getMin(s_array, 4) << std::endl;

    return 0;
}

template<typename T>
T getMin(const T array [], int size)
{
    T min = array[0];
    for(int i = 1; i < size; i++)
    {
        if(array[i] < min)
            min = array[i];
    }
    return min;
}