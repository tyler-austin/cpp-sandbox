#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    high_resolution_clock::time_point start = high_resolution_clock::now();
    cout << endl;

    vector<int> vector1{};
    vector<int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector 1 Size: " << vector1.size() << endl;

    cout << endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Vector 2 Size: " << vector2.size() << endl;

    vector<vector<int>> vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    // Clock
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(stop - start);
    cout << endl;
    cout << "Execution Time: " << time_span.count() << " seconds" << endl;

    return 0;
}