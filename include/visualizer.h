//
// Created by zed31 on 30/01/2020.
//

#ifndef COOK_VISUALIZER_H
#define COOK_VISUALIZER_H

#include "recipe.h"

class Vizualizer {
    friend class Recipe;
public:
    Vizualizer(const Recipe& recipe);
    void vizualize();
private:
    Recipe recipe;
};

#endif //COOK_VISUALIZER_H
