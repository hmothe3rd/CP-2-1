#include <iostream>
#include <string>

struct DataHolder {
    const static int MAX = 2;
    double val[MAX] = {0, 0}, result = 0;
    std::string mathOperator;

    void Display() {
        if (this->mathOperator.length() != 1)
            std::cout << this->mathOperator << "\n";
        else
            std::cout << this->val[0] << " " << this->mathOperator << " " << this->val[1] << " = " << this->result << "\n";
    }
};

struct History {
    History *next = nullptr;
    DataHolder *data = new DataHolder;
};

int MainMenu();
int MathMenu();
int HistoryMenu(int, int, int);
void AddHistory(History*&, History*&, History*&);
void DisplayHistory(History*, int, int);
void ClearHistory(History*&);
void InputValue(History*&);
void Computation(int, History*&);
int HistoryFunctionalities(int&, History*&, History*&);
void UpdateHistory(History*, int, double);

double Add(double[], const int);
double Subtract(double[], const int);
double Division(double[], const int);
double Multiplication(double[], const int);

int main() {
    int choice, historyCounter = 0;
    History *temp = nullptr;
    History *head = nullptr, *tail = nullptr;

    while (true) {
        switch (MainMenu()) {
            case 1:
                do {
                    choice = MathMenu();
                    if (choice == 0) break;
                    InputValue(temp);
                    Computation(choice, temp);
                    AddHistory(head, tail, temp);
                    historyCounter++;
                } while (true);
                break;
            case 2:
                HistoryFunctionalities(historyCounter, head, tail);
                break;
            case 0:
                exit(0);
            default:
                break;
        }
    }
}

int MainMenu() {
    int choice;
    do {
        std::cout << "1. Calculator\n"
                  << "2. History\n"
                  << "0. Exit\n"
                  << ":: ";
        std::cin >> choice;
    } while (choice < 0 || choice > 2);

    system("cls");
    return choice;
}

int MathMenu() {
    int choice;
    do {
        std::cout << "1. Add\n"
                  << "2. Subtract\n"
                  << "3. Multiply\n"
                  << "4. Divide\n"
                  << "0. Return\n"
                  << ">> ";
        std::cin >> choice;
    } while (choice < 0 || choice > 4);

    system("cls");
    return choice;
}

int HistoryMenu(int currentPage, int lastPage, int historyCounter) {
    int choice = 0, instructionCounter = 0;
    std::string instructions = "";

    if (historyCounter) {
        if (currentPage != 1)
            instructions.append(std::to_string(++instructionCounter) + ". Prev | ");
        if (currentPage != lastPage)
            instructions.append(std::to_string(++instructionCounter) + ". Next | ");
        instructions.append(std::to_string(++instructionCounter) + ". Update a History | ");
        instructions.append(std::to_string(++instructionCounter) + ". Delete a History | ");
        instructions.append(std::to_string(++instructionCounter) + ". Delete History | ");
    }

    do {
        std::cout << instructions << "0. Exit\n\n"
                  << ">> ";
        std::cin >> choice;
        system("cls");
        if (!choice) return 0;
    } while (choice < 1 && choice > instructionCounter);

    if (currentPage == 1 && currentPage == lastPage) return choice + 2;
    else if (currentPage == 1) return ++choice;
    else if (currentPage == lastPage && choice != 1) return ++choice;
    else return choice;
}

void AddHistory(History*& head, History*& tail, History*& temp) {
    if (!head)
        head = temp;
    else
        tail->next = temp;

    tail = temp;
    tail->next = nullptr;
    system("pause");
    system("cls");
}

void DisplayHistory(History* head, int currentPage, int lastPage) {
    int counter = 0, startingIndex = (currentPage - 1) * 10, i = 0;
    if (!head)
        std::cout << "-- No History Yet! --\n";
    else {
        std::cout << "Page " << currentPage << " of " << lastPage << "\n\n"
                  << "History\n";

        while (head && counter < 10) {
            if (startingIndex <= i) {
                head->data->Display();
                counter++;
            }
            head = head->next;
            i++;
        }
    }
    std::cout << "\n";
}

void ClearHistory(History*& head) {
    History *temp = nullptr, *current = head;
    if (!head)
        std::cout << "-- No History Yet! --\n\n";
    else {
        while (current) {
            temp = current->next;
            delete current->data;
            delete current;
            current = temp;
        }
        std::cout << "-- History Clear! --\n";
    }
    system("pause");
    system("cls");
}

void InputValue(History*& history) {
    history = new History;
    for (int i = 0; i < history->data->MAX; i++) {
        std::cout << "Value " << i + 1 << ": ";
        std::cin >> history->data->val[i];
    }
}

void Computation(int choice, History*& history) {
    switch (choice) {
        case 1:
            history->data->mathOperator = "+";
            history->data->result = Add(history->data->val, history->data->MAX);
            break;
        case 2:
            history->data->mathOperator = "-";
            history->data->result = Subtract(history->data->val, history->data->MAX);
            break;
        case 3:
            history->data->mathOperator = "*";
            history->data->result = Multiplication(history->data->val, history->data->MAX);
            break;
        case 4:
            if (!history->data->val[1]) {
                std::cout << "Division Input Error!\n";
                history->data->mathOperator = "Division Input Error!";
                break;
            }
            history->data->mathOperator = "/";
            history->data->result = Division(history->data->val, history->data->MAX);
            break;
        default:
            break;
    }
}

int HistoryFunctionalities(int &historyCounter, History *&head, History *&tail) {
    History *currentNode = head;
    int currentPage = 1, lastPage = (historyCounter - 1) / 10 + 1;
    while (currentPage <= lastPage) {
        DisplayHistory(currentNode, currentPage, lastPage);
        switch (HistoryMenu(currentPage, lastPage, historyCounter)) {
            case 1:
                currentPage--;
                break;
            case 2:
                currentPage++;
                break;
           case 3:

                break;
            case 4:
                // Placeholder for Delete History
                break;
            case 5:
                ClearHistory(head);
                tail = nullptr;
                head = nullptr;
                break;
            case 0:
                return 0;
        }
    }
    return 0;
}

double Add(double val[], const int MAX) {
    double total = 0;
    for (int i = 0; i < MAX; i++)
        total += val[i];
    return total;
}

double Subtract(double val[], const int MAX) {
    double total = val[0];
    for (int i = 1; i < MAX; i++)
        total -= val[i];
    return total;
}

double Division(double val[], const int MAX) {
    double total = val[0];
    for (int i = 1; i < MAX; i++)
        total /= val[i];
    return total;
}

double Multiplication(double val[], const int MAX) {
    double total = val[0];
    for (int i = 1; i < MAX; i++)
        total *= val[i];
    return total;
}

void UpdateHistory(History *head, int position, double new_data) {
    int count = 1;
    History *tail = head;

    if (head == nullptr) {
        std::cout << "Linked List not initialized" << std::endl;
        return;
    }

    while (tail != nullptr) {
        if (count == position) {
            tail->data->result = new_data;
            std::cout << "\nNode at position " << position << " updated with " << new_data << std::endl;
            return;
        }
        tail = tail->next;
        count++;
    }

    std::cout << "Position " << position << " does not exist in the list" << std::endl;
}