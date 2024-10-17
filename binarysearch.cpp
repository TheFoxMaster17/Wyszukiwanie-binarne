#include<iostream>
using namespace std;

int finder(int xyz) {
    int table[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int left = 0;
    int right = 14;
    int middle = (left + right) / 2;
    
    if (xyz < left || xyz > right) {
        return -1;
    }
    while (xyz != table[middle]) {
        if (xyz < table[middle]) {
            right = middle;
            middle = (left + right) / 2;
        } else if (xyz > table[middle]) {
            left = middle;
            middle = (left + right) / 2;
        }
    }
    return middle;
    
}

int main()
{
    int zyx;
    cout << "write a number and we'll check if it's in the table: ";
    cin >> zyx;
    cout << "here's the location of the number (if it says -1, then the number isn't in the table): " << finder(zyx);
}