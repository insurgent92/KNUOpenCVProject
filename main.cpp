#include "use_opencv.h"
#include "ProcessImage.h"

using namespace cv;

int main(int, char)
{
	Mat inputImage = imread("./sampleImages/boys2.bmp",CV_LOAD_IMAGE_GRAYSCALE);	//load
	Mat outputImage;

	//IppInverse(inputImage, outputImage);
	IppBrightness(inputImage, outputImage, 100);	//process

	namedWindow("input", 1);
	imshow("input", inputImage);

	namedWindow("output", 1);
	imshow("output", outputImage);			//show result

	imwrite("output.bmp", outputImage);		//saveBMP

	waitKey();
	return 0;
}