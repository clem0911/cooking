//
// Created by zed31 on 30/01/2020.
//

#include <iostream>
#include "visualizer.h"

Vizualizer::Vizualizer(const Recipe &recipe) : recipe{recipe} {}

void Vizualizer::vizualize() {
    std::cout << recipe.recipeName << std::endl;
    std::cout << recipe.recipeSubTitle << std::endl;
    for (auto it = recipe.ingredients.begin(); it != recipe.ingredients.end(); ++it) {
        std::cout << *it << std::endl;
    }
}
