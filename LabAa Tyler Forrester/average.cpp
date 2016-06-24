#include "average.hpp"


double Average::avg(const double array[], int size)
{
	Summation sum = Summation();
	double average = 0; 
    average = sum.sum(array, size) / size; 

	return average;
}
