#include <iostream>

// integer average function
int average(const int * array, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return (double)sum / size;
}

// double average function
double average(const double * array, int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum / size;
}

int main()
{
    double * p = new double[10]; // create a double array in the heap of 10 elements

    // get those ten values from the user
    std::cout << "Enter 10 double values to find the average." << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cin >> p[i];
    }

    // find and display the average
    std::cout << "The average of these values is: " << average(p, 10) << std::endl;

    delete [] p; // deallocate the space the array was holding

    return 0;
}