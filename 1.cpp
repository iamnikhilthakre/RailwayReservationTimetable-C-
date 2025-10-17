#include <iostream>
using namespace std;

class Train
{
private:
    int TrainNumber;
    string TrainName;
    string Source;
    string Destination;
    int TrainTime;

public:
    Train()
    {
        TrainNumber = 0;
        TrainName = "";
        Source = "";
        Destination = "";
        TrainTime = 0;
    }
    Train(int number, string name, string source, string destination, int time)
    {
        TrainNumber = number;
        TrainName = name;
        Source = source;
        Destination = destination;
        TrainTime = time;
    }
    Train(const Train &t)
    {
        TrainNumber = t.TrainNumber;
        TrainName = t.TrainName;
        Source = t.Source;
        Destination = t.Destination;
        TrainTime = t.TrainTime;
    }
    void input()
    {
        cout << "Enter the train number: ";
        cin >> TrainNumber;

        cin.ignore();
        cout << "Enter the train name: ";
        getline(cin, TrainName);

        // cin.ignore();
        cout << "Enter the source: ";
        getline(cin, Source);

        // cin.ignore();
        cout << "Enter the destination: ";
        getline(cin, Destination);

        cout << "Enter the time of departure (e.g., 1330): ";
        cin >> TrainTime;
    }
    void output()
    {
        cout << "\nTrain Number: " << TrainNumber << endl;
        cout << "Train Name: " << TrainName << endl;
        cout << "Source: " << Source << endl;
        cout << "Destination: " << Destination << endl;
        cout << "Departure Time: " << TrainTime << endl;
    }
    int getTrainNumber()
    {
        return TrainNumber;
    }
};

int main()
{
    Train t1;
    Train t2;
    Train t3 = t2;
    const int numTrains = 3;

    Train trains[numTrains] = {t1, t2, t3};

    for (int i = 0; i < numTrains; i++)
    {
        cout << "\nEnter details for Train " << i + 1 << ":\n";
        trains[i].input();
    }

    cout << "\nDisplaying Train Details:\n";
    for (int i = 0; i < numTrains; i++)
    {
        trains[i].output();
    }

    int searchNumber;
    cout << "\nEnter the train number you want to search: ";
    cin >> searchNumber;

    for (int i = 0; i < numTrains; i++)
    {
        if (trains[i].getTrainNumber() == searchNumber)
        {
            cout << "\nTrain found:\n";
            trains[i].output();
            break;
        }
    }
    return 0;
}