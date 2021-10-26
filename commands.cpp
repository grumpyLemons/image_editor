#include "commands.h"

void Editor::Command::addShape(Editor::Shape* shape) {
    m_shapes.push_back(shape);
}

void Editor::Translate::execute() {
    for (auto* shape : m_shapes) {
        shape->translate(direction);
    }
}

void Editor::Translate::revert() {
    for(auto* shape : m_shapes) {
        shape->translate(Math::Vector2(-direction.X, -direction.Y));
    }
}

void Editor::Scale::execute() {
    for(auto* shape : m_shapes) {
        shape->scale(axes);
    }
}

void Editor::Scale::revert() {
    for(auto* shape : m_shapes) {
        shape->scale(Math::Vector2(1/axes.X, 1/axes.Y));
    }
}

void Editor::Rotate::execute() {
    for(auto* shape : m_shapes) {
        shape->rotate(angle);
    }
}

void Editor::Rotate::revert() {
    for(auto* shape : m_shapes) {
        shape->rotate(-angle);
    }
}
