#include "commands.h"

void Editor::Command::execute() {

}

void Editor::Command::revert() {

}

void Editor::Command::addShape(Editor::Shape* shape) {

}

void Editor::Translate::execute() {
    Command::execute();
}

void Editor::Translate::revert() {
    Command::revert();
}

void Editor::Scale::execute() {
    Command::execute();
}

void Editor::Scale::revert() {
    Command::revert();
}

void Editor::Rotate::execute() {
    Command::execute();
}

void Editor::Rotate::revert() {
    Command::revert();
}
