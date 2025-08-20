// Project(homework).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
void setPotion(int count, int* p_HPpotion, int* p_MPpotion, int* p_HPBooster, int* p_MPBosster, int*p_AttackSkill)
{
	*p_HPpotion = count;
    *p_MPpotion = count;
	*p_HPBooster = count;
	*p_MPBosster = count;
	*p_AttackSkill = count;
	}
int main()
{
	int status[4];

	int* ptr = status;
	int* HP_value = &status[0];
	int* MP_value = &status[1];
	int* Attack_value = &status[2];
	int* Defense_value = &status[3];


	std::cout << "Enter your HP : ";
	std::cin >> *HP_value;

	while (status[0] < 50 || status[0] > 150) 
	{
		

		if (status[0] < 50)
		{
			std::cout << "Your HP is too low. Try again\n";
			std::cout << "Re Enter your HP : "; 
			std::cin >> *HP_value;
			

			if (status[0] > 150)
			{
				std::cout << "Your HP is too high. Try again\n";
				std::cout << "Re Enter Your HP : ";
				std::cin >> *HP_value;
			
			}
			
			else {
			
				
			}
		}
		
	}
	std::cout << "Enter Your MP : ";
	std::cin >> *MP_value;

	while (status[1] < 50 || status[1] > 150) 
	{
		if (status[1] < 50)
		{
			std::cout << "Your MP is too low. Try again\n";
			std::cout << "Re Enter Your MP : ";
			std::cin >> *MP_value;

			if (status[1] > 150)
			{
				std::cout << "Your MP is too high. Try again\n";
				std::cout << "Re Enter Your MP : ";
				std::cin >> *MP_value;
			}
			else
			{

			}
		}

	}
	std::cout << "Enter Your Attack : ";
	std::cin >> *Attack_value;
	while (status[2] <= 0 || status[2] > 50) {
		if (status[2] <= 0)
		{
			std::cout << "Your Attack is too low. Try again\n";
			std::cout << "Re Enter Your Attack : ";
			std::cin >> *Attack_value;

			if (status[2] > 50)
			{
				std::cout << "Your Attack is too high. Try again\n";
				std::cout << "Re Enter Your Attack : ";
				std::cin >> *Attack_value;
			}
			else
			{

			}
		}

	}
	std::cout << "Enter Your Defense : ";
	std::cin >> *Defense_value;
	while (status[3] <= 0 || status[3] > 50) {
		if (status[3] <= 0)
		{
			std::cout << "Your Defense is too low. Try again\n";
			std::cout << "Re Enter Your Defense : ";
			std::cin >> *Defense_value;

			if (status[3] > 50)
			{
				std::cout << "Your Defense is too high. Try again\n";
				std::cout << "Re Enter Your Defense : ";
				std::cin >> *Defense_value;
			}
			else
			{

			}
		}

	}
	int choice = 0;
	int HPPotion = 0;
	int MPPotion = 0;
	int HPBooster = 0;
	int MPBooster = 0;
	int Attackskill = status[3];

	setPotion(5, &HPPotion, &MPPotion, &HPBooster, &MPBooster, &Attackskill);

	std::cout << "* You Recieved potion. (5 HP potion, 5 MP potion)\n";
	std::cout << "================================\n";
	std::cout << "Stat Management System\n";

	while (1) {
		std::cout << "Choose your number : ";
		std::cin >> choice;

		if (choice == 7)
		{
			std::cout << "Ending the program.\n";
			break;
		}

		switch (choice) 
		{
		case 1:
			if (HPPotion <= 0) 
			{
				std::cout << "Not enough potion\n";
				continue;
			}
			status[0] += 20;
			HPPotion--;
			std::cout << "* 20HP has been restored, removing 1 potion.\n";
			std::cout << "Current HP : " << status[0] << std::endl;
			std::cout << "Remaining Potion: " << HPPotion << std::endl;
			break;
		case 2:
			if (MPPotion <= 0) 
			{
				std::cout << "Not enough potion\n";
				continue;
			}
			status[1] += 20;
			MPPotion--;
			std::cout << "* 20MP has been restored, removing 1 potion.\n";
			std::cout << "Current MP: " << status[1] << std::endl;
			std::cout << "Remaining Potion: " << MPPotion << std::endl;
			break;
				
		case 3:
			if (HPBooster <= 0)
			{
				std::cout << "Out of Booster\n";
				continue;
			}
			status[0] = status[0]*2;
			HPBooster--;
			std::cout << "* your HP has been boosted, removing 1 booster.\n";
			std::cout << "Current HP: " << status[0] << std::endl;
			std::cout << "Remaining Booster: " << HPBooster << std::endl;
			break;
		case 4:
			if (MPBooster <= 0)
			{
				std::cout << "Out of Booster\n";
				continue;
			}
			status[1] = status[1]*2;
			MPBooster--;
			std::cout << "* your MP has been boosted, removing 1 booster.\n";
			std::cout << "Current MP: " << status[1] << std::endl;
			std::cout << "Remaining Booster: " << MPBooster << std::endl;
			break;
		case 5:
			if (status[1] < 50)
			{
				std::cout << "Not Enough Mana\n";
				continue;
			}
			status[1] = status[1]-50;
			std::cout << "Sword Attack!\n";
			std::cout << "Current MP: " << status[1] << std::endl;
			break;

		
		default:
			std::cout << "Plrease Press again\n";
			break;
		}

		
	}
	
	return 0;

}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
