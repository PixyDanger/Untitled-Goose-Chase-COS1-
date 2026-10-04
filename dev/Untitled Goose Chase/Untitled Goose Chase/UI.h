#pragma once
#include <iostream>

class UI

{

public:

	static void Message(std::string message)
	{
		std::cout << message << std::endl;
	}

		static void Divider()
	{
		std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	}

	static void Spacer()

	{
		std::cout << std::endl;
	}

	static bool Verify(int answer, int high, int low)

	{
		bool check = false;
		if (low >= answer && answer <= high)
		{
			check = true;
		}

		return check;
	}


};