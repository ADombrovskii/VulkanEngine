//
// Created by adom3 on 08.10.2024.
//

#include "FirstApp.h"

void lve::FirstApp::run() {
    while (!window.shouldClose()) {
        glfwPollEvents();
    }
}

lve::FirstApp::FirstApp(int width, int height) : width{width}, height{height} {}
