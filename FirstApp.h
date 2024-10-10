//
// Created by adom3 on 08.10.2024.
//

#ifndef TEST_ENGINE_FIRSTAPP_H
#define TEST_ENGINE_FIRSTAPP_H

#include "LveWindow.h"
#include "LvePipeline.h"

namespace lve {
    class FirstApp {
    public:
        void run();
        FirstApp(int width, int height);
    private:
        int width;
        int height;

        LveWindow window{width, height, "Hello Vulkan"};
        LvePipeline lvePipeline{"../shaders/simpleShader.vert.spv", "../shaders/simpleShader.frag.spv"};
    };
}


#endif //TEST_ENGINE_FIRSTAPP_H
