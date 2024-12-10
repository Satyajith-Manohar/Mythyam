#pragma once

#ifdef MT_PLATFORM_WINDOWS

extern Mythyam::Application* Mythyam::CreateApplication();

int main(int argc, char** argv) {
    
    auto app = Mythyam::CreateApplication();
    app->Run();
    delete app;
}

#endif