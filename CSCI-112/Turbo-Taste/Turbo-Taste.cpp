#include <iostream> // to print and input
#include <string> // use string
#include <vector> // Provide flexibility in an array and some commands like push_back and size

using namespace std;

const double VAT = 0.05; // Value of VAT
const double DelivryFee = 0.5; // Value of Delaviry Fee per kilometer

// Create a function for count a total of meal
int TotalMeals(int Meal, int Quantity)
{
	return Meal * Quantity;
}

// Here, we will declare some global variables to reduce repetition
// DistanceFee for count fee of distance
// TotalNoVAT to count total without VAT (Just total with distance fee)
// CountVAT to calculate the VAT only
// Totally to calculate the total with VAT
// TotalNoVATs to use it like a sum
double DistanceFee = 0, TotalNoVAT = 0, CountVAT = 0, Totally = 0, TotalNoVATs = 0;
int Order, Distance;
char CheckOut; // ask user if he want to check out or not

// Here will be an array using vector
// Cart will be for store text (name of meal)
// Quantity for storing a quantity of meal
// Cost to store Cost of meal
// TotalCostMeals to store the Total of the meal (Cost of meal * Quantity), there is a function named TotalMeals
vector<string> Cart;
vector<int> Quantity, Cost, TotalCostMeals;

// here will create some function to print main menu and restaurant list
void MainMenu(); // Function for mane menu
void Subway(); // Function for Subway restaurant
void PapaJohnsPizza(); // Function for Papa Jhons Pizza restaurant
void m14cafe(); // function for M 14 Cafr
void dunkin(); // function for Dunkin Cafe
void Starbucks(); // function for Starbucks Cafe
void Bill(); // Function to create a bill

int main()
{
	MainMenu(); // Call only for mane menu and it will handle it
	return 0;
}

void MainMenu()
{
	int Restaurant; // input to provide user choose a resturant
	cout << "\t----- Turbo Taste -----\n";
	cout << "Welcom to Turbo Taste an order food\n";
	cout << "You must enter the number befor the name of restaurant\n";
	cout << "\nHere's the restaurant list\n";
	cout << "\n1- Subway\n";
	cout << "\n2- Papa Johns Pizza\n";
	cout << "\n3- M14 cafe\n";
	cout << "\n4- Dunkin\n";
	cout << "\n5- Starbucks\n";
	cin >> Restaurant;
	switch (Restaurant) // Switch between a restaurant
	{
	case 1:
		Subway(); // Reach Subway site
		break;
	case 2:
		PapaJohnsPizza(); // Reach Papa Jhons Pizza site
		break;
	case 3:
		m14cafe(); // Reach M 14 cafe site
		break;
	case 4:
		dunkin(); // Reach dunkin site
		break;
	case 5:
		Starbucks(); // Reach Starbucks site
		break;
	default: // if the user enter not valid value
		cout << "Error 405: enter not valid number\n";
		cout << "System down\n";
		break;
	}
}

void Subway()
{
	// name of meal and the cost using int (integer)
	int Roasted = 23, Turkey = 36, Hash = 10, Potato = 10, Orange = 13; 
	// Declare a some varibales for Quantity of meals using int (integer)
	int QuantityRoasted = 0, QuantityTurkey = 0, QuantityHash = 0, QuantityPotato = 0, QuantityOrange = 0; // declare a quantity of meals
	do // To keep asking the user until he decided to check out
	{
		cout << "\n\t----- Welcome to Subway -----\n";
		cout << "Here's the Meals list\n";
		cout << "1- Oven Roasted Chicken Sandwich AED 23\n";
		cout << "2- Turkey Breast 6 Inch Meal AED 36\n";
		cout << "3- Hash Browns AED 10\n";
		cout << "4- Potato Crispers AED 10\n";
		cout << "5- Orange Juice AED 13\n";
		cin >> Order; // user chooice a meal
		// Use if statment for each meal
		if (Order == 1)
		{
			cout << "Add Over Roasted Chicken Sandwich successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityRoasted; // Ask the user to enter the quantity of the meal
			Cart.push_back("Oven Roasted Chicken Sandwich"); // store name of the meal
			Quantity.push_back(QuantityRoasted); // store quantity of the meal
			Cost.push_back(Roasted); // store cost of the meal
			TotalCostMeals.push_back(TotalMeals(Roasted, QuantityRoasted)); // Store the total cost of the meal
			cout << "For continue enter Y or N for check out\n";
			// To keep asking the user, enter Y to continue or N to check out, and if it is not a valid value,
			//  keep asking until the user enters a valid value.
			while (true) 
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart; // Transfer to check out	section
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break; // Print the meals list again
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue; // To keep asking the user until he enters a valid value
				}
			}
		}
		else if (Order == 2)
		{
			cout << "Add Turkey Breast 6 Inch Meal successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityTurkey;
			Cart.push_back("Turkey Breast 6 Inch Meal");
			Quantity.push_back(QuantityTurkey);
			Cost.push_back(Turkey);
			TotalCostMeals.push_back(TotalMeals(Turkey, QuantityTurkey));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 3)
		{
			cout << "Add Hash Browns successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityHash;
			Cart.push_back("Hash Browns\t\t");
			Quantity.push_back(QuantityHash);
			Cost.push_back(Hash);
			TotalCostMeals.push_back(TotalMeals(Hash, QuantityHash));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 4)
		{
			cout << "Add Potato Crispers successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityPotato;
			Cart.push_back("Potato Crispers\t\t");
			Quantity.push_back(QuantityPotato);
			Cost.push_back(Potato);
			TotalCostMeals.push_back(TotalMeals(Potato, QuantityPotato));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 5)
		{
			cout << "Add Orange Juice successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityOrange;
			Cart.push_back("Orange Juice\t\t");
			Quantity.push_back(QuantityOrange);
			Cost.push_back(Orange);
			TotalCostMeals.push_back(TotalMeals(Orange, QuantityOrange));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else
		{
			cout << "Error 400: Enter invalid number" << endl;
			continue;
		}
	} while (true);
	CheckOutCart: // from here reach to check out section
	cout << "Enter how many Kilomater your home far away from Subway restaurant" << endl;
	cin >> Distance;
	DistanceFee = Distance * DelivryFee;
	cout << "\nYour Bill (from Subway)\n";
	Bill();
}

void PapaJohnsPizza()
{
	int ButterChicken = 30, CheddarMakhani = 36, CheddarCheeseSticks = 24, PotatoWedges = 12, KKDFruitJuice = 9;
	int QuantityButter = 0, QuantityCheddarMakhani = 0, QuantityCheddarCheeseSticks = 0, QuantityPotatoWedges = 0, QuantityKKDFruitJuice = 0;
	do
	{
		cout << "\n\t----- Welcome to Papa Johns Pizza -----\n";
		cout << "Here's the Meals list\n";
		cout << "1- Butter Chicken AED 30\n";
		cout << "2- Cheddar Makhani AED 36\n";
		cout << "3- Cheddar Cheese Sticks AED 24\n";
		cout << "4- Potato Wedges AED 12\n";
		cout << "5- KKD Fruit Juice AED 9\n";
		cin >> Order;
		if (Order == 1)
		{
			cout << "Add Butter Chicken successfully to your cart\n";
			cout << "How Many quantity:\n";
			cin >> QuantityButter;
			Cart.push_back("Butter Chicken\t\t");
			Quantity.push_back(QuantityButter);
			Cost.push_back(ButterChicken);
			TotalCostMeals.push_back(TotalMeals(ButterChicken, QuantityButter));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 2)
		{
			cout << "Add Cheddar Makhani successfully to your cart\n";
			cout << "How Many quantity:\n";
			cin >> QuantityCheddarMakhani;
			Cart.push_back("Cheddar Cheese Sticks\t");
			Quantity.push_back(QuantityCheddarMakhani);
			Cost.push_back(CheddarMakhani);
			TotalCostMeals.push_back(TotalMeals(CheddarMakhani, QuantityCheddarMakhani));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 3)
		{
			cout << "Add Cheddar Cheese Sticks successfully to your cart\n";
			cout << "How Many quantity:\n";
			cin >> QuantityCheddarCheeseSticks;
			Cart.push_back("Cheddar Makhani\t\t");
			Quantity.push_back(QuantityCheddarCheeseSticks);
			Cost.push_back(CheddarCheeseSticks);
			TotalCostMeals.push_back(TotalMeals(CheddarCheeseSticks, QuantityCheddarCheeseSticks));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 4)
		{
			cout << "Add Potato Wedges successfully to your cart\n";
			cout << "How Many quantity:\n";
			cin >> QuantityPotatoWedges;
			Cart.push_back("Potato Wedges\t\t");
			Quantity.push_back(QuantityPotatoWedges);
			Cost.push_back(PotatoWedges);
			TotalCostMeals.push_back(TotalMeals(PotatoWedges, QuantityPotatoWedges));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 5)
		{
			cout << "Add KKD Fruit Juice successfully to your cart\n";
			cout << "How Many quantity:\n";
			cin >> QuantityKKDFruitJuice;
			Cart.push_back("KKD Fruit Juice\t\t");
			Quantity.push_back(QuantityKKDFruitJuice);
			Cost.push_back(KKDFruitJuice);
			TotalCostMeals.push_back(TotalMeals(KKDFruitJuice, QuantityKKDFruitJuice));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
	} while (true);
	CheckOutCart:
	cout << "Enter how many Kilomater your home far away from Subway restaurant" << endl;
	cin >> Distance;
	DistanceFee = Distance * DelivryFee;
	cout << "\nYour Bill (from Papa Johns Pizza)\n";
	Bill();
}

void m14cafe()
{
	int Beef_Slider = 37, Chicken_Salad = 40, Cheese_Chicken_Mushroom_Pizza = 45, Avocado_Salad = 35, Matcha_Latte_Cold = 30;
	int QuantityBeef_Slider = 0, QuantityChicken_Salad = 0, QuantityCheese_Chicken_Mushroom_Pizza = 0, QuantityAvocado_Salad = 0, QuantityMatcha_Latte_Cold = 0;
	do
	{
		cout << "\n\t----- Welcome to m14cafe -----\n";
		cout << "Here's the Menue list\n";
		cout << "1- Gourmet Beef Slider AED 37 \n";
		cout << "2- Chicken Quinoa Salad AED 40 \n";
		cout << "3- Cheese Chicken Mushroom Pizza  AED 45 \n";
		cout << "4- Avocado Quinoa Salad AED 35 \n";
		cout << "5- Strawberry Matcha Latte Cold AED 30 \n";
		cin >> Order;
		if (Order == 1)
		{
			cout << "Add Gourmet Beef Slider  successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityBeef_Slider;
			Cart.push_back("Gourmet Beef Slider\t");
			Quantity.push_back(QuantityBeef_Slider);
			Cost.push_back(Beef_Slider);
			TotalCostMeals.push_back(TotalMeals(Beef_Slider, QuantityBeef_Slider));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 2)
		{
			cout << "Add Chicken Quinoa Salad successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityChicken_Salad;
			Cart.push_back("Chicken Quinoa Salad");
			Quantity.push_back(QuantityChicken_Salad);
			Cost.push_back(Chicken_Salad);
			TotalCostMeals.push_back(TotalMeals(Chicken_Salad, QuantityChicken_Salad));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 3)
		{
			cout << "Add Cheese Chicken Mushroom Pizza successfully\n";

			cout << "How Many quantity:\n";
			cin >> QuantityCheese_Chicken_Mushroom_Pizza;
			Cart.push_back("Cheese Chicken Mushroom Pizza  \t\t\t");
			Quantity.push_back(QuantityCheese_Chicken_Mushroom_Pizza);
			Cost.push_back(Cheese_Chicken_Mushroom_Pizza);
			TotalCostMeals.push_back(TotalMeals(Cheese_Chicken_Mushroom_Pizza, QuantityCheese_Chicken_Mushroom_Pizza));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 4)
		{
			cout << "Add Avocado Quinoa Salad successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityAvocado_Salad;
			Cart.push_back("Avocado Quinoa Salad\t\t");
			Quantity.push_back(QuantityAvocado_Salad);
			Cost.push_back(Avocado_Salad);
			TotalCostMeals.push_back(TotalMeals(Avocado_Salad, QuantityAvocado_Salad));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 5)

		{
			cout << "Add Strawberry Matcha Latte Cold successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityMatcha_Latte_Cold;
			Cart.push_back("Strawberry Matcha Latte Cold\t\t");
			Quantity.push_back(QuantityMatcha_Latte_Cold);
			Cost.push_back(Matcha_Latte_Cold);
			TotalCostMeals.push_back(TotalMeals(Matcha_Latte_Cold, QuantityMatcha_Latte_Cold));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else
		{
			cout << "Error 400: Enter invalid number" << endl;
			continue;
		}
	} while (true);
CheckOutCart:
	cout << "Enter how many Kilomater your home far away from m14cafe restaurant" << endl;
	cin >> Distance;
	DistanceFee = Distance * DelivryFee;
	cout << "\nYour Bill (from m14cafe)\n";
	Bill();
}

void dunkin()
{
	int Donuts = 35, box_Donuts = 19, Latte = 17, Chocolate = 5, Tea = 12;
	int QuantityDonuts = 0, Quantitybox_Donuts = 0, QuantityLatte = 0, QuantityChocolate = 0, QuantityTea = 0;
	do
	{
		cout << "\n\t----- Welcome to dunkin -----\n";
		cout << "Here's the Meals list\n";
		cout << "1- Half Dozen Donuts  	AED 35 \n";
		cout << "2- Box Of 3 Donuts 	AED 19 \n";
		cout << "3- Iced Latte 	 	 	AED 17 \n";
		cout << "4- Chocolate Éclair 	AED 5 \n";
		cout << "5- Matcha Green Tea  	AED 12 \n";
		cin >> Order;
		if (Order == 1)
		{
			cout << "Add Half Dozen Donuts successfully\n";
			cout << "How Many quantity:\n";

			cin >> QuantityDonuts;
			Cart.push_back("Half Dozen Donuts  ");
			Quantity.push_back(QuantityDonuts);
			Cost.push_back(Donuts);
			TotalCostMeals.push_back(TotalMeals(Donuts, QuantityDonuts));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 2)
		{
			cout << "Add Box Of 3 Donuts successfully\n";
			cout << "How Many quantity:\n";
			cin >> Quantitybox_Donuts;
			Cart.push_back("Box Of 3 Donuts");
			Quantity.push_back(Quantitybox_Donuts);
			Cost.push_back(box_Donuts);
			TotalCostMeals.push_back(TotalMeals(box_Donuts, Quantitybox_Donuts));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 3)
		{
			cout << "Add Iced Latte successfully\n";

			cout << "How Many quantity:\n";
			cin >> QuantityLatte;
			Cart.push_back("Iced Latte\t\t\t");
			Quantity.push_back(QuantityLatte);
			Cost.push_back(Latte);
			TotalCostMeals.push_back(TotalMeals(Latte, QuantityLatte));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 4)
		{
			cout << "Add Chocolate Éclair  successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityChocolate;
			Cart.push_back("Chocolate Éclair \t\t");
			Quantity.push_back(QuantityChocolate);
			Cost.push_back(Chocolate);
			TotalCostMeals.push_back(TotalMeals(Chocolate, QuantityChocolate));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 5)

		{
			cout << "Add Matcha Green Tea successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityTea;
			Cart.push_back("Matcha Green Tea\t\t");
			Quantity.push_back(QuantityTea);
			Cost.push_back(Tea);
			TotalCostMeals.push_back(TotalMeals(Tea, QuantityTea));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else
		{
			cout << "Error 400: Enter invalid number" << endl;
			continue;
		}
	} while (true);
CheckOutCart:
	cout << "Enter how many Kilomater your home far away from dunkin restaurant" << endl;
	cin >> Distance;
	DistanceFee = Distance * DelivryFee;
	cout << "\nYour Bill (from dunkin)\n";
	Bill();
}

void Starbucks()
{
	int Matcha = 23, Cappuccino = 20, Spanish = 26, Cheesecake = 23, Chocolate = 25;
	int QuantityMatcha = 0, QuantityCappuccino = 0, QuantitySpanish = 0, QuantityCheesecake = 0, QuantityChocolate = 0;
	do
	{
		cout << "\n\t----- Welcome to Starbucks -----\n";
		cout << "Here's the Meals list\n";
		cout << "1- Iced Matcha Latte AED 23\n";
		cout << "2- Cappuccino AED 20\n";
		cout << "3- Spanish Latte AED 26\n";
		cout << "4- Burnt Basque Cheesecake AED 23\n";
		cout << "5- Original Chocolate Cake  AED 25\n";
		cin >> Order;
		if (Order == 1)
		{
			cout << "Add Iced Matcha Latte successfully\n";
			cout << "How Many quantity:\n";

			cin >> QuantityMatcha;
			Cart.push_back("Iced Matcha Latte");
			Quantity.push_back(QuantityMatcha);
			Cost.push_back(Matcha);
			TotalCostMeals.push_back(TotalMeals(Matcha, QuantityMatcha));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 2)
		{
			cout << "Add Cappuccino successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityCappuccino;
			Cart.push_back("Cappuccino");
			Quantity.push_back(QuantityCappuccino);
			Cost.push_back(Cappuccino);
			TotalCostMeals.push_back(TotalMeals(Cappuccino, QuantityCappuccino));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 3)
		{
			cout << "Add Spanish Latte successfully\n";

			cout << "How Many quantity:\n";
			cin >> QuantitySpanish;
			Cart.push_back("Spanish Latte\t\t\t");
			Quantity.push_back(QuantitySpanish);
			Cost.push_back(Spanish);
			TotalCostMeals.push_back(TotalMeals(Spanish, QuantitySpanish));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 4)
		{
			cout << "Add Burnt Basque Cheesecake successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityCheesecake;
			Cart.push_back("Burnt Basque Cheesecake\t\t");
			Quantity.push_back(QuantityCheesecake);
			Cost.push_back(Cheesecake);
			TotalCostMeals.push_back(TotalMeals(Cheesecake, QuantityCheesecake));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else if (Order == 5)

		{
			cout << "Add Original Chocolate Cake successfully\n";
			cout << "How Many quantity:\n";
			cin >> QuantityChocolate;
			Cart.push_back("Original Chocolate Cake\t\t");
			Quantity.push_back(QuantityChocolate);
			Cost.push_back(Chocolate);
			TotalCostMeals.push_back(TotalMeals(Chocolate, QuantityChocolate));
			cout << "For continue enter Y or N for check out\n";
			while (true)
			{
				cin >> CheckOut;
				if (CheckOut == 'n' || CheckOut == 'N')
				{
					goto CheckOutCart;
				}
				else if (CheckOut == 'y' || CheckOut == 'Y')
				{
					break;
				}
				else
				{
					cout << "\n\tError 505: enter not valid value\n";
					cout << "Reenter valid value N to check out or Y to continue\n";
					continue;
				}
			}
		}
		else
		{
			cout << "Error 400: Enter invalid number" << endl;
			continue;
		}
	} while (true);
CheckOutCart:
	cout << "Enter how many Kilomater your home far away from Subway restaurant" << endl;
	cin >> Distance;
	DistanceFee = Distance * DelivryFee;
	cout << "\nYour Bill (from Starbucks)\n";
	Bill();
}

void Bill()
{
	// Create a loop for printing the meals, Quantity, and price total (meal * Quantity).
	for (int i = 0; i < Cart.size(); i++)
	{
		cout << Cart[i] << "\t" << " x" << Quantity[i] << "\tAED " << Cost[i] << "\tAED " << TotalCostMeals[i] << endl;
		TotalNoVATs = TotalNoVATs + TotalCostMeals[i];
	}
	TotalNoVAT = TotalNoVATs + DistanceFee; // count a total without VAT
	CountVAT = VAT * TotalNoVAT; // count a VAT
	Totally = CountVAT + TotalNoVAT; // count the all cost
	// Print the cost without VAT, VAT, and delivery fee.
	cout << "Delivery fees\t\t\t" << " x" << Distance << " \tAED " << DelivryFee << " AED " << DistanceFee << endl;
	cout << "Total without VAT\t\t\t\tAED " << TotalNoVAT << endl;
	cout << "VAT (%5)\t\t\t\t\tAED " << CountVAT << endl;
	cout << "Total\t\t\t\t\t\tAED " << Totally << endl;
}
