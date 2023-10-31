#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;


void Create(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        r[i] = rand();
}
int Sum(int* r, const int size, double k, double b) {
    int z = 0;
    int n = 0;
    for (int i = 0; i < size; i++) {
        if (r[i] > k) {
            n = i;
            k = r[i];
        }
    }
    b = r[0];
    for (int i = 0; i < size; i++) {
        if (r[i] < b) {
            z = i;
            b = r[i];
        }
    }
    return n+z;
}
void Print(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << r[i] << " ";
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int r[n];

    Create(r, n);
    Print(r, n);
    cout << "Sum: " << Sum(r, n, 0, 0) << endl;

    return 0;
}
