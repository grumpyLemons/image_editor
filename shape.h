#pragma once
#include "math.h"
#include <string>

namespace Editor {
    class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        virtual void translate(Math::Vector2 vector) = 0;
        virtual void rotate(float angle) = 0;
        virtual void scale(Math::Vector2 vector) = 0;
    };

    class Triangle : public Shape {
    public:
        Triangle(Math::Vector2 A, Math::Vector2 B, Math::Vector2 C) : pointA(A), pointB(B), pointC(C) {}
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
        Rectangle(Math::Vector2 A, Math::Vector2 C) : pointA(A), pointC(C) {}
        void translate(Math::Vector2 vector) override;
        void rotate(float angle) override;
        void scale(Math::Vector2 vector) override;
    private:
        Math::Vector2 pointA;
        Math::Vector2 pointC;
    };
    class Circle : public Shape {
    public:
        Circle(Math::Vector2 A, Math::Vector2 B) : pointCenter(A), pointRadius(B) {}
        void translate(Math::Vector2 vector) override;
        void rotate(float angle) override;
        void scale(Math::Vector2 vector) override;
    private:
        Math::Vector2 pointCenter;
        Math::Vector2 pointRadius;
    };

    struct ShapeTemplate {
        ShapeTemplate(std::string name, Shape* shape);
        std::string name;
        Shape* shape;
    };


    class ShapeFactory {
    public:
        ShapeFactory() = default;
        ~ShapeFactory() = default;

        Shape* create(std::string arguments);
    };
}