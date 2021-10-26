#include "math.h"
#include <string>

namespace Editor {
    class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        virtual void translate(Math::Vector2 vector);
        virtual void rotate(float angle);
        virtual void scale(Math::Vector2 vector);
    }

    class Triangle : public Shape {
    public:
        void translate(Math::Vector2 vector) override;
        void rotate(float angle) override;
        void scale(Math::Vector2 vector) override;
    private:
        Math::Vector2 pointA;
        Math::Vector2 pointB;
        Math::Vector2 pointC;

        void translate();
    };
    class Rectangle : public Shape {
    public:
        void translate(Math::Vector2 vector) override;
        void rotate(float angle) override;
        void scale(Math::Vector2 vector) override;
    private:
        Math::Vector2 pointA;
        Math::Vector2 pointC;
    };
    class Circle : public Shape {
    public:
        void translate(Math::Vector2 vector) override;
        void rotate(float angle) override;
        void scale(Math::Vector2 vector) override;
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