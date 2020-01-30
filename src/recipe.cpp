//
// Created by zed31 on 30/01/2020.
//

#include <string>
#include "recipe.h"

Recipe::Recipe(const std::string &recipeName, const std::string &recipeSubTitle)
: recipeName{recipeName}, recipeSubTitle{recipeSubTitle} {}

void Recipe::insertIngredient(const std::string &ingredient) {
    ingredients.push_back(ingredient);
}

