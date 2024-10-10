//
// Created by adom3 on 08.10.2024.
//

#include "LveWindow.h"

namespace lve {
    LveWindow::LveWindow(int height, int width, std::string window_name) : width{width}, height{height}, window_name{window_name} {
        initWindow();
    }

    LveWindow::~LveWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void LveWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, window_name.c_str(), nullptr, nullptr);
    }
}