#pragma once

#include "sve_device.hpp"
#include "sve_game_object.hpp"
#include "sve_renderer.hpp"
#include "sve_window.hpp"

// std
#include <memory>
#include <vector>

namespace sve {
class FirstApp {
   public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

    FirstApp();
    ~FirstApp();

    FirstApp(const FirstApp &) = delete;
    FirstApp &operator=(const FirstApp &) = delete;

    void run();

   private:
    void loadGameObjects();

    SveWindow sveWindow{WIDTH, HEIGHT, "Gravity Vector Field"};
    SveDevice sveDevice{sveWindow};
    SveRenderer sveRenderer{sveWindow, sveDevice};

    std::vector<SveGameObject> gameObjects;
};

}  // namespace sve
