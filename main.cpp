
#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    string ownerName;
    string carNumber;
    string phone;
    string entryTime;
};

int main() {
    Car car[100];
    int totalCars = 0;
    int choice;

    while (true) {
        cout << "\n===== CAR PARKING SYSTEM =====\n";
        cout << "1. Car Enter\n";
        cout << "2. Car Exit\n";
        cout << "3. Show Parked Cars\n";
        cout << "4. Total Cars\n";
        cout << "5. Exit Program\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nEnter owner name: ";
            cin >> car[totalCars].ownerName;

            cout << "Enter car number: ";
            cin >> car[totalCars].carNumber;

            cout << "Enter phone number: ";
            cin >> car[totalCars].phone;

            cout << "Enter entry time: ";
            cin >> car[totalCars].entryTime;

            totalCars++;

            cout << "Car entered successfully!\n";
        }

        else if (choice == 2) {
            string number;
            cout << "\nEnter car number: ";
            cin >> number;

            bool found = false;

            for (int i = 0; i < totalCars; i++) {
                if (car[i].carNumber == number) {
                    for (int j = i; j < totalCars - 1; j++) {
                        car[j] = car[j + 1];
                    }

                    totalCars--;
                    found = true;

                    cout << "Car exited successfully!\n";
                    break;
                }
            }

            if (!found) {
                cout << "Car not found!\n";
            }
        }

        else if (choice == 3) {
            if (totalCars == 0) {
                cout << "\nNo cars are currently parked.\n";
            }
            else {
                cout << "\n===== PARKED CARS =====\n";

                for (int i = 0; i < totalCars; i++) {
                    cout << "\nCar " << i + 1 << endl;
                    cout << "Owner: " << car[i].ownerName << endl;
                    cout << "Car Number: " << car[i].carNumber << endl;
                    cout << "Phone: " << car[i].phone << endl;
                    cout << "Entry Time: " << car[i].entryTime << endl;
                }
            }
        }

        else if (choice == 4) {
            cout << "\nTotal cars currently parked: " << totalCars << endl;
        }

        else if (choice == 5) {
            cout << "Program ended.\n";
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}

