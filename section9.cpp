#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    high_resolution_clock::time_point start = high_resolution_clock::now();
    cout << endl;

    int num{};
    const int min{10};
    const int max{100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num > 10)
    {
        cout << "\n============= If statement 1 =============" << endl;
        cout << num << " is greater than " << min << endl;

        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max)
    {
        cout << "\n============= If statement 2 =============" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    // Clock
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(stop - start);
    cout << endl;
    cout << "Execution Time: " << time_span.count() << " seconds" << endl;

    return 0;
}