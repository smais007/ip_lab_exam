#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter integers (0 to stop): ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        if (num > 0) {
            sum += num;
        }
    }

    cout << "Sum of positive numbers = " << sum << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int count = 0;

    cout << "Enter a word (max 100 characters): ";
    cin >> word;

    for (char ch : word) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    cout << "Number of vowels = " << count << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

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