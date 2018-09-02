#include <iostream>

#include <opencv2/highgui.hpp>

int main(int argc, char* argv[]){
	cv::Mat img;
	img = cv::imread("/home/lihongjie/Pictures/first.png", 1);
	std::cout << img.rows << " " << img.cols << "\n";
	return 0;
}
