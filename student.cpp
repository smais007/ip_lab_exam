

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Number of students: ";
    cin >> n;

    if(n > 100){
        cout << "Input should be less than or equal to 100" << endl;
        return 0;
    }

    string names[100];
    int attendance[100];
    int present = 0, absent = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter attendance for " << names[i] << " (1 for present, 0 for absent): ";
        cin >> attendance[i];

        if (attendance[i] == 1) {
            present++;
        } else {
            absent++;
        }
    }

    cout << "\nTotal Students: " << n;
    cout << "\nPresent: " << present;
    cout << "\nAbsent: " << absent;

    cout << "\nNames of absent students:\n";
    for (int i = 0; i < n; i++) {
        if (attendance[i] == 0) {
            cout << names[i] << endl;
        }
    }

    return 0;
}