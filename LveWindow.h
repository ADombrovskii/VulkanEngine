//
// Created by adom3 on 08.10.2024.
//

#ifndef TEST_ENGINE_LVEWINDOW_H
#define TEST_ENGINE_LVEWINDOW_H

#include "GLFW/glfw3.h"
#include <string>

namespace lve {
    class LveWindow {
    public:
        LveWindow(int height, int width, std::string window_name);
        ~LveWindow();

        LveWindow(const LveWindow &) = delete;
        LveWindow &operator = (const LveWindow &) = delete;

        bool shouldClose() { return glfwWindowShouldClose(window); }
    private:
        void initWindow();

        int height;
        int width;

        std::string window_name;

        GLFWwindow* window;
    };
}


#endif //TEST_ENGINE_LVEWINDOW_H
