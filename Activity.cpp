#include <iostream>
#include <cmath>

int main() {

    double side, area;
    double length, width;
    double base, height;
    double radius;
    char choice, continueChoice;


		do
		{
            system("cls");

            std::cout
            << "*******************************\n"
            << "MUNE\n"            
            << "*******************************\n"
			<< "[1]. Area of Square\n"
			<< "[2]. Area of Rectangle\n"
            << "[3]. Area of Triangle\n"
            << "[4]. Area of Circle\n"
			<< "[5]. Exit\n"
            << "*******************************\n";

			std::cout << "Enter your choice: ";
			std::cin >> choice;
			system("cls");

		switch (choice) {

			case '1':
            std::cout << "Area of Square: ";
            std::cout << "\n---------------------------";
            std::cout << "\nEnter the length of the side of the square: ";
            std::cin >> side;

            area = side * side;

            std::cout << "The area of the square with side length " << side << " is: " << area << std::endl;
        break;
            
			case '2':
            std::cout << "Area of Rectangle: ";
            std::cout << "\n---------------------------";
            std::cout << "\nEnter the length of the rectangle: ";
            std::cin >> length;

            std::cout << "\nEnter the width of the rectangle: ";
            std::cin >> width;

            area = length * width;

            std::cout << "The area of the rectangle with length " << length << " and width " << width << " is: " << area << std::endl;
		break;

            case '3':
            std::cout << "Area of Triangle: ";
            std::cout << "\n---------------------------";
            std::cout << "\nEnter the length of the base of the triangle: ";
            std::cin >> base;

            std::cout << "\nEnter the height of the triangle: ";
            std::cin >> height;

            area = 0.5 * base * height;

            std::cout << "The area of the triangle with base " << base << " and height " << height << " is: " << area << std::endl;
		break;

            case '4':
            std::cout << "Area of circle: ";
            std::cout << "\n---------------------------";
            std::cout << "\nEnter the radius of the circle: ";
            std::cin >> radius;

            area = M_PI * pow(radius, 2);

            std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;
		break;

            case '5':
            std::cout << "thank you";
            exit(0);
		break;

			default:
				std::cout << "\nInvalid Number. Please only input numbers 1, 2, 3, 4, & 5. ";
			}

			std::cout << "\nDo you want to compute again? [y/n]:";
			std::cin >> continueChoice;

			if (continueChoice == 'n') {
			system("cls");
				std::cout << "thank you";
                exit(0);
			}

		} while (continueChoice =='y');



	std::cout << "thank you";
	return 0;
}