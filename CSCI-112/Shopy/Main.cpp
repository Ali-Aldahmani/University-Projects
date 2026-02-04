#include <iostream>
#include <cmath>
using namespace std;

// Here, we will declare global variables
int Calculatechoice, CloseContinue;

/* 
Here will declare a function
 I will start with 2D Function Square, Rectangle , Circle, Triangle, and Ellipse to calculate Perimeter and Area
 For 2D Shape I will use 5 function
Here will be function to calculate Perimeter and area for Square
*/
double SquarePerimeter(double side)
{
	return 4 * side;
}
double SquareArea(double side)
{
	return side * side;
}
// Perimeter and area for Rectangle
double RectanglePerimeter(double width, double length)
{
	return 2 * (width + length);
}
double RectangleArea(double width, double length)
{
	return width * length;
}
// Perimeter and area for Circle
const double Pi = 3.14;
double CirclePerimeter(double raduis)
{
	return 2 * Pi * raduis;
}
double CircleArea(double raduis)
{
	return Pi * raduis * raduis;
}
// Permieter and area of Triangle
double TrianglePerimeter(double FirstSide, double SecondSide, double ThirdSide)
{
	return FirstSide + SecondSide + ThirdSide;
}
double TringleArea(double FirstSide, double SecondSide, double ThirdSide)
{
	double SemiPerimeterTringle = (FirstSide + SecondSide + ThirdSide) / 2;
	return sqrt(SemiPerimeterTringle * (SemiPerimeterTringle - FirstSide) * (SemiPerimeterTringle - SecondSide) * (SemiPerimeterTringle - ThirdSide));
}
// Permieter and area of Ellipse
double EllipsePermimeter(double SemiMajor, double SemiMinor)
{
	return Pi* (3 * (SemiMajor + SemiMinor) - sqrt((3 * SemiMajor + SemiMinor) * (3 * SemiMajor + SemiMinor)));
}
double EllipseArea(double SemiMajor, double SemiMinor)
{
	return Pi* SemiMajor* SemiMinor;
}

/* 
Here will start a declare a 3D shape function
 there's 5 shape: Cube, Cubiod, Sphere, Cylinder and Cone
 i will calculate a Surface area and volume for each shape
 start with Cube
 */
double CubeSurface(double side)
{
	return 6 * side * side;
}
double CubeVolume(double side)
{
	return side * side * side;
}
// Surface area for Cubiod
double CuboidSurface(double width, double length, double height)
{
	return 2 * (length * width + width * height + height * length);
}
double CuboidVolume(double width, double length, double height)
{
	return length * width * height;
}
// Surface area for Sphere
double SphereSurface(double raduis)
{
	return 4 * Pi * raduis * raduis;
}
double SphereVolume(double raduis)
{
	return (4.0 / 3.0) * Pi * pow(raduis, 3);
}
// Surface area for Cylinder
double CylinderSurface(double radius, double height)
{
	return 2 * Pi * radius * (radius + height) + 2 * Pi * radius * radius;
}
double CylinderVolume(double raduis, double height)
{
	return Pi * pow(raduis, 2) * height;
}
// Surface area for Cone
double ConeSurface(double radius, double height)
{
	return Pi * radius * (radius + sqrt(radius * radius + height * height));
}
double ConeVolume(double radius, double height)
{
	return (1.0 / 3.0) * Pi * pow(radius, 2) * height;
}

/* 
Here create a void function for print all menu
	Main menu	2D shape menu	3D shape menu
*/
void MainMenu();
void TowDMenu();
void ThreeDMenu();

/*
here create main menu and for main menu just call one function
because Main menu function will control all function
*/
int main()
{
	// call a main menu function to display it
	MainMenu();
	return 0;
}

// Here's define an all function we create it upon
void MainMenu()
{
	int Pages;
	cout << "\n\tWelcom to Shopy\n";
	cout << "Shopy is a calculater for 2D shape and 3D\n";
	cout << "NOTE: you must enter the number show befro a name\n";
	cout << "\n1- 2D shape menu\n";
	cout << "\n2- 3D shape menu\n";
	cin >> Pages;
	switch (Pages)
	{
	case 1:
		TowDMenu();
		break;
	case 2:
		ThreeDMenu();
		break;
	default:
		cout << "\n\tError you enter wrong number\n";
		cout << "\tSystem down\n";
	}
}

void TowDMenu()
{
	int Side, width, length, raduis, FirstSide, SecondSide, ThirdSide, SemiMajor, SemiMinor;
	
	do
	{
		cout << "\n\tHere's 2D shape menu\n";
		cout << "NOTE: you must enter the number show befro a name\n";
		cout << "\n2D Shape List:\n";
		cout << "1- Square\n";
		cout << "2- Rectangle\n";
		cout << "3- Circle\n";
		cout << "4- Triangle\n";
		cout << "5- Ellipse\n";
		cout << "6- Back to main menu\n";
		cin >> Calculatechoice;
		if (Calculatechoice == 1)
		{
			cout << "Enter a value of Square side: \n";
			cin >> Side;
			cout << "The Square Perimeter is: " << SquarePerimeter(Side) << "\nand Square Area is: " << SquareArea(Side) << endl;;
			cout << "\n\tTo continue in the 2D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 2)
		{
			cout << "Enter a value of Rectangle width: \n";
			cin >> width;
			cout << "Enter a value of Rectangle length: \n";
			cin >> length;
			cout << "The Perimeter of Rectangle is: " << RectanglePerimeter(width, length) << "\nand Rectangle Area is: " << RectangleArea(width, length) << endl;
			cout << "\n\tTo continue in the 2D menu, enter 1 or 2 to close the system or 3 to back the main menu: ";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 3)
		{
			cout << "Enter a value of Circle raduis: \n";
			cin >> raduis;
			cout << "The Perimeter of Circle is: " << CirclePerimeter(raduis) << "\nand Circle Area is: " << CircleArea (raduis) << endl;
			cout << "\n\tTo continue in the 2D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 4)
		{
			cout << "Enter a value of First side in Triangle: \n";
			cin >> FirstSide;
			cout << "Enter a value of Second side in Triangle: \n";
			cin >> SecondSide;
			cout << "Enter a value of third side in Triangle: \n";
			cin >> ThirdSide;
			cout << "The Perimeter of Triangle is: " << TrianglePerimeter(FirstSide, SecondSide, ThirdSide) << "\nand Triangle Area is: " << TrianglePerimeter(FirstSide, SecondSide, ThirdSide) << endl;
			cout << "\n\tTo continue in the 2D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 5)
		{
			cout << "Enter a value of Semi Major in Ellipse: \n";
			cin >> SemiMajor;
			cout << "Enter a value of Semi Minor in Ellipse: \n";
			cin >> SemiMinor;
			cout << "The Perimeter of Triangle is: " << EllipsePermimeter(SemiMajor, SemiMinor) << "\nand Triangle Area is: " << EllipseArea(SemiMajor, SemiMinor) << endl;
			cout << "\n\tTo continue in the 2D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 6)
		{
			MainMenu();
			break;
		}
		else
		{
			cout << "\n\tWarining: Error you enter wrong number\n";
			cout << "\tEnter a valid number\n";
			continue;
		}
	} while (true);
}

void ThreeDMenu()
{
	double side, width, length, height, raduis;

	do
	{
		cout << "\n\tHere's 3D shape menu\n";
		cout << "NOTE: you must enter the number show befro a name\n";
		cout << "\n3D Shape List:\n";
		cout << "1- Cube\n";
		cout << "2- Cuboid\n";
		cout << "3- Sphere\n";
		cout << "4- Cylinder\n";
		cout << "5- Cone\n";
		cout << "6- Back to main menu\n";
		cin >> Calculatechoice;
		if (Calculatechoice == 1)
		{
			cout << "Enter the value of cube side:\n";
			cin >> side;
			cout << "The Surface of Cube is: " << CubeSurface(side) << " ,and the Volume is: " << CubeVolume(side) << endl;
			cout << "\n\tTo continue in the 3D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 2)
		{
			cout << "Enter a value of Cuboid width: \n";
			cin >> width;
			cout << "Enter a value of Cuboid length: \n";
			cin >> length;
			cout << "Enter a value of Cuboid height: \n";
			cin >> height;
			cout << "The Surface of Cuboid is: " << CuboidSurface(width, length, height) << "\nand Volume of Cuboid is: " << CuboidVolume(width, length, height) << endl;
			cout << "\n\tTo continue in the 3D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 3)
		{
			cout << "Enter a value of Sphere raduis: \n";
			cin >> raduis;
			cout << "The Surface of Sphere is: " << SphereSurface(raduis) << "\nand Sphere Volume is: " << SphereVolume(raduis) << endl;
			cout << "\n\tTo continue in the 3D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 4)
		{
			cout << "Enter a value of Cylinder raduis: \n";
			cin >> raduis;
			cout << "Enter a value of Cylinder height: \n";
			cin >> height;
			cout << "The Surface of Cylinder is: " << CylinderSurface(raduis, height) << "\nand Volume of Cylinder is: " << CylinderVolume(raduis, height) << endl;
			cout << "\n\tTo continue in the 3D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 5)
		{
			cout << "Enter a value of Cone raduis: \n";
			cin >> raduis;
			cout << "Enter a value of Cone height: \n";
			cin >> height;
			cout << "The Surface of Cone is: " << ConeSurface(raduis, height) << "\nand Volume of Cone is: " << ConeVolume(raduis, height) << endl;
			cout << "\n\tTo continue in the 3D menu, enter 1 or 2 to close the system or 3 to back the main menu:";
			cin >> CloseContinue;
			if (CloseContinue == 1)
			{
				continue;
			}
			else if (CloseContinue == 2)
			{
				break;
			}
			else if (CloseContinue == 3)
			{
				MainMenu();
				break;
			}
			else
			{
				cout << "\nError 405\n";
				break;
			}
		}
		else if (Calculatechoice == 6)
		{
			MainMenu();
			break;
			}
		else
		{
			cout << "\n\tError you enter wrong number\n";
			continue;
		}
	} while (true);
}
