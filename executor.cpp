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


std::vector<Editor::ShapeTemplate> Editor::ShapeReader::processInput() {
    char type;
    std::size_t counter;
    std::string name;
    std::vector<Math::Vector2> points;
    std::vector<ShapeTemplate> shapes;
    file.open("inTest.txt");
    while (file.good()) {
        counter = 0;
        points = {};
        file >> type;
        file >> name;

        if (type == 'r' || type == 'c')
            counter = 2;
        else if (type == 't')
            counter = 3;

        for (int i = 0; i < counter; i++) {
            int x, y;
            file >> x;
            file >> y;
            points.emplace_back(x, y);
        }

        Shape* shape = nullptr;
        if (type == 'r')
            shape = new Rectangle(points[0], points[1]);
        else if (type == 'c')
            shape = new Circle(points[0], points[1]);
        else if (type == 't')
            shape = new Triangle(points[0], points[1], points[2]);
        if (shape != nullptr)
            shapes.emplace_back(name, shape);
    }
}