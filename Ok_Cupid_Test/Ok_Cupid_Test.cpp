// Ok_Cupid_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{
	string lineInput = "";
	vector<string> strVector;
	vector<string> strVector2;
	vector<string> ansVector;

	while (!lineInput.size())
		getline(cin, lineInput);

	size_t strLength = lineInput.size() - 1;

	int startIndex = 0;
	int vector1Size = 0;
	int vector2Size = 0;
	int currentIndex = 0;

	int bracketCount = 0;

	for (int strIter = 0; strIter < strLength + 1; strIter++)
	{
		//cout << "Checking Character: " << lineInput[strIter] << "   ";
		if (lineInput[strIter] == '{')
			bracketCount += 1;
		if (lineInput[strIter] == '}')
			bracketCount -= 1;

		if (lineInput[strIter] == '{' && strIter != 0)
		{
			currentIndex = strIter;
			startIndex = vector1Size - 1;
			break;
		}
		if (lineInput[strIter] == '}' && strIter != 0)
		{	
			currentIndex = strIter;
			break;
		}
		//check first character
		if (isalpha(lineInput[strIter]))
		{
			string s(1, lineInput[strIter]);
			strVector.push_back(s);
			vector1Size += 1;
			continue;
		}

		if (lineInput[strIter] == '{'  || lineInput[strIter] == ',')
		{
			if (isalpha(lineInput[strIter+1]))
				continue;
			else
			{
				cout << "Invalid Character" << endl;
				return 0;
			}
		}
	
	}

	for (int strIter = currentIndex + 1; strIter < strLength + 1; strIter++)
	{
		if (lineInput[strIter] == '{')
			bracketCount += 1;
		if (lineInput[strIter] == '}')
			bracketCount -= 1;

		//check first character
		if (isalpha(lineInput[strIter]))
		{
			string s(1, lineInput[strIter]);
			strVector2.push_back(s);
			vector2Size += 1;
			continue;
		}

		if (lineInput[strIter] == '{' || lineInput[strIter] == ',')
		{
			if (isalpha(lineInput[strIter + 1]))
				continue;
			else
			{
				cout << "Invalid Character" << endl;
				return 0;
			}
		}

	}
	
	if (strVector2.size())
	{
		for (int strIter = 0; strIter < vector1Size; strIter++)
		{
			for (int strIter2 = 0; strIter2 < vector2Size; strIter2++)
			{
				ansVector.push_back(strVector[strIter]);
				string s = (string)strVector2[strIter2];
				if (strIter >= startIndex)
					ansVector.back() += s;
				else
					break;
			}
		}
	}
	else
	{
		for (int strIter = 0; strIter < vector1Size; strIter++)
			ansVector.push_back(strVector[strIter]);
	}
	

	//Check start and end character for curly brackets
	if (lineInput[0] != '{' || lineInput[strLength] != '}' || bracketCount != 0)
	{
		cout << "Invalid Format" << endl;
	}
	else
	{
		cout << "The output is: ";
		for (int iter = 0; iter < ansVector.size(); iter++)
			cout << ansVector[iter] << "   ";
		
	}
	return 0;
}