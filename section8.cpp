#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    high_resolution_clock::time_point start = high_resolution_clock::now();
    cout << endl;

    cout << "Enter a number of cents: ";
    int num_cents{0};
    cin >> num_cents;

    cout << endl;
    cout << "dollars  : " << num_cents / 100 << endl;
    num_cents %= 100;
    cout << "quarters : " << num_cents / 25 << endl;
    num_cents %= 25;
    cout << "dimes    : " << num_cents / 10 << endl;
    num_cents %= 10;
    cout << "nickels  : " << num_cents / 5 << endl;
    num_cents %= 5;
    cout << "pennies  : " << num_cents << endl;

    // Clock
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(stop - start);
    cout << endl;
    cout << "Execution Time: " << time_span.count() << " seconds" << endl;

    return 0;
}