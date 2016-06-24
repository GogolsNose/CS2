/*********************************************************************
** Author: Tyler Forrester
** Date: 6/19/2016
** Description: Sums each element of an array. 
*********************************************************************/


#include "summation.hpp"

double Summation::sum(const double nums[], int size)
{
	double sum = 0; 
	for (int i = 0; i < size; i++){
		sum += nums[i];
	}

	return sum;
}
