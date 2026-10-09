#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

namespace UI
	// User Interface and commonly repeated code base on user input
{

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



};