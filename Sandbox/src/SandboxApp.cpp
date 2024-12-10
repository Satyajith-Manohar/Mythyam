#include <Mythyam.h>


class Sandbox : public Mythyam::Application {
public:
    Sandbox() {

    }
    ~Sandbox() {

    }
};

Mythyam::Application* Mythyam::CreateApplication() {
    return new Sandbox();
}