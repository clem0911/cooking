//
// Created by zed31 on 30/01/2020.
//

#ifndef COOK_RECIPE_H
#define COOK_RECIPE_H

#include <vector>
#include <string>

class Recipe {
public:
    Recipe(const std::string& recipeName, const std::string& recipeSubTitle);
public:
    void insertIngredient(const std::string& ingredient);
public:
    std::string recipeName;
    std::string recipeSubTitle;
    std::vector<std::string> ingredients;
};

#endif //COOK_RECIPE_H
