#pragma once
#include "use_opencv.h"

void IppInverse(cv::InputArray src, cv::OutputArray dst);
void IppBrightness(cv::InputArray src, cv::OutputArray dst, int value);