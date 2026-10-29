#include <iostream>
#include <iomanip>

using namespace std;

int main() {
double speed;
    int hours;

    cout << "what is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "many hours has it traveled? ";
    cin >> hours;

    cout << "\nhour       miles traveled" << endl;
    cout << "___________________________" << endl;

    for (int hour = 1; hour <= hours; hour++) {
        double distance = speed * hour;

       cout << left << setw(12) << hour << distance << endl;

    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}