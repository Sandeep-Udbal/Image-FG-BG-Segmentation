#Foreground and Background Segmentation in an image udinf C++

This project implements foreground-background segmentation on an image using the GrabCut algorithm in C++ with OpenCV. It isolates the object of interest (foreground) from the background, demonstrating an effective computer vision technique.

📌 Problem Statement
Write a C++ program to segment the foreground and background in an image using the GrabCut algorithm.

🧠 Algorithm Used
GrabCut: An iterative graph-based image segmentation technique.

Uses Graph Cuts to optimize segmentation.

Requires an initial bounding box to define the region of interest (ROI).

Iteratively refines foreground and background using Gaussian Mixture Models (GMMs).

✅ Output
Original Image

Extracted Foreground

Extracted Background

Foreground is displayed with a black background to highlight segmentation.

📂 Project Structure
ImageSegmentation/
│
├── grabcut_segmentation.cpp       # Main C++ source code
├── banana.jpg                     # Sample input image
├── README.md                      # Documentation
└── CMakeLists.txt (optional)      # CMake build config
🔧 Dependencies
OpenCV 4.x or later

C++11 or later compiler

⚙️ Build & Run Instructions
🔨 Using g++ (Linux/macOS)

g++ grabcut_segmentation.cpp -o segment `pkg-config --cflags --libs opencv4`
./segment
🪟 Using Visual Studio (Windows)
Include OpenCV headers and link .lib files.

Add OpenCV DLLs to the environment path.

Build and run the project.


