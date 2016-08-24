//
//  main.cpp
//  Practice
//
//  Created by Atul Singh on 8/24/16.
//  Copyright (c) 2016 Atul. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

bool isSumPossible(vector<int> inArray,int nSum,int &index1,int &index2);

int main(int argc, const char * argv[])
{

	vector<int> array(4,100);
	array.push_back(1);
	array.push_back(4);
	
	int index1,index2;
	isSumPossible(array, 5, index1, index2);
	
    return 0;
}

bool isSumPossible(vector<int> inArray,int nSum,int &index1,int &index2)
{
	int nStart = 0;
	int nEnd = inArray.size();
	
	if ( nStart == nEnd )
		return true;
	
	while (nStart <= nEnd)
	{
		if ( inArray[nStart] + inArray[nEnd] == nSum )
		{
			index1 = nStart;
			index2 = nEnd;
			return true;
		}
		else if ( inArray[nStart] + inArray[nEnd] > nSum )
		{
			nStart++;
		}
		else
		{
			nEnd--;
		}
	}
	
	return false;
	
}
