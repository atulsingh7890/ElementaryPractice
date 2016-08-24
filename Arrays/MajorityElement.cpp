//
//  MajorityElement.cpp
//  Practice
//
//  Created by Atul Singh on 8/24/16.
//  Copyright (c) 2016 Atul. All rights reserved.
//
// Moore's Voting Algorithm

#include <iostream>
#include <vector>

using namespace std;

int findMajorityIndex(vector<int> array)
{
	int maj_index = 0,count = 1;
	for( int i = 0; i < array.size(); ++i )
	{
		if ( array[maj_index] == array[i] )
			count++;
		else
			count--;
		
		if ( count == 0 )
			maj_index = i;
	}
	
	//Now maj_index will hold the Current elements verify if it occurs more than n/2 times
	count = 0;
	for( int i = 0;  i < array.size(); ++i )
	{
		if ( array[i] == array[maj_index])
			count++;
	}
	
	if ( count > array.size()/2 )
		return array[maj_index];
	else
		return -1;
}

int main()
{
	vector<int >  array;
	for(int i = 0 ; i < 10; ++i )
	{
		array.push_back(0);
	}
	
	cout << findMajorityIndex(array);
}

