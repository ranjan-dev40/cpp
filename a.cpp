// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
using namespace std;
using namespace std::chrono;

// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function

void ls(vector<int> &a, int key)
{
    for (auto x : a)
        if (x == key)
            return;
    return;
}

int main()
{

    vector<int> values(1000000);

    // Generate Random values
    auto f = []() -> int
    { return rand() % 1000000; };

    // Fill up the vector
    generate(values.begin(), values.end(), f);

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    // Call the function, here sort()
    ls(values, 9999);
    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " nanoseconds" << endl;

    return 0;
}