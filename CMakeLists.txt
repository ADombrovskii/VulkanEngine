# cmake_minimum_required(VERSION 3.25)
# project(test_engine)
#
# set(CMAKE_CXX_STANDARD 17)
#
# find_package(OpenGL REQUIRED)
# find_package(GLUT REQUIRED)
#
# add_executable(test_engine main.cpp)
#
# target_link_libraries(test_engine ${OPENGL_LIBRARIES})
# target_link_libraries(test_engine ${GULT_LIBRARIES})
# target_link_libraries(test_engine -lopengl32 -g -lfreeglut)

# cmake_minimum_required(VERSION 3.25)
# project(test_engine)
#
# set(CMAKE_CXX_STANDARD 17)
#
# include_directories(C:/glut-3.7/include)
# link_directories(C:/glut-3.7/lib)
#
# add_executable(test_engine main.cpp)
#
# target_link_libraries(test_engine -lopengl32 -lglu32 -lglut32)

cmake_minimum_required(VERSION 3.25)
project(test_engine)

set(CMAKE_CXX_STANDARD 17)

include_directories("C:/3dengine/VulkanSDK/1.3.290.0/Include")
include_directories("C:/3dengine/glm-1.0.1/glm-1.0.1")
include_directories("C:/3dengine/glfw-3.4.bin.WIN64/include")

link_directories("C:/3dengine/VulkanSDK/1.3.290.0/Lib")
link_directories("C:/3dengine/glfw-3.4.bin.WIN64/lib-mingw-w64")

add_executable(test_engine main.cpp LveWindow.cpp LveWindow.h FirstApp.cpp FirstApp.h LvePipeline.cpp LvePipeline.h)

target_link_libraries(test_engine "C:/3dengine/glfw-3.4.bin.WIN64/lib-mingw-w64/libglfw3.a")
target_link_libraries(test_engine "C:/3dengine/VulkanSDK/1.3.290.0/Lib/vulkan-1.lib")
