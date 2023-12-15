cmake_minimum_required(VERSION 3.16)

project(example-app)

find_package(Torch REQUIRED)

set(OpenCV_DIR /opt/homebrew/Cellar/opencv/4.8.1_5/lib/cmake/opencv4/)

find_package(OpenCV REQUIRED)

add_executable(example-app example-app.cpp)

target_link_libraries(example-app ${TORCH_LIBRARIES} ${OpenCV_LIBS})
