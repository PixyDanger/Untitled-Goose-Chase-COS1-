#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <limits>
#include <cstdlib>

namespace UI
	// User Interface and commonly repeated code base on user input
{

	static void Message(std::string message)
	{
		int maxWidth = 115;
		std::istringstream sentence(message);
		std::string word;
		std::string sen;

		while (sentence >> word)
		{
			if (sen.empty())
			{
				sen = word;
			}
			else if (sen.length() + 1 + word.length() > maxWidth)
			{
				std::cout << sen << std::endl;
				sen = word;
			}
			else
			{
				sen = sen + " " + word;
			}
			
		}
		if (!sen.empty())
		{
			std::cout << sen << std::endl;
		}
	}

		static void Divider()
	{
		std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	}

	static void Spacer()

	{
		std::cout << std::endl;
	}

	static int VerifyNumber(const std::string& userPrompt, int low, int high)
	{
		while (true)
		{
			std::cout << userPrompt << std::endl;
			std::string userInput;
			std::getline(std::cin, userInput);
			try
			{
				int userNumber = std::stoi(userInput);
				if (userNumber >= low && userNumber <= high)
				{
					return userNumber;
				}
				std::cout << "That answer is invalid. Please try entering a numerical value " << low << " through " << high << ".\n";
			}
			catch (...)
			{
				std::cout << "That answer is invalid. Please try entering a numerical value " << low << " through " << high << ".\n";
			}

		}

	}

	static std::string IsStringEmpty(const std::string userPrompt)
	{
		while (true)
		{
			std::cout << userPrompt << std::endl;
			std::string userInput;
			std::getline(std::cin, userInput);
			if (!userInput.empty())
			{
				return userInput;
			}
			std::cout << "You did not respond, try again.\n";
		}
	}

	static char yesORno(const std::string userPrompt)
	{
		while (true)
		{
			std::cout << userPrompt << std::endl;
			std::string userInput;
			std::getline(std::cin, userInput);
			if (!userInput.empty())
			{
				char charAnswer = userInput[0];
				charAnswer = std::tolower(charAnswer);
				return charAnswer;
			}
			std::cout << "You did not respond, try again.\n";
		}
	}

	static bool rollForIt(int limit)
	{

		int check = (rand() % 20) +1;
		if (check >= limit)
		{
			return true;
		}
		else
		{
			return false;
		}
	}






	static void Continue()

	{
		std::cout << std::endl;

		// std::cin.clear();

		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " --press enter to continue-- ";

		std::string enter;

		std::getline(std::cin, enter);

		return;

	}

	static void End()

	{

		// std::cin.clear();

		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "~*~ You have reached then end of your investigation.~*~\n";
		std::cout << "              --Press enter to continue--               ";
		std::string enter;

		std::getline(std::cin, enter);

		return;

	}



//	void Clear() {
//
//#ifdef _WIN32
//
//		system("cls");
//
//#else
//
//		system("clear");
//
//#endif
//
//	}
//
//
//
static void ClearUniversal() { std::cout << "\033[2J\033[1;1H"; }





};