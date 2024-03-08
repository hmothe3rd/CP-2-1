#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <cstdlib>  
#include <stdlib.h>
#include <limits>


using namespace std;

#define PINK "\e[0;95m" 
#define reset "\e[0m"
#define UVIO "\e[4;35m"
#define HGRN "\e[0;92m"
#define BMAG  "\033[1m\033[35m"      
#define CRM   "\033[1m\033[93m"      
#define BHBLK "\e[1;90m"
#define HRED "\e[0;91m"

void delay(double seconds);
void HappyValentinesDay();
void DateInvitation();
void Invitation(const string& name);
void OutPut2();
void Decision(const string& name);
void Rejection();
void Reaction(const string& name);
void DatePlan();
void EndProgram(const string& name);

int main() {
    string input;

    cout << "Input recipient name: ";
    getline(cin, input);
    HappyValentinesDay();
    Invitation(input);
    system("pause"); 
    system("cls");
    DateInvitation();
    Decision(input);

    return 0;   
}

void delay(double seconds) {
    clock_t start_time = clock();
    double delay_time = seconds * CLOCKS_PER_SEC;
    while (clock() < start_time + delay_time);
}

void DateInvitation() {
    string line1 = BMAG "  ____            _              _                   _   _             _     _                 ";
    string line2 = BMAG " |  _ \\    __ _  | |_    ___    (_)  _ __   __   __ (_) | |_    __ _  | |_  (_)   ___    _ __  ";
    string line3 = BMAG " | | | |  / _` | | __|  / _ \\   | | | '_ \\  \\ \\ / / | | | __|  / _` | | __| | |  / _ \\  | '_ \\ ";
    string line4 = BMAG " | |_| | | (_| | | |_  |  __/   | | | | | |  \\ V /  | | | |_  | (_| | | |_  | | | (_) | | | | |";
    string line5 = BMAG " |____/   \\__,_|  \\__|  \\___|   |_| |_| |_|   \\_/   |_|  \\__|  \\__,_|  \\__| |_|  \\___/  |_| |_|\n" reset;
    string line6 = "================================================================================================\n\n";


    for (char c : line1) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line2) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line3) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line4) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line5) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

        for (char c : line6) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

}

void HappyValentinesDay() {
    system("cls");
    string line1 = BMAG " _   _                                    __     __          _                  _     _                  _           ____                  ";
    string line2 = BMAG "| | | |   __ _   _ __    _ __    _   _    \\ \\   / /   __ _  | |   ___   _ __   | |_  (_)  _ __     ___  ( )  ___    |  _ \\    __ _   _   _ ";
    string line3 = BMAG "| |_| |  / _` | | '_ \\  | '_ \\  | | | |    \\ \\ / /   / _` | | |  / _ \\ | '_ \\  | __| | | | '_ \\   / _ \\ |/  / __|   | | | |  / _` | | | | |";
    string line4 = BMAG "|  _  | | (_| | | |_) | | |_) | | |_| |     \\ V /   | (_| | | | |  __/ | | | | | |_  | | | | | | |  __/     \\__ \\   | |_| | | (_| | | |_| |";
    string line5 = BMAG "|_| |_|  \\__,_| | .__/  | .__/   \\__, |      \\_/     \\__,_| |_|  \\___| |_| |_|  \\__| |_| |_| |_|  \\___|     |___/   |____/   \\__,_|  \\__, |";
    string line6 = BMAG "                |_|     |_|      |___/                                                                                               |___/ " reset;
    string line7 = "============================================================================================================================================\n";


    for (char c : line1) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line2) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line3) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line4) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line5) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line6) {
        cout << c << flush;
        delay(0.003); 
    }
    cout << endl;

    for (char c : line7) {
        cout << c << flush;
        delay(0.003); //.03
    }
    cout << endl;
}

void Invitation(const string& name) {
    string intro = " Ms. " + name + " As the day of " PINK "Hearts" reset "," PINK " Affection" reset "," " and"  PINK " Memories" reset " is coming near." //fix this
                   " I want to formally invite you to: "
                   "\n 1. Lunch/Dinner"
                   "\n 2. Museum"
                   "\n 3. Cafe\n\n"
                   " I hope ok lang sa 16 afternoon yung date if ever. By the way don't vid or anything just thumbs down or up is ok sa messenger";

    for (char c : intro) {
        cout << c << flush;
        delay(0.003);
    }

    cout << endl; 
}

void Rejection() {
    cout << "\n\n Oki po\n\n";

}

void DatePlan() {
    int input;
    do {
        cout << HGRN"Date options that would could fit your schedule:\n"
             << UVIO " [1]. Where would you want to go:?\n" reset
             << HGRN " Could you message where you want to go, thank you.\n\n" reset
             << UVIO " [2]. Lunch/Dinner:\n" reset
             << HGRN " Eat in bockchiken.\n\n" reset
             << UVIO " [3]. Museum:\n" reset
             << HGRN " 1.Go to National Museum of Fine Arts.\n"
             << HGRN " 2.Move to Intramuros.\n"
             << HGRN " 3.Find a good place to eat or cafe.\n\n" reset
             << UVIO " [4]. Cafe:\n" reset
             << " https://www.tiktok.com/@dustiiingaming/video/7325392965348691205?_r=1&_t=8jlYFKqafKb\n" reset
                "  >> ";

        cin >> input;

        if (input == 1 || input == 2 || input == 3 || input == 4) {
            system("cls");
            cout << "Oki Could you message what number you picked hehe thank you.\n\n";
            system("pause");
        } 
        
        else {
            system("cls");
            cout << "its ok :) hehe\n";
        }

    } while (input > 4);
}

void Decision(const string& name) {
    int answer;

    do {
        cout << PINK " Ms. " CRM << name
             << PINK " Will you go on a friendly date with me\n" 
                CRM  " [1]" reset ". Yes\n" CRM " [2]" reset ". No\n"
                HRED " Note " reset "If the output for this is still blank press 2 or 1 again\n"
                     " >> ";
        cin >> answer;
  
    switch (answer) {
    case 1:
        system("cls");
        Reaction(name);
        EndProgram(name);
    break;
    
    case 2:
        system("cls");
        Rejection();
        EndProgram(name);
    
    break;
    default:
        system("cls");
        cout << "Please only input Y or N answers :)\n";
    }

    } while (answer > 2);
}

void Reaction(const string& name) {
    int answer1;
    string output, output2, output3, output4;

    cout << "For real ba? Di mali lang press mo?????"
            CRM "\n[1]" reset ". Yup"
            CRM "\n[2]" reset ". My Bad Mali"
            CRM "\n[3]" reset ". Kulit mo noh\n"
            ">> ";
    cin >> answer1;

    system("cls");

    switch (answer1) {
        case 1: {
            output2 = "OHHHHHHHHHHHHHHHHH YEAHHHHHHHHHHHHHHH HAHAHA"
                     "\n..........Ehm"
                     "\nIm chill.. ok so yeah"
                     "\nDATE PLAN!!!"
                     "\nboom very chill\n\n";

            for (char c : output2) {
                cout << c << flush;
                delay(0.01);
            }
            DatePlan();
            break;
        }

        case 2:
            output3 = ":( oki\n\n";

            for (char c : output3) {
                cout << c << flush;
                delay(0.1);
            }
            Decision(name);
            break;

        case 3:
            cout << "NO NO NO MY CHILL BRO IM CHILL.... yeah so game plan (thank you LORD)\n";
            DatePlan();
            break;

        default:
            break;
    }
}

void EndProgram(const string& name) {

    double x, y, size = 15, dist1, dist2;
    char ch = 3;
    int print_line = 4;

    string message = " Happy Valentine's Day " + name + " ";

    if (message.length() % 2 != 0)
        message += " ";

    for (x = 0; x < size; x++) {
        for (y = 0; y <= 4 * size; y++) {
            dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));

            if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                cout << ch;
            } else
                cout << " ";

            // Introduce a delay after printing each character
            delay(0.001); // Adjust delay time as needed
        }
        cout << "\n";
    }

    for (x = 1; x < 2 * size; x++) {
        for (y = 0; y < x; y++)
            cout << " ";

        for (y = 0; y < 4 * size + 1 - 2 * x; y++) {
            if (x >= print_line - 1 && x <= print_line + 1) {
                int idx = y - static_cast<int>((4 * size - 2 * x - static_cast<int>(message.length())) / 2);
                if (idx < static_cast<int>(message.length()) && idx >= 0) {
                    if (x == print_line)
                        cout << message[idx];
                    else
                        cout << " ";
                } else
                    cout << ch;
            } else
                cout << ch;

            // Introduce a delay after printing each character
            delay(0.001); // Adjust delay time as needed
        }
        cout << endl;
    }

}