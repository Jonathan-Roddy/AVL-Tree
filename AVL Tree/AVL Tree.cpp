// AVL Tree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
#include "AVLTree.h"

using namespace std;

int displayMenu(void);
void displayBanner();
bool leaveMenu = false;

AVLtree<string> avl;
int choice;


int main()

{
	system("Color 80");
	string name;

				avl.InsertItem("Mark");
				avl.InsertItem("Ann");
				avl.InsertItem("Tom");
				avl.InsertItem("Sarah");
				avl.InsertItem("Simon");


	do
	{
		choice = displayMenu();
		switch (choice)
		{
			case 1:
				system("cls");
				displayBanner();

				
				avl.PrintTree();
			break;
			
			case 2:
				do
				{
					cout << "\nPlease enter the name you would like to add: (Enter 0 to cancel)\n";
					cin >> name;
					if (name != "0")
					{
						cout << "Now adding " << name << endl;
						avl.InsertItem(name);
						avl.PrintTree();
					}
				} while (name != "0");
			break;
			
			case 3:
				do
				{
					cout << "\nPlease enter the name you would like to Search: (Enter 0 to cancel)\n";
					cin >> name;
					if (name != "0")
					{
						cout << "Searching to see if " << name << " is in tree "<< endl;
						avl.SearchItem(name);
						avl.PrintTree();
						
					}
				} while (name != "0");
				break;

			case 4:
				
					cout << "\nPlease enter the name you would like to Delete:\n";
					cin >> name;
					avl.SearchItem(name);
					
					if (Located == true)
					{
						cout << "Now deleting " << name  << endl;
						avl.DeleteItem(name);
					}
					else if (Located == false)
					{
						cout  << name << " is Not Found... " << endl;
					}
								
					avl.PrintTree();

				break;

			case 5:
			cout << "End of Program.\n";
			cin.get();
			leaveMenu = true;
			break;
			
			default:
			cout << "Not a Valid Choice. \n Please enter again! ";
			cin >> choice;
			break;
		}
		system("pause");
	} while (!leaveMenu);
		
	return 0;
}

int displayMenu(void)
{
	int option;
	system("cls");
	displayBanner();
	cout << " 1 -> Display the AVL Tree.\n";
	cout << " 2 -> Insert into AVL Tree.\n";
	cout << " 3 -> Search the AVL Tree.\n";
	cout << " 4 -> Delete from the AVL Tree.\n";
	cout << " 5 -> Exit.\n\n";
	cout << "******************************************\n";
	cout << " \n  Enter your choice and press return: \n\n";
	cout << "******************************************\n";	
	cin >> option;
	return option;
}

void displayBanner()
{
	cout << "******************************************\n";
	cout << "                 AVL Tree \n";
	cout << "******************************************\n\n";
}

