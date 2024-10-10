//
// Created by adom3 on 08.10.2024.
//

#include "LvePipeline.h"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace lve{
    std::vector<char> LvePipeline::readFile(const std::string &filepath) {
        std::ifstream file(filepath, std::ios::ate | std::ios::binary);

        if (!file.is_open()) {
            throw std::runtime_error("failed to open file: " + filepath);
        }

        size_t fileSize = static_cast<size_t>(file.tellg());
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(), fileSize);

        file.close();
        return buffer;
    }

    void LvePipeline::createGraphicsPipeline(const std::string &vertFilepath, const std::string &fragFilepath) {
        auto vertCode = readFile(vertFilepath);
        auto fragCode = readFile(fragFilepath);

        std::cout << "Vertex shader cod e size is " << vertCode.size() << "\n";
        std::cout << "Fragment shader cod e size is " << fragCode.size() << "\n";
    }

    LvePipeline::LvePipeline(const std::string &vertFilepath, const std::string &fragFilepath) {
        LvePipeline::createGraphicsPipeline(vertFilepath, fragFilepath);
    }
}
