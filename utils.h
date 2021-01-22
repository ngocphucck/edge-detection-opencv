#ifndef EDGE_OF_BOOK_UTILS_H
#define EDGE_OF_BOOK_UTILS_H

#endif


#include "opencv2/imgproc.hpp"
#include <vector>


using namespace std;
using namespace cv;


Mat histogram_equalization(Mat src);

Mat gaussian_blur(Mat src, int kernel_size = 3);

int discover_median(vector<int> list);

Mat dilation(Mat src, pair<int, int> shape);

pair<int, int> get_element_structure_shape(Mat src, int min_thresh, int max_thresh);

vector<Point> hough_line_transform(Mat src, Mat draw);

void direction(Mat src, vector<Point> vertexes);

void scan(const char* path_to_image);