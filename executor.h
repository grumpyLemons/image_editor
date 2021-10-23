#include <vector>
#include <string>

#include "commands.h"
#include "shape.h"


namespace Editor {
    class Executor final{
    public:
        void addShape(std::String name, Shape* shape);
        void execute(std::String shapeName, Command* command);
        void revert();
    private:
        std::vector<Shape*> m_shapes;
        std::vector<Command*> m_commands;
    };
}