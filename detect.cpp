#include <iostream>
#include <chrono>
#include "utils.h"


using namespace std;
using namespace cv;
using namespace std::chrono;


int main()
{
    // Read image from my computer
    const char* IMAGE_PATH = "D:/Documents/Programming/EdgeDetection/data/picture.png";    
    auto start = steady_clock::now();
    scan(IMAGE_PATH);
    auto end = steady_clock::now();
    duration<double> elapsed_seconds = end - start;
    cout << "Elapsed seconds: " << elapsed_seconds.count() << endl;
}