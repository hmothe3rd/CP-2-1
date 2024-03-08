#include <iostream>
#include <string>

struct Student {
    int id;
    std::string name;
    int age;
    int score1;
    int score2;

    Student() {
        id = 0;
        name = "No Name";
        age = 0;
        score1 = 0;
        score2 = 0;
    }

    void UserInput() const {
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Scores: " << score1 << ", " << score2 << std::endl;
    }

    void GetDetails(int studentId) {
        id = studentId;
        std::cout << "Enter name for student " << id << ": ";
        std::cin >> name;
        std::cout << "Enter age for student " << id << ": ";
        std::cin >> age;
        std::cout << "Enter score 1: ";
        std::cin >> score1;
        std::cout << "Enter score 2: ";
        std::cin >> score2;
        std::cout << std::endl;
    }

    float ComputeAverage() const {
        return (score1 + score2) / 2.0f;
    }
};

void AddRecords(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        students[i].GetDetails(i + 1);
    }
}

void DisplayRecords(const Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        students[i].UserInput();
    }
}

float CalculateMaxAverage(const Student students[], int numStudents) {
    float maxAvg = 0;
    for (int i = 0; i < numStudents; ++i) {
        float avg = students[i].ComputeAverage();
        if (avg > maxAvg) {
            maxAvg = avg;
        }
    }
    return maxAvg;
}

void DisplayStudentsWithMaxAverage(const Student students[], int numStudents, float maxAvg) {
    std::cout << "Students with max average score (" << maxAvg << "):\n";
    for (int i = 0; i < numStudents; ++i) {
        float avg = students[i].ComputeAverage();
        if (avg == maxAvg) {
            students[i].UserInput();
        }
    }
}

float CalculateMinAverage(const Student students[], int numStudents) {
    float minAvg = students[0].ComputeAverage();
    for (int i = 1; i < numStudents; ++i) {
        float avg = students[i].ComputeAverage();
        if (avg < minAvg) {
            minAvg = avg;
        }
    }
    return minAvg;
}

void DisplayStudentsWithMinAverage(const Student students[], int numStudents, float minAvg) {
    std::cout << "Students with min average score (" << minAvg << "):\n";
    for (int i = 0; i < numStudents; ++i) {
        float avg = students[i].ComputeAverage();
        if (avg == minAvg) {
            students[i].UserInput();
        }
    }
}

void DisplayAverages(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Average for student " << students[i].id << ": " << students[i].ComputeAverage() << std::endl;
    }
}

int MenuSelect() {
    int choice;
    std::cout << "=================================================\n"
              << "\t\t\tMENU\n"
              << "1. Add record\n"
              << "2. View students records\n"
              << "3. Compute for the average\n"
              << "4. Show the student(s) who get the max average.\n"
              << "5. Show the student(s) who get the min average.\n"
              << "6. Exit\n";
    std::cout << "\nYour choice: ";
    std::cin >> choice;
    return choice;
}

int main() {
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS];

    int option;
    do {
        option = MenuSelect();

        switch (option) {
            case 1:
                system("cls");
                AddRecords(students, MAX_STUDENTS);
                break;
            case 2:
                system("cls");
                DisplayRecords(students, MAX_STUDENTS);
                break;
            case 3:
                system("cls");
                DisplayAverages(students, MAX_STUDENTS);
                break;
            case 4: {
                system("cls");
                float maxAvg = CalculateMaxAverage(students, MAX_STUDENTS);
                DisplayStudentsWithMaxAverage(students, MAX_STUDENTS, maxAvg);
                break;
            }
            case 5: {
                system("cls");
                float minAvg = CalculateMinAverage(students, MAX_STUDENTS);
                DisplayStudentsWithMinAverage(students, MAX_STUDENTS, minAvg);
                break;
            }
            case 6:
                exit(0);
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    } while (option != 6);

    return 0;
}
