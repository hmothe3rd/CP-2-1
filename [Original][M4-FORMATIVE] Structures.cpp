#include <iostream>
#include <string>

struct Player {
    std::string nickname;
    int age;
    int score1;
    int score2;
    float averageScore;

    Player() : age(0), score1(0), score2(0), averageScore(0) {}
};

void AddInput(Player players[], int &numPlayers, int MAX_PLAYERS) {
    if (numPlayers < MAX_PLAYERS) {
        Player &player = players[numPlayers];
        std::cout << "Enter nickname: ";
        std::cin >> player.nickname;
        std::cout << "Enter age: ";
        std::cin >> player.age;
        std::cout << "Enter score 1: ";
        std::cin >> player.score1;
        std::cout << "Enter score 2: ";
        std::cin >> player.score2;
        numPlayers++;
    } 
    
    else {
        std::cout << "Maximum players limit reached." << std::endl;
    }
}

void ViewRecords(const Player players[], int numPlayers) {
    std::cout << "Player Records:\n";
    for (int i = 0; i < numPlayers; ++i) {
        std::cout << "Nickname: " << players[i].nickname << ", Age: " << players[i].age << ", Scores: " << players[i].score1 << ", " << players[i].score2 << std::endl;
    }
}

void computeAndDisplayPlayerAverages(const Player players[], int numPlayers) {
    std::cout << "Average score of all players:\n";
    for (int i = 0; i < numPlayers; ++i) {
        std::cout << "Player " << (i + 1) << " average: " << (players[i].score1 + players[i].score2) / 2.0f << std::endl;
    }
}

void maxAverage(const Player players[], int numPlayers) {
    if (numPlayers == 0) {
        std::cout << "No players available.\n";
        return;
    }

    float maxAvg = (players[0].score1 + players[0].score2) / 2.0f;
    for (int i = 1; i < numPlayers; ++i) {
        float avg = (players[i].score1 + players[i].score2) / 2.0f;
        if (avg > maxAvg) {
            maxAvg = avg;
        }
    }

    std::cout << "Players with max average score:\n";
    for (int i = 0; i < numPlayers; ++i) {
        float avg = (players[i].score1 + players[i].score2) / 2.0f;
        if (avg == maxAvg) {
            std::cout << "Nickname: " << players[i].nickname << ", Age: " << players[i].age << ", Average: " << avg << std::endl;
        }
    }
}

// Function to find the player(s) with the min average score
void minAverage(const Player players[], int &numPlayers) {
    if (numPlayers == 0) {
        std::cout << "No players available.\n";
        return;
    }

    float minAvg = (players[0].score1 + players[0].score2) / 2.0f;
    for (int i = 1; i < numPlayers; ++i) {
        float avg = (players[i].score1 + players[i].score2) / 2.0f;
        if (avg < minAvg) {
            minAvg = avg;
        }
    }

    std::cout << "Players with min average score:\n";
    for (int i = 0; i < numPlayers; ++i) {
        float avg = (players[i].score1 + players[i].score2) / 2.0f;
        if (avg == minAvg) {
            std::cout << "Nickname: " << players[i].nickname << ", Age: " << players[i].age << ", Average: " << avg << std::endl;
        }
    }
}

int  MeunSelect() {
    int choice;
        std::cout << "==============================================\n"
                  << "MENU\n"
                  << "==============================================\n"
                  << "1. Add record\n"
                  << "2. View players records\n"
                  << "3. Compute for the average\n"
                  << "4. Show the player(s) who gets the max average.\n"
                  << "5. Show the player(s) who gets the min average.\n"
                  << "6. Exit\n";
        std::cout << "Your choice: ";
        std::cin >> choice;
        return choice;

}

int main() {
    const int MAX_PLAYERS = 5; 
    int numPlayers = 0;
    int option;

    Player players[MAX_PLAYERS];
    do{
        option = MeunSelect();
        switch (option) {
            case 1:
                system("cls");
                AddInput(players, numPlayers, MAX_PLAYERS);
                break;
            case 2:
                system("cls");
                ViewRecords(players, numPlayers);
                break;
            case 3:
                system("cls");
                computeAndDisplayPlayerAverages(players, numPlayers);
                break;
            case 4:
                system("cls");
                maxAverage(players, numPlayers);
                break;
            case 5:
                system("cls");
                minAverage(players, numPlayers);
                break;
            case 6:
                system("cls");
                exit(0);
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (option != 6);

    return 0;
}