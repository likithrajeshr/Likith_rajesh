#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    // Write student records
    ofstream out("students.txt");

    out << "Asha 91\n";
    out << "Ravi 78\n";
    out << "Meera 88\n";

    out.close();

    // Read records into objects
    ifstream in("students.txt");

    if (!in) {
        cout << "File open failed";
        return 1;
    }

    Student s[100];
    int count = 0;

    while (count < 100 && in >> s[count].name >> s[count].marks) {
        count++;
    }

    // Find topper
    if (count > 0) {
        int maxIndex = 0;

        for (int i = 1; i < count; i++) {
            if (s[i].marks > s[maxIndex].marks) {
                maxIndex = i;
            }
        }

        cout << "Topper: " << s[maxIndex].name << endl;
        cout << "Marks: " << s[maxIndex].marks << endl;
    }

    return 0;
}
