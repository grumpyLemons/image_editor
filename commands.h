#pragma once
#include "shape.h"
#include <vector>

namespace Editor {
    class Command {
    public:
        Command() = default;
        ~Command() = default;
        virtual void execute() = 0;
        virtual void revert() = 0;
        void addShape(Shape* shape);
    protected:
        std::vector<Shape*> m_shapes;
    };

    class Translate : public Command {
    public:
        Translate(Math::Vector2 d) : direction(d) {};
        ~Translate() = default;
        void execute() override;
        void revert() override;
    private:
        Math::Vector2 direction;
    };
    class Scale : public Command {
    public:
        Scale(Math::Vector2 a) : axes(a) {};
        ~Scale() = default;
        void execute() override;
        void revert() override;
    private:
        Math::Vector2 axes;
    };
    class Rotate : public Command {
    public:
        Rotate(float a) : angle(a) {};
        ~Rotate() = default;
        void execute() override;
        void revert() override;
    private:
        float angle;
    };

}