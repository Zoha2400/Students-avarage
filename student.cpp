//Student Report

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int cls[8];
    double result = 0;
    
    cout << "Type the name of the student: ";
    cin >> name;
    
    cout << "Math: ";       cin >> cls[0];
    cout << "Physics: ";    cin >> cls[1];
    cout << "Biology: ";    cin >> cls[2];
    cout << "Chemistry: ";  cin >> cls[3];
    cout << "Drawing: ";    cin >> cls[4];
    cout << "Music: ";      cin >> cls[5];
    cout << "PE: ";         cin >> cls[6];
    cout << "History: ";    cin >> cls[7];
    
    for(int i = 0; i < 8; i++){
        result += cls[i];
    }
    
    cout << "Avarage mark of " << name << " is " << result / 8;
    
    return 0;
}
