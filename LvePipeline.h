//
// Created by adom3 on 08.10.2024.
//

#ifndef TEST_ENGINE_LVEPIPELINE_H
#define TEST_ENGINE_LVEPIPELINE_H

#include <vector>
#include <string>

namespace lve {
    class LvePipeline {
    public:
        LvePipeline(const std::string& vertFilepath, const std::string& fragFilepath);

    private:
        static std::vector<char> readFile(const std::string& filepath);
        void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath);
    };
}


#endif //TEST_ENGINE_LVEPIPELINE_H
