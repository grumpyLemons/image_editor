#include "math.h"
#include <string>

namespace Editor {
    class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        virtual void translate(Math::Vector2 vector);
        virtual void rotate();
        virtual void scale();
    }

    class Triangle : public Shape {
    public:
        void translate(Math::Vector2 vector) override;
        void rotate() override;
        void scale() override;
    private:
        Math::Vector2 pointA;
        Math::Vector2 pointB;
        Math::Vector2 pointC;

        void translate();
    };
    class Rectangle : public Shape {
    public:
        void translate(Math::Vector2 vector) override;
        void rotate() override;
        void scale() override;
    private:
        Math::Vector2 pointA;
        Math::Vector2 pointC;
    };
    class Circle : public Shape {
    public:
        void translate(Math::Vector2 vector) override;
        void rotate() override;
        void scale() override;
    private:
        Math::Vector2 pointCenter;
        Math::Vector2 pointRadius;
    };


    class ShapeFactory {
    public:
        ShapeFactory() = default;
        ~ShapeFactory() = default;

        Shape* create(std::string arguments);
    };
}