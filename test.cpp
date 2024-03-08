#include <iostream>
#include <string>

using namespace std;

void ValentinesHeader() {
    cout << " __     __    _            _   _            _       ____        _         ___            _ _        _   _             \n";
    cout << " \\ \\   / /_ _| | ___ _ __ | |_(_)_ __   ___( )___  |  _ \\  __ _| |_ ___  |_ _|_ ____   _(_) |_ __ _| |_(_) ___  _ __  \n";
    cout << "  \\ \\ / / _` | |/ _ \\ '_ \\| __| | '_ \\ / _ \\// __| | | | |/ _` | __/ _ \\  | || '_ \\ \\ / / | __/ _` | __| |/ _ \\| '_ \\ \n";
    cout << "   \\ V / (_| | |  __/ | | | |_| | | | |  __/ \\__ \\ | |_| | (_| | ||  __/  | || | | \\ V /| | || (_| | |_| | (_) | | | |\n";
    cout << "    \\_/ \\__,_|_|\\___|_| |_|\\__|_|_| |_|\\___| |___/ |____/ \\__,_|\\__\\___| |___|_| |_|\\_/ |_|\\__\\__,_|\\__|_|\\___/|_| |_|\n";
    cout << "                                                                                                                      \n" << endl;
}

void MainInvitation() {
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    system("cls");
    ValentinesHeader();
    cout << "\n\n";
    cout << "Ms. " << name << "......" << endl;
    cout << "This is to formally invite you to a Valentine's Day celebration with ME :>" << endl;
    cout << "Let us celebrate the Valentine's together, full of happiness, laughter and create wonderful memories." << endl;
    cout << "Will you be my Valentine ?" << endl;
    cout << "(Y or N)" << endl;
}

void MovieNight() 
{
    int category1;
    cout << "Hi! Since you chose Movie night, would you like to watch ... " << endl;
    cout << "1. Movies " << endl;
    cout << "2. Series" << endl;
    cin >> category1;
    system("cls");
    switch (category1)
    {
    case 1: 
        cout << "1. Serendipity" << endl;
        cout << "2. Crazy Rich Asians" << endl;
        cout << "3. Princess Diaries 1 & 2" << endl;
        break;
    case 2:
        cout << "Business Proposal" << endl;
        cout << "Hotel Del Luna" << endl;
        break;
    }
   
    cin.ignore();
    cin.get();
}

void AmusementPark() {
    cout << "Hi! Since you chose Amusement Park and Zoo.." << endl;
    cout << "I already booked our tickets!" << endl;
    cout << "Manila Zoo\t" << "http://manilazoo.ph/appointment/09254e0b-8ea0-4d34-9377-c13ba889d858" << endl;
    cout << "\nStar City\t" << "https://starcity.com.ph/accesspass?s=771119735476&r=88E6DE20E1C9\n\n" << endl;
    cout << "Copy & Paste the URL and Save the QR Code, Thanks!" << endl;
    cin.ignore();
    cin.get();
}

void UySurprise() {
    cout << "Hi! Since you chose Surprise..." << endl;
    cin.ignore();
    cin.get();
    cout << " We are going to INTRAMUROS!" << endl;
    cout << "Our agenda will be : " << endl;
    cout << "Visit Fort Santiago" << endl;
    cout << "Ride Bamboo Bikes" << endl;
    cout << "Visit Manila Cathedral and Quick Snack at La Cathedral Cafe" << endl;
    cout << "Finally, Dinner at The Bayleaf Intramuros" << endl;
    cin.ignore();
    cin.get();
}

void menu() {
    int category;
    cout << "Valentine's Day Date Category" << endl;
    cout << "1. Movie Night" << endl;
    cout << "2. Amusement Park & Zoo" << endl;
    cout << "3. Surprise!" << endl;
    cout << "Please select your category : ";
    cin >> category;
    system("cls");
    switch (category) {
    case 1:
        MovieNight();
        break;
    case 2:
        AmusementPark();
        break;
    case 3:
        UySurprise();
        break;
    default:
        cout << "Invalid category. Ayaw mo ata makipag-date e :<" << endl;
    }
}

int main() {
    char answer, choice;
    MainInvitation();
    cin >> answer;
    system("cls");

    if (answer == 'Y' || answer == 'y') {
        do {
            menu();
            cout << "Do you want to select another category? (Y/N)" << endl;
            cin >> choice;
            system("cls");
        } while (choice == 'Y' || choice == 'y');
    }
    else if (answer == 'N' || answer == 'n') {
        cout << "Sorry, Wala kang choice, makikipag-data ka talaga :> " << endl;
        cin.ignore();
        cin.get();
        system("cls");
        do {
            menu();
            cout << "Do you want to select another category? (Y/N)" << endl;
            cin >> choice;
            system("cls");
        } while (choice == 'Y' || choice == 'y');
    }
    else {
        cout << "Invalid choice. Please enter only Y or N." << endl;
    }

    return 0;
}