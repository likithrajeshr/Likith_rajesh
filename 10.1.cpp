#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write three student records
    ofstream out("students.txt");

    if (!out) {
        cerr << "cannot open for write\n";
        return 1;
    }

    out << "Asha 91\n";
    out << "Ravi 78\n";
    out << "Meera 88\n";

    out.close();

    // Read records and calculate average
    ifstream in("students.txt");

    if (!in) {
        cerr << "cannot open for read\n";
        return 1;
    }

    string name;
    int marks, total = 0, count = 0;

    while (in >> name >> marks) {
        cout << name << " scored " << marks << endl;
        total += marks;
        ++count;
    }

    if (count)
        cout << "Average = " << (double)total / count << endl;

    return 0;
}
