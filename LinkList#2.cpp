// Store Students Information

#include <iostream>
#include <iomanip>

//Strck to properly call out what is inside...
struct Student {
	// Address
	Student *next = NULL;
	Student *prev = NULL;
	// Informations
	std::string name, sex, course, year, standing;
	int age = 0, id = 0;
};

//Function to call out Menu, int& is included so that int varible is trasffered. 
void MainMenu(int&);
Student *AddNewStudent();

int main()  {

	int choice, studentCounter = 0;
	Student* head = NULL, * tail = NULL, * temp = NULL;

	do
	{
		MainMenu(choice);

		switch (choice)
		{
		case 1:
			temp = AddNewStudent();
			if (studentCounter) {
				// True: meron nang karga ang linked list
				// B.2
				temp->prev = tail;
				temp->next = NULL;

				// B.3
				tail->next = temp;

				// B.4
				tail = temp;
			}
			else
			{
				// False: wala pang karga
				// A.2
				head = temp; 

				// A.3
				head->prev = NULL;
				head->next = NULL;

				// A.4
				tail = head;
			}

			studentCounter++;
			break;
		case 2:
			std::cout << "Update\n";
			break;
		case 3:
			std::cout << "Read\n";

			temp = head;

			if (temp)
			{
				do
				{
					std::cout << temp->id << " - " << temp->name << " " << temp->age << " << " << temp->course << " " << temp->year << "\n";

					if (!temp->next)
						break;

					temp = temp->next;
				} while (true);
			}

			break;
		case 4:
			std::cout << "Delete\n";
			break;
		default:
			break;
		}
	} while (true);
}

// pre test call out
// Dont forget the int& choice to properly pass by the int variable...
void MainMenu(int& choice) {
	std::cout
		<< "1. Add Student\n"
		<< "2. Update Student\n"
		<< "3. Check Student List\n"
		<< "4. Delete Student\n";

	std::cin >> choice;
    // Clears the screen
	system("cls");
}

Student* AddNewStudent() {
	Student* studentInformation;
	studentInformation = new Student;

	std::cout
		<< "-- Student Information Form --\n\n"
		<< "Name: ";
	std::cin >> studentInformation->name;
	std::cout << "Age: ";
	std::cin >> studentInformation->age;
	std::cout << "Sex: ";
	std::cin >> studentInformation->sex;
	std::cout << "Course: ";
	std::cin >> studentInformation->course;
	std::cout << "Year: ";
	std::cin >> studentInformation->year;
	std::cout << "Standing: ";
	std::cin >> studentInformation->standing;
	std::cout << "Provided ID by School: ";
	std::cin >> studentInformation->id;

	return studentInformation;
}

// Here's a step-by-step explanation of how the provided code works:

// 1. **Include Header Files**: The code includes necessary header files such as `<iostream>` and `<iomanip>` for input/output operations.

// 2. **Define Student Structure**: The `Student` structure is defined to hold information about each student. It includes pointers to the next and previous students in the linked list, as well as attributes such as name, age, sex, course, year, standing, and ID.

// 3. **Declare Functions**: Two functions are declared: `MainMenu` and `AddNewStudent`.

// 4. **Define MainMenu Function**: The `MainMenu` function displays a menu of options (Add Student, Update Student, Check Student List, Delete Student) for the user to choose from. It takes an integer reference (`int& choice`) to store the user's choice.

// 5. **Define AddNewStudent Function**: The `AddNewStudent` function prompts the user to input information about a new student. It creates a new `Student` object, initializes its attributes based on user input, and returns a pointer to the newly created object.

// 6. **Main Function**: The `main` function is the entry point of the program.

//    - It declares variables `choice` and `studentCounter`.
//    - It declares pointers `head`, `tail`, and `temp` for managing the linked list of students.
//    - It enters a do-while loop that displays the main menu, gets the user's choice, and performs the corresponding action.
//    - The actions include adding a new student, updating student information, reading/displaying the student list, and deleting a student.
//    - The loop continues indefinitely until the program is terminated externally.

// 7. **Switch Statement**: Inside the loop, a switch statement handles the user's choice by calling the appropriate function or performing the corresponding action.

// 8. **Add Student (Option 1)**:
//    - Calls `AddNewStudent` to create a new student object.
//    - Adds the student to the linked list based on whether other students exist in the list.

// 9. **Update Student (Option 2)**: Placeholder functionality to update student information.

// 10. **Check Student List (Option 3)**:
//    - Traverses the linked list of students (`temp` pointer).
//    - Prints information about each student until the end of the list is reached.

// 11. **Delete Student (Option 4)**: Placeholder functionality to delete a student.

// 12. **Repeat**: After performing the selected action, the program returns to the beginning of the loop to display the main menu again.

// This cycle continues until the program is terminated externally (e.g., by the user closing the program window).