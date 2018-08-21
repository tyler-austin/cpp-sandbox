#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    high_resolution_clock::time_point start = high_resolution_clock::now();
    cout << endl;


    // Clock
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(stop - start);
    cout << endl;
    cout << "Execution Time: " << time_span.count() << " seconds" << endl;

    return 0;
}