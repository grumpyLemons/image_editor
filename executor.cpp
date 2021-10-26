#include "executor.h"

void Editor::Invoker::addShape(std::string name, Editor::Shape* shape) {
    m_shapes[name] = shape;
}

void Editor::Invoker::execute(std::string shapeName, Editor::Command* command) {
    if(!shapeName.empty()) {
        command->addShape(m_shapes[shapeName]);
    }
    else {
        for (auto&& [name, shape] : m_shapes) {
            command->addShape(shape);
        }
    }
}

void Editor::Invoker::revert() {
    m_commands.back() -> revert();
    m_commands.pop_back();
}
