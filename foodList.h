#ifndef FOODLIST_H
#define FOODLIST_H

//Including header files
#include <string>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <sstream>
//Struct for a single food item
struct FoodItem {
    std::string description;
    int nutrient_data_bank_number;
    int alpha_carotene;
    int beta_carotene;
    int beta_ryptoxanthin;
    float carbohydrate;
    int cholesterol;
    float choline;
    float fiber;
    int lutein_zeaxanthin;
    int lycopene;
    float niacin;
    float protein;
    int retinol;
    float riboflavin;
    float selenium;
    float sugar_total;
    float thiamin;
    float water;
    float fat_monosaturated;
    float fat_polysaturated;
    float fat_saturated;
    float fat_total_lipid;
    int calcium;
    float copper;
    float iron;
    int magnesium;
    int phosphorus;
    int potassium;
    int sodium;
    float zinc;
    int vitamins_a_rae;
    float vitamins_b12;
    float vitamins_b6;
    float vitamins_c;
    float vitamins_e;
    float vitamins_k;
};
class Food {
public:
    std::unordered_map<std::string, std::vector<FoodItem>> data;
    //function read the csv
    void readCsvFile() {
        std::ifstream file("food.csv");
        std::string header;
        //skip the unimportant header
        std::getline(file, header);
        std::string line;
        //loop to read the rest of the file
        while (std::getline(file, line)) {
            if (line.empty()) {
                continue;
            }
            std::stringstream ss(line);
            FoodItem item;
            std::string category;
            std::getline(ss, category, ';');
            std::getline(ss, item.description, ';');
            std::string nutrient_data_bank_number;
            std::getline(ss, nutrient_data_bank_number, ';');
            item.nutrient_data_bank_number = std::stoi(nutrient_data_bank_number);
            std::string alpha_carotene;
            std::getline(ss, alpha_carotene, ';');
            item.alpha_carotene = std::stoi(alpha_carotene);
            std::string beta_carotene;
            std::getline(ss, beta_carotene, ';');
            item.beta_carotene = std::stoi(beta_carotene);
            std::string beta_ryptoxanthin;
            std::getline(ss, beta_ryptoxanthin, ';');
            item.beta_ryptoxanthin = std::stoi(beta_ryptoxanthin);
            std::string carbohydrate;
            std::getline(ss, carbohydrate, ';');
            item.carbohydrate = std::stof(carbohydrate);
            std::string cholesterol;
            std::getline(ss, cholesterol, ';');
            item.cholesterol= std::stoi(cholesterol);
            std::string choline;
            std::getline(ss, choline, ';');
            item.choline = std::stof(choline);
            std::string fiber;
            std::getline(ss, fiber, ';');
            item.fiber = std::stof(fiber);
            std::string lutein_zeaxanthin;
            std::getline(ss, lutein_zeaxanthin, ';');
            item.lutein_zeaxanthin = std::stoi(lutein_zeaxanthin);
            std::string lycopene;
            std::getline(ss, lycopene, ';');
            item.lycopene = std::stoi(lycopene);
            std::string niacin;
            std::getline(ss, niacin, ';');
            item.niacin = std::stof(niacin);
            std::string protein;
            std::getline(ss, protein, ';');
            item.protein = std::stof(protein);
            std::string retinol;
            std::getline(ss, retinol, ';');
            item.retinol = std::stoi(retinol);
            std::string riboflavin;
            std::getline(ss, riboflavin, ';');
            item.riboflavin= std::stof(riboflavin);
            std::string selenium;
            std::getline(ss, selenium, ';');
            item.selenium= std::stof(selenium);
            std::string sugar_total;
            std::getline(ss, sugar_total, ';');
            item.sugar_total= std::stof(sugar_total);
            std::string thiamin;
            std::getline(ss, thiamin, ';');
            item.thiamin= std::stof(thiamin);
            std::string water;
            std::getline(ss, water, ';');
            item.water= std::stof(water);
            std::string fat_monosaturated;
            std::getline(ss, fat_monosaturated, ';');
            item.fat_monosaturated= std::stof(fat_monosaturated);
            std::string fat_polysaturated;
            std::getline(ss, fat_polysaturated, ';');
            item.fat_polysaturated= std::stof(fat_polysaturated);
            std::string fat_saturated;
            std::getline(ss, fat_saturated, ';');
            item.fat_saturated= std::stof(fat_saturated);
            std::string fat_total_lipid;
            std::getline(ss, fat_total_lipid, ';');
            item.fat_total_lipid= std::stof(fat_total_lipid);
            std::string calcium;
            std::getline(ss, calcium, ';');
            item.calcium= std::stoi(calcium);
            std::string copper;
            std::getline(ss, copper, ';');
            item.copper= std::stof(copper);
            std::string iron;
            std::getline(ss, iron, ';');
            item.iron= std::stof(iron);
            std::string magnesium;
            std::getline(ss, magnesium, ';');
            item.magnesium = std::stoi(magnesium);
            std::string phosphorus;
            std::getline(ss, phosphorus, ';');
            item.phosphorus= std::stoi(phosphorus);
            std::string potassium;
            std::getline(ss, potassium, ';');
            item.potassium= std::stoi(potassium);
            std::string sodium;
            std::getline(ss, sodium, ';');
            item.sodium = std::stoi(sodium);
            std::string zinc;
            std::getline(ss, zinc, ';');
            item.zinc = std::stof(zinc);
            std::string vitamins_a_rae;
            std::getline(ss, vitamins_a_rae, ';');
            item.vitamins_a_rae = std::stoi(vitamins_a_rae);
            std::string vitamins_b12;
            std::getline(ss, vitamins_b12, ';');
            item.vitamins_b12 = std::stof(vitamins_b12);
            std::string vitamins_b6;
            std::getline(ss, vitamins_b6, ';');
            item.vitamins_b6 = std::stof(vitamins_b6);
            std::string vitamins_c;
            std::getline(ss, vitamins_c, ';');
            item.vitamins_c = std::stof(vitamins_c);
            std::string vitamins_e;
            std::getline(ss, vitamins_e, ';');
            item.vitamins_e = std::stof(vitamins_e);
            std::string vitamins_k;
            std::getline(ss, vitamins_k, ';');
            item.vitamins_k = std::stof(vitamins_k);
            data[category].push_back(item);
        }
        file.close();
    }
};
#endif
