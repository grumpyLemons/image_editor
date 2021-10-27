#include "shape.h"

void Editor::Shape::translate(Math::Vector2 vector) {

}

void Editor::Shape::rotate(float angle) {
}

void Editor::Shape::scale(Math::Vector2 vector) {

}

void Editor::Triangle::translate(Math::Vector2 vector) {

}

void Editor::Triangle::rotate(float angle) {
}

void Editor::Triangle::scale(Math::Vector2 vector) {
}

void Editor::Rectangle::translate(Math::Vector2 vector) {

}

void Editor::Rectangle::rotate(float angle) {

}

void Editor::Rectangle::scale(Math::Vector2 vector) {
}

void Editor::Circle::translate(Math::Vector2 vector) {

}

void Editor::Circle::rotate(float angle) {
}

void Editor::Circle::scale(Math::Vector2 vector) {
    pointRadius = vector;
}

Editor::Shape* Editor::ShapeFactory::create(std::string arguments) {
    return nullptr;
}
