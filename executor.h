#include <vector>
#include <string>
#include <unordered_map>

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
}