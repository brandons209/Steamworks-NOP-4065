/*
 * Vision.cpp
 *
 *  Created on: Jan 11, 2017
 *      Author: NerdsOfPrey
 */

#include <VisionClasses/Vision.h>


Vision::Vision() {

}

void Vision::createThread(){
	std::promise<std::vector<std::vector<cv::Point> > > outputValues;
	std::future<std::vector<std::vector<cv::Point> > > result_future = outputValues.get_future();
	//std::thread vThread(&Vision::VisionThread, std::move(outputValues));
	//vThread.detach();

	//visionOutput = result_future.get();

}

cv::Mat Vision::connectLine(cv::Mat img, cv::Point start, cv::Point end){

	  int thickness = 2;
	  int lineType = 8;
	  cv::line( img,
	        start,
	        end,
	        cv::Scalar( 0, 0, 255 ),
	        thickness,
	        lineType );
	 return img;
}

void Vision::VisionThread(std::promise<std::vector<std::vector<cv::Point> > > outputValues){

	grip::GripPipeline *visionProcessor = new grip::GripPipeline();

	//std::vector<std::vector<cv::Point> > * outputValues;

	//std::cout << "check" << std::endl;//
	cs::CvSink cvSink = CameraServer::GetInstance()->GetVideo();
	//std::cout << "check1" << std::endl;
	cs::CvSource outputStream = CameraServer::GetInstance()->PutVideo("Output Contours", 640, 480);
	//std::cout << "check2" << std::endl;
	cv::Mat source;
	//std::cout << "check3" << std::endl;

	cv::Mat *output;

	while(true){
		//std::cout << "check4" << std::endl;
		cvSink.GrabFrame(source);
		//std::cout << "check5" << std::endl;
		visionProcessor->process(source);//crashes code
		//std::cout << "check6" << std::endl;
		output =  visionProcessor->gethsvThresholdOutput();
		//std::cout << "check7" << std::endl;
		outputStream.PutFrame(*output);
		//std::cout << "check8" << std::endl;
		outputValues.set_value(*visionProcessor->getfilterContoursOutput());
		//std::cout << "check9" << std::endl;


	}

}



void Vision::processVision(){
	grip::GripPipeline *visionProcessor = new grip::GripPipeline();

	//std::cout << "check" << std::endl;//
	cs::CvSink cvSink = CameraServer::GetInstance()->GetVideo();
	//std::cout << "check1" << std::endl;
	//cs::CvSource outputStream = CameraServer::GetInstance()->PutVideo("Output Box", 640, 480);
	//std::cout << "check2" << std::endl;
	cv::Mat source;
	//std::cout << "check3" << std::endl;
	//cv::Mat *output;
	//std::cout << "check4" << std::endl;
	cvSink.GrabFrame(source);
	//std::cout << "check5" << std::endl;

	visionProcessor->process(source);
	//std::cout << "check6" << std::endl;
	visionOutput = *visionProcessor->getfilterContoursOutput();

	//output =  visionProcessor->gethsvThresholdOutput();

	//outputStream.PutFrame(*output);
	//std::cout << "check8" << std::endl;
	//std::cout << "check9" << std::endl;
}
