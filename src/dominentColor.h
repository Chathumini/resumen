/*
 * dominentColor.h
 *
 *  Created on: Dec 17, 2014
 *      Author: sanjaya
 */

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int largestvalue;
String dominentColor;
void getDominentColor(Mat image){

	//this is a test function

	if (!image.data) {
			cout << "No image data \n";
			//return -1;
		}
		//namedWindow("Display Image");
		//imshow("Display Image", image);

		int rValue = 0;
		int bValue = 0;
		int gValue = 0;

		//take pixel values
			for (int i = 0; i < image.rows; i++) {
				for (int j = 0; j < image.cols; j++) {
					Vec3b pixel = image.at<Vec3b>(i, j);

					//cout << pixel;

					bValue +=pixel.val[0];
					gValue +=pixel.val[1];
					rValue +=pixel.val[2];

				}
			//cout << endl;
			}

			if(bValue>gValue){
				largestvalue = bValue;
				dominentColor = "blue";
			}
			else {
				largestvalue = gValue;
				dominentColor = "green";
			}
			if(rValue>largestvalue){
				largestvalue = rValue;
				dominentColor  = "red";
			}

		cout<< dominentColor<<endl;

		waitKey(0);



}


