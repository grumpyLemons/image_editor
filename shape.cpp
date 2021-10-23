#include "shape.h"

void Editor::Shape::translate(Math::Vector2 vector) {

}

void Editor::Shape::rotate() {

}

void Editor::Shape::scale() {

}

void Editor::Triangle::translate() {

}

void Editor::Triangle::rotate() {
    Shape::rotate();
}

void Editor::Triangle::scale() {
    Shape::scale();
}

void Editor::Rectangle::translate() {

}

void Editor::Rectangle::rotate() {
    Shape::rotate();
}

void Editor::Rectangle::scale() {
    Shape::scale();
}

void Editor::Circle::translate() {

}

void Editor::Circle::rotate() {
    Shape::rotate();
}

void Editor::Circle::scale() {
    Shape::scale();
}

Editor::Shape* Editor::ShapeFactory::create(std::String arguments) {
    return nullptr;
}
