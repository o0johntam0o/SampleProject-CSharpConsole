#include "Func.h"

using namespace std;

string Func::NormalizeString(string str)
{
	str = Trim(str);

	if (str.size() > 0)
	{
		// Capitalize first character
		str[0] = toupper(str[0]);

		// Capitalize each word
		for (int i = 1; i < str.size(); i++)
		{
			if (!isspace(str[i]))
			{
				if (isspace(str[i-1]))
				{
					str[i] = toupper(str[i]);
				}
			}
		}
	}

	return str;
}

string Func::Trim(string str)
{
	// Remove spaces at the begining and ending
	auto strBegin = str.find_first_not_of(" ");
	if (strBegin == string::npos) return "";

	int strEnd = str.find_last_not_of(" ");
	int strRange = strEnd - strBegin + 1;

	str = str.substr(strBegin, strRange);

	// Remove spaces between words
	int i = 1;

	do
	{
		if (isspace(str[i]))
		{
			if (isspace(str[i-1]))
			{
				str.erase(i, 1);
				i--;
			}
		}

		i++;
	} while (i < str.size());

	return str;
}

Func::Func(void)
{
}


Func::~Func(void)
{
}
