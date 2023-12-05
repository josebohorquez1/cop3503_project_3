#include "data_red_black_tree.h"
using namespace std;
int main() {
    Food food;
    food.readCsvFile();
    

    
    int age = 20;
    bool male = true;
    int weightPounds = 165;
    int heightInches = 68;
    float weightKilograms = weightPounds * 0.453592;
    float heightCentimeters = heightInches * 2.54;
    float calorieStandard;
    float waterStandard;

    if (male) {
        calorieStandard = 88.362 + (13.397 * weightKilograms) + (4.799 * heightCentimeters) - (5.677 * age);
        calorieStandard *= 1.55;
        waterStandard = 125;
    }
    else {
        calorieStandard = 447.593 + (9.247 * weightKilograms) + (3.098 * heightCentimeters) - (4.330 * age);
        calorieStandard *= 1.55;
        waterStandard = 91;
    }

    float proteinStandard = 1.9 * weightKilograms;
    float carbStandard = 0.55 * calorieStandard;
    float fatStandard = 0.275 * calorieStandard;

    //cout << "Recommended Calories: " << calorieStandard << endl;
    
    std::vector<FoodItem> dailyIntake;
    //dailyIntake.push_back(food.data["Milk"][0]);
    //dailyIntake.push_back(food.data["Yogurt"][0]);
    //dailyIntake.push_back(food.data["Chocolate milk"][0]);


    std::vector<FoodItem> newFood;
    float dailyProtein;
    float dailyCarb;
    float dailyFat;
    float dailyWater;
    float dailyChol;
    float dailyFiber;
    float dailySugar;
    float dailyVitB12;
    float dailyVitE;
    float dailyVitC;

    for (int i = 0; i < dailyIntake.size(); i++) {
        dailyProtein += dailyIntake[i].protein;
        dailyCarb += dailyIntake[i].carbohydrate;
        dailyFat += dailyIntake[i].fat_total_lipid;
        dailyWater += dailyIntake[i].water;
        dailyChol += dailyIntake[i].cholesterol;
        dailyFiber += dailyIntake[i].fiber;
        dailySugar += dailyIntake[i].sugar_total;
        dailyVitE += dailyIntake[i].vitamins_e;
        dailyVitB12 += dailyIntake[i].vitamins_b12;
        dailyVitC += dailyIntake[i].vitamins_c;
    }

    float ogProtein = dailyProtein;
    float ogCarb = dailyCarb;
    float ogFat = dailyFat;
    float ogWater = dailyWater;
    float ogChol = dailyChol;
    float ogFiber = dailyFiber;
    float ogSugar = dailySugar;
    float ogVitE = dailyVitE;
    float ogVitB12 = dailyVitB12;
    float ogVitC = dailyVitC;

    bool pass = true;
    bool first = true;
    float proteinDeficit;

     while (dailyProtein < proteinStandard) {        
        if (pass) {
            if (first) {
                first = false;
                proteinDeficit = proteinStandard - dailyProtein;
            }
            else {
                proteinDeficit *= 0.5;
            }
            
        }
        else {
            proteinDeficit = proteinStandard - dailyProtein;
        }
        
        for (auto it = food.data.begin(); it != food.data.end(); ++it) {
            for (auto &iter : it->second) {
                if (iter.protein >= proteinDeficit) {
                    newFood.push_back(iter);
                    dailyProtein += iter.protein;
                    dailyCarb += iter.carbohydrate;
                    dailyFat += iter.fat_total_lipid;
                    dailyWater += iter.water;
                    dailyChol += iter.cholesterol;
                    dailyFiber += iter.fiber;
                    dailySugar += iter.sugar_total;
                    dailyVitE += iter.vitamins_e;
                    dailyVitB12 += iter.vitamins_b12;
                    dailyVitC += iter.vitamins_c;
                    bool pass = false;
                    break;
                }
                if (dailyProtein > proteinStandard) {
                    break;
                }
            }
            if (dailyProtein > proteinStandard) {
                break;
            }
        }
     }

     pass = true;
     first = true;
     float carbDeficit;

     while (dailyCarb < carbStandard) {
         if (pass) {
             if (first) {
                 first = false;
                 carbDeficit = carbStandard - dailyCarb;
             }
             else {
                 carbDeficit *= 0.5;
             }

         }
         else {
             carbDeficit = carbStandard - dailyCarb;
         }

         for (auto it = food.data.begin(); it != food.data.end(); ++it) {
             for (auto& iter : it->second) {
                 if (iter.carbohydrate >= carbDeficit) {
                     newFood.push_back(iter);
                     dailyProtein += iter.protein;
                     dailyCarb += iter.carbohydrate;
                     dailyFat += iter.fat_total_lipid;
                     dailyWater += iter.water;
                     dailyChol += iter.cholesterol;
                     dailyFiber += iter.fiber;
                     dailySugar += iter.sugar_total;
                     dailyVitE += iter.vitamins_e;
                     dailyVitB12 += iter.vitamins_b12;
                     dailyVitC += iter.vitamins_c;
                     bool pass = false;
                     break;
                 }
                 if (dailyCarb > carbStandard) {
                     break;
                 }
             }
             if (dailyCarb > carbStandard) {
                 break;
             }
         }
     }

     pass = true;
     first = true;
     float fatDeficit;

     while (dailyFat < fatStandard) {
         if (pass) {
             if (first) {
                 first = false;
                 fatDeficit = fatStandard - dailyFat;
             }
             else {
                 fatDeficit *= 0.5;
             }

         }
         else {
             fatDeficit = fatStandard - dailyFat;
         }

         for (auto it = food.data.begin(); it != food.data.end(); ++it) {
             for (auto& iter : it->second) {
                 if (iter.fat_total_lipid >= fatDeficit) {
                     newFood.push_back(iter);
                     dailyProtein += iter.protein;
                     dailyCarb += iter.carbohydrate;
                     dailyFat += iter.fat_total_lipid;
                     dailyWater += iter.water;
                     dailyChol += iter.cholesterol;
                     dailyFiber += iter.fiber;
                     dailySugar += iter.sugar_total;
                     dailyVitE += iter.vitamins_e;
                     dailyVitB12 += iter.vitamins_b12;
                     dailyVitC += iter.vitamins_c;
                     bool pass = false;
                     break;
                 }
                 if (dailyFat > fatStandard) {
                     break;
                 }
             }
             if (dailyFat > fatStandard) {
                 break;
             }
         }
     }

     pass = true;
     first = true;
     float waterDeficit;

     while (dailyWater < waterStandard) {
         if (pass) {
             if (first) {
                 first = false;
                 waterDeficit = waterStandard - dailyWater;
             }
             else {
                 waterDeficit *= 0.5;
             }

         }
         else {
             waterDeficit = waterStandard - dailyWater;
         }

         for (auto it = food.data.begin(); it != food.data.end(); ++it) {
             for (auto& iter : it->second) {
                 if (iter.water >= waterDeficit) {
                     newFood.push_back(iter);
                     dailyProtein += iter.protein;
                     dailyCarb += iter.carbohydrate;
                     dailyFat += iter.fat_total_lipid;
                     dailyWater += iter.water;
                     dailyChol += iter.cholesterol;
                     dailyFiber += iter.fiber;
                     dailySugar += iter.sugar_total;
                     dailyVitE += iter.vitamins_e;
                     dailyVitB12 += iter.vitamins_b12;
                     dailyVitC += iter.vitamins_c;
                     bool pass = false;
                     break;
                 }
                 if (dailyWater > waterStandard) {
                     break;
                 }
             }
             if (dailyWater > waterStandard) {
                 break;
             }
         }
     }
     /*
     for (int i = 0; i < newFood.size(); i++) {
         cout << newFood[i].description << endl;
     }

     */
     
    return 0;
}