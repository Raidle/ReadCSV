#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
    string line, token;
    ifstream gust("C:/Users/wrl123u/Desktop/CSV/employees.csv");

    if (gust.is_open()) {
        while (getline(gust, line)) {
            stringstream gustavo(line);
            while (getline(gustavo, token,',')) {
                cout << token << endl;
            }
            cout << endl;
        }
    }
    else {
        cout << "File Connection Failed!" << endl;
    }

    gust.close();
}
