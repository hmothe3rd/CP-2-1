#include <iostream>
#include <ctime>
#include <string>

// Struct definition for Student
struct Student {
    int id;
    std::string name;

    // Constructor to initialize student data
    Student() {
        id = 0;
        name = "No Name";
    }

    // Member function to display student information
    void Calling() {
        std::cout << id << " - " << name << std::endl;
    }

    // Member function to ask for the student's name
    void AskForName() {
        std::cout << "Enter Name: ";
        std::cin >> name;
    }

    // Member function to ask for the student's ID
    void AskForID(int id) {
        time_t date;
        date = std::time(0);
        struct tm* local_date;

        local_date = std::localtime(&date);

        this->id = std::stoi(std::to_string(local_date->tm_year).append(std::to_string(id)));
    }
};

// Function prototype for calling all students
void CallAllStudents(Student[]);

int main() {
    Student students[3];

    // Input student data
    for (int i = 0; i < 3; i++) {
        std::cout << "Student " << i + 1 << std::endl;
        students[i].AskForName();
        students[i].AskForID(i);
    }

    // Clear screen
    system("cls");

    // Call function to display all students
    CallAllStudents(students);

    return 0;
}

// Function definition to call all students
void CallAllStudents(Student students[]) {
    std::cout << "We Have Students" << std::endl;
    for (int i = 0; i < 3; i++) {
        students[i].Calling();
    }
}