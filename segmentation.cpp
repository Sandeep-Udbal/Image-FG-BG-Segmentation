#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    // Load input image
    Mat image = imread("image-asset.jpeg");
    if (image.empty())
    {
        cout << "Could not load image!" << endl;
        return -1;
    }

    // Initialize the mask
    Mat mask(image.size(), CV_8UC1, Scalar(GC_BGD));

    // Define rectangle around the object (user can adjust as needed)
    Rect rect(50, 50, image.cols - 100, image.rows - 100); // Example ROI

    Mat bgModel, fgModel;

    // Apply GrabCut
    grabCut(image, mask, rect, bgModel, fgModel, 5, GC_INIT_WITH_RECT);

    // Create binary masks for foreground and background
    Mat foregroundMask = (mask == GC_FGD) | (mask == GC_PR_FGD);
    Mat backgroundMask = (mask == GC_BGD) | (mask == GC_PR_BGD);

    // Create images with only foreground and background
    Mat foreground(image.size(), CV_8UC3, Scalar(0, 0, 0));
    Mat background(image.size(), CV_8UC3, Scalar(0, 0, 0));

    image.copyTo(foreground, foregroundMask); // Only foreground
    image.copyTo(background, backgroundMask); // Only background

    // Show images
    imshow("Original Image", image);
    imshow("Foreground Only", foreground);
    imshow("Background Only", background);

    // Optionally save results
    imwrite("foreground_output.jpg", foreground);
    imwrite("background_output.jpg", background);

    waitKey(0);
    return 0;
}
