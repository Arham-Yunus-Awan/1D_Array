#include <iostream>
#include <string>
using namespace std;
int main() {
    // Finding number of elements in a array
    
    // string first_names[] = {"Arham", "Ahmad", "Atif"};
    // int size_of_an_array_item = sizeof(first_names[0]);
    // int array_size = sizeof(first_names) / size_of_an_array_item;
    
    
    int number_of_items;
    cout << "Enter the amount of enteries you have got: ";
    cin >> number_of_items;
    
    // Declare empty arrays to take input by user
    string first_names[number_of_items], last_names[number_of_items];
    int roll_numbers[number_of_items];
    
    for (int i = 0; i < number_of_items; i++) {
        cout << "Enter the first name of student " << i + 1 << ": ";
        cin >> first_names[i];
        
        cout << "Enter the last name of student " << i + 1 << ": ";
        cin >> last_names[i];
        
        cout << "Enter the roll number of student " << i + 1 << ": ";
        cin >> roll_numbers[i];
    }
    cout << "Here is the final data: \n";
    cout << "Roll No. \t First Name \t Last Name\n";
    for (int j = 0; j < number_of_items; j++) {
        cout << roll_numbers[j] << "\t\t" << first_names[j] << "\t\t" << last_names[j] << endl;
    }
    cout << "_________________________________________";

    return 0;
}
