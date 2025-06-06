
# Image Segmentation using GrabCut Algorithm (C++ & OpenCV)

This project demonstrates how to use the GrabCut algorithm in C++ with OpenCV to segment the foreground and background in an image.

---

## 🧠 Overview

The GrabCut algorithm is an efficient method for foreground-background segmentation in images. This C++ program:
- Loads an input image
- Defines a rectangular Region of Interest (ROI)
- Applies the GrabCut algorithm to distinguish foreground from background
- Saves and displays the segmented foreground and background images

---

## 🧰 Dependencies

Make sure the following dependencies are installed:

- OpenCV (version 3.0 or above)
- C++ compiler (like g++, clang)
- CMake (if building using CMakeLists)

---

## 📁 File Structure

```
├── segmentation.cpp                   # Main source code
├── test.jpeg           # Input image file
├── foreground_output.jpg      # Output image with only foreground
├── background_output.jpg      # Output image with only background
```

---

## ▶️ How to Run

### 1. Compile the Program

Use the following command in terminal (Linux/Mac) or CMD (Windows):

```
g++ segmentation.cpp -o segmentation -I"C:\Desktop\opencv\build\include" -L"C:\Desktop\opencv\build\x64\vc16\lib" -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc

```

> If you're using OpenCV 3, use `opencv` instead of `opencv4`.

### 2. Run the Program

```
./segmentation
```

Make sure that `test.jpeg` is present in the same directory as the executable.

---

## 🖼️ Output Summary

After running the program, three windows will open:
- Original Image
- Foreground Only
- Background Only

Additionally, two image files are saved:
- `foreground_output.jpg` — Only the segmented object is shown (black background)
- `background_output.jpg` — Background shown without the main object

---

## 📌 Notes

- You can change the rectangle dimensions in the code to better fit the object in your image.
- This is a basic implementation for demonstration purposes and can be extended for use with user-defined masks or touch-based input for better accuracy.

---

## 👨‍💻 Author

- Developed by: Sandeep Udbal 
- Department of Electronics & Communication  
- AMC Engineering College


