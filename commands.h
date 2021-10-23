#include "shape.h"

namespace Editor {
    class Command {
    public:
        Command() = default;
        ~Command() = default;
        virtual void execute();
        virtual void revert();
        void addShape(Shape* shape);
    };

    class Translate : public Command {
    public:
        Translate() = default;
        ~Translate() = default;
        void execute() override;
        void revert() override;
    };
    class Scale : public Command {
    public:
        Scale() = default;
        ~Scale() = default;
        void execute() override;
        void revert() override;
    };
    class Rotate : public Command {
    public:
        Rotate() = default;
        ~Rotate() = default;
        void execute() override;
        void revert() override;
    };

}