#include <iostream>
#include <cstring>

struct address {
    char Name[240];
    char Country[240];
    char DOB[240];
    char Dateofdabut[240];
    char Category[240];
    int TotalScores;
    int BestScore;
    int TotalWickets;
    int BestWicketfigure;
    int TotalOverBowled;
    int TotalScoresgiven;
    struct address* next;
    struct address* prior;
};

struct address* start;
struct address* last;

struct address* find(char*);

void enter(void), search(void), save(void);
void load(void), list(void);
void mldelete(struct address**, struct address**);
void dls_store(struct address* i, struct address** start, struct address** last);
void inputs(const char*, char*, size_t), display(struct address*);
int menu_select(void);

int main() {
    start = last = nullptr;
    for (;;) {
        switch (menu_select()) {
            case 1:
                enter();
                break;
            case 2:
                mldelete(&start, &last);
                break;
            case 3:
                list();
                break;
            case 4:
                search();
                break;
            case 5:
                save();
                break;
            case 6:
                load();
                break;
            case 7:
                exit(0);
        }
    }
    return 0;
}

int menu_select() {
    char s[80];
    int c;
    std::cout << "1. Enter player\n";
    std::cout << "2. Delete player\n";
    std::cout << "3. Display the contents of the list\n";
    std::cout << "4. Search\n";
    std::cout << "5. Save to file\n";
    std::cout << "6. Load from file\n";
    std::cout << "7. Exit\n";
    do {
        std::cout << "\nYour choice: ";
        std::cin.getline(s, 80);
        c = atoi(s);
    } while (c < 0 || c > 7);
    return c;
}

void enter() {
    struct address* info;
    for (;;) {
        info = new address;
        if (!info) {
            std::cout << "\nNo free memory!";
            return;
        }
        inputs("Enter name: ", info->Name, 240);
        if (!info->Name[0]) break;
        inputs("Enter Country: ", info->Country, 240);
        inputs("Enter DOB: ", info->DOB, 240);
        inputs("Enter Date of dabut: ", info->Dateofdabut, 3);
        inputs("Enter Category: ", info->Category, 240);
        dls_store(info, &start, &last);
    }
}

void inputs(const char* prompt, char* s, size_t count) {
    char p[255];
    do {
        std::cout << prompt;
        std::cin.getline(p, 254);
        if (strlen(p) > static_cast<int>(count)) std::cout << "\nLine is too long!\n";
    } while (strlen(p) > static_cast<int>(count));
    p[strlen(p) - 1] = 0;
    strcpy(s, p);
}

void dls_store(struct address* i, struct address** start, struct address** last) {
    struct address* old, * p;
    if (*last == nullptr) {
        i->next = nullptr;
        i->prior = nullptr;
        *last = i;
        *start = i;
        return;
    }
    p = *start;
    old = nullptr;
    while (p) {
        if (strcmp(p->Name, i->Name) < 0) {
            old = p;
            p = p->next;
        }
        else {
            if (p->prior) {
                p->prior->next = i;
                i->next = p;
                i->prior = p->prior;
                p->prior = i;
                return;
            }
            i->next = p;
            i->prior = nullptr;
            p->prior = i;
            *start = i;
            return;
        }
    }
    old->next = i;
    i->next = nullptr;
    i->prior = old;
    *last = i;
}

void mldelete(struct address** start, struct address** last) {
    struct address* info;
    char s[80];
    inputs("Enter Name: ", s, 30);
    info = find(s);
    if (info) {
        if (*start == info) {
            *start = info->next;
            if (*start) (*start)->prior = nullptr;
            else *last = nullptr;
        }
        else {
            info->prior->next = info->next;
            if (info != *last) info->next->prior = info->prior;
            else *last = info->prior;
        }
        delete info;
    }
}

struct address* find(char* name) {
    struct address* info;
    info = start;
    while (info) {
        if (!strcmp(name, info->Name)) return info;
        info = info->next;
    }
    std::cout << "Name not found.\n";
    return nullptr;
}

void list() {
    struct address* info;
    info = start;
    while (info) {
        display(info);
        info = info->next;
    }
    std::cout << "\n\n";
}

void display(struct address* info) {
    std::cout << info->Name << std::endl;
    std::cout << info->Country << std::endl;
    std::cout << info->DOB << std::endl;
    std::cout << info->Dateofdabut << std::endl;
    std::cout << info->Category << std::endl;
    std::cout << "\n\n";
}

void search() {
    char name[40];
    struct address* info;
    std::cout << "Enter Name: ";
    std::cin.getline(name, 40);
    info = find(name);
    if (!info) std::cout << "Not found!\n";
    else display(info);
}

void save() {
    struct address* info;
    FILE* fp;
    fp = fopen("mlist", "wb");
    if (!fp) {
        std::cout << "Is not possible to open the file.\n";
        exit(1);
    }
    std::cout << "\nSave to file\n";
    info = start;
    while (info) {
        fwrite(info, sizeof(struct address), 1, fp);
        info = info->next;
    }
    fclose(fp);
}

void load() {
    struct address* info;
    FILE* fp;
    fp = fopen("mlist", "rb");
    if (!fp) {
        std::cout << "Is not possible to open the file.\n";
        exit(1);
    }
    while (start) {
        info = start->next;
        delete info;
        start = info;
    }
    start = last = nullptr;
    std::cout << "\nDownload file.\n";
    while (!feof(fp)) {
        info = new address;
        if (!info) {
            std::cout << "No free memory";
            return;
        }
        if (1 != fread(info, sizeof(struct address), 1, fp)) break;
        dls_store(info, &start, &last);
    }
    fclose(fp);
}