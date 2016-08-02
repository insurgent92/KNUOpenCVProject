#include "ProcessImage.h"

using namespace cv;

void IppInverse(InputArray src, OutputArray dst)
{
	Mat retArray;
	src.copyTo(retArray);

	TypedMat<unsigned char> pSrc; 
	pSrc.Attach(retArray);


	for (int j = 0; j < retArray.rows; j++)
		for (int i = 0; i < retArray.cols; i++)
		{
			pSrc[j][i] = 255 - pSrc[j][i];
		}	

	retArray.copyTo(dst);
}

void IppBrightness(cv::InputArray src, cv::OutputArray dst, int value){

	Mat retArray;
	src.copyTo(retArray);

	TypedMat<unsigned char> pSrc;
	pSrc.Attach(retArray);


	for (int j = 0; j < retArray.rows; j++)
		for (int i = 0; i < retArray.cols; i++)
		{
			pSrc[j][i] = saturate_cast<unsigned char>(pSrc[j][i] + value);	  // saturate_cast<unsigned char> : limit range(0-255)
		}

	retArray.copyTo(dst);
}