#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>

#include "commands.h"
#include "shape.h"


namespace Editor {
    class Invoker final{
    public:
        void addShape(std::string name, Shape* shape);
        void execute(std::string shapeName, Command* command);
        void revert();
    private:
        std::unordered_map<std::string, Shape*>m_shapes;
        std::vector<Command*> m_commands;
    };

    class ShapeReader final{
    public:
        ShapeReader() = default;
        std::vector<ShapeTemplate> processInput();
    private:
        std::ifstream file;
    };

    class CommandReader final{
    public:
        CommandReader() = default;
        std::vector<Command> processInput();
    private:
        std::ifstream file;
    };
}