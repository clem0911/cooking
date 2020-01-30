//
// Created by zed31 on 29/01/2020.
//
#include <iostream>
#include "recipe.h"
#include "visualizer.h"

int main(int argc, char** argv) {
    std::cout << "its ok" << std::endl;
    Recipe rcp{"name", "subtitle"};
    rcp.insertIngredient("kebab");
    //Vizualizer vizualizer{rcp};
    //vizualizer.vizualize();
    return EXIT_SUCCESS;
}
