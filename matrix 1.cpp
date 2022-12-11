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
int colSum[c];
for(int i = 0; i < c; i++) colSum[i] = 0;
cout << "Input " << n << " numbers:" << endl;
for(int i = 0; i < n; i++) cin >> arr[i];
cout << "=====================================\n" << endl;
int k = 0;
for(int i = 1; i <= r; i++) {
    int sum = 0;
    for(int j = 0; j < c; j++) {
        cout << arr[k] << "    ";
        sum += arr[k];
        colSum[j] += arr[k];
        k++;
    } 
    cout << "||    " << sum << endl;
    cout << endl;
}
cout << "=================" << endl;
for(int j = 0; j < c; j++) {
   cout << colSum[j] << "    ";
}
return 0;
}
