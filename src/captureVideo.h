/*
 * CaptureVideo.h
 *
 *  Created on: Dec 17, 2014
 *      Author: sanjaya
 */

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int capture(string filename)
{

	    VideoCapture capture(filename);
	    Mat frame;

	    if( !capture.isOpened() )
	        throw "Error when reading steam_mp4";

	    namedWindow( "w", 1);
	    for( ; ; )
	    {
	        capture >> frame;
	        if(frame.empty())
	            break;

////////////////you can use this frame for image processing.///////////

	        imshow("w", frame);


	        waitKey(20); // waits to display frame
	    }
	    waitKey(0); // key press to close window
	    // releases and window destroy are automatic in C++ interface
}

