#include <iostream>
#include <string>

struct CityTemperature {
    char city[100];
    double monday;
    double tuesday;
    double wednesday;
    double thursday;
    double friday;
    double saturday;
    double sunday;
};

int main() {
    CityTemperature cityTemp;

    std::cout << "Enter City: ";
    std::cin.getline(cityTemp.city, 100);

    std::cout << "Enter temperature for Monday to Sunday:\n";
    std::cin >> cityTemp.monday >> cityTemp.tuesday >> cityTemp.wednesday
             >> cityTemp.thursday >> cityTemp.friday >> cityTemp.saturday >> cityTemp.sunday;

    double average = (cityTemp.monday + cityTemp.tuesday + cityTemp.wednesday +
                      cityTemp.thursday + cityTemp.friday + cityTemp.saturday + cityTemp.sunday) / 7.0;

    std::cout << "Average temperature in " << cityTemp.city << " is: " << average << std::endl;

    return 0;
}   