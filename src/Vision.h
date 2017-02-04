/*
 * Vision.h
 *
 *  Created on: Jan 11, 2017
 *      Author: NerdsOfPrey
 */
#include <WPILib.h>
#include <GripPipeline.h>
#include <thread>
#include <future>
#include <functional>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d.hpp>

#ifndef SRC_VISION_H_
#define SRC_VISION_H_

class Vision {
public:
	Vision();
	void createThread();
	void processVision();
	cv::Mat connectLine(cv::Mat img, cv::Point start, cv::Point end);
	void VisionThread(std::promise<std::vector<std::vector<cv::Point> > > outputValues);

	std::vector<std::vector<cv::Point> > visionOutput;

};

#endif /* SRC_VISION_H_ */
