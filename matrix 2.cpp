#include <iostream>
using namespace std;
int main() {
 int r, c, n;
 cout << "How many rows? ";
 cin >> r;
 cout << "How many columns? ";
 cin >> c;
 cout << "=====================================" << endl;
n = r * c;
int arr[n];
cout << "Input " << n << " numbers:" << endl;
for(int i = 0; i < n; i++) cin >> arr[i];
cout << "=====================================" << endl;
cout << r << "X" << c << " Matrix\n" << endl;
int k = 0;
for(int i = 1; i <= r; i++) {
    for(int j = 0; j < c; j++) {
        cout << arr[k] << "     ";
        k++;
    } 
    cout << endl;
}
cout << "=====================================" << endl;
cout << c << "X" << r << " Matrix\n" << endl;
k = 0;
for(int i = 1; i <= c; i++) {
    for(int j = 0; j < r; j++) {
        cout << arr[k] << "     ";
        k++;
    } 
    cout << endl;
}
cout << "=====================================" << endl;
 return 0;
}
