#include <iostream>
#include <math.h>
#include <string> 
using namespace std;

int main() {

  int inventory_eggs = 4;      int recipe_eggs = 25;     int cake_batch = 50;
  int inventory_flour = 220;   int recipe_flour = 10;    int purchase_order = 0;
  int inventory_milk = 270;    int recipe_milk = 5;      int overflow = 0;
  int inventory_sugar = 70;    int recipe_sugar = 1;     double workload = 0;
  int inventory_salt = 100;    int recipe_salt = 10;     double raw_coefficient = 0;

  int eggs_remainer, flour_remainer,milk_remainer, sugar_remainer, salt_remainer;

  cout << "Enter the number of cupcakes you want: ";
  cin >> purchase_order;

  if (purchase_order > 50)
    workload = purchase_order / cake_batch;
  else
    workload = purchase_order;

  overflow = purchase_order % cake_batch;

  if (overflow > 0)
    workload = workload + 50;
  else
    workload = workload;
  
cout << workload 





/*
  string decline_order = "There is not enough inventory to bake " + to_string(desire) + " cupcakes. Sorry!";
  string accept_order = "We have everything we need to make you " +
          to_string(desire) + " cupcakes! \nThe remainder of our inventory cosists of: "  +
          "\nEggs: " + to_string(eggs_remainer) + "\nFlour: " +
          to_string(flour_remainer) + "\nMilk: "+ to_string(milk_remainer) + "\nSugar: " +
          to_string(sugar_remainer) + "\nSalt: "+ to_string(salt_remainer);

  cout << "Enter the number of cupcakes your heart desires: ";
  cin >> desire;

  if (desire % cake_batch == 0)
    cake_batch = cake_batch;
  else
    cake_batch = cake_batch + 50;

  raw_coefficient = desire / cake_batch;
  //cout << raw_coefficient << endl;

  eggs_remainer = inventory_eggs - (recipe_eggs * raw_coefficient);
  flour_remainer = inventory_flour - (recipe_flour * raw_coefficient);
  milk_remainer = inventory_milk - (recipe_milk * raw_coefficient);
  sugar_remainer = inventory_sugar - (recipe_sugar * raw_coefficient);
  salt_remainer = inventory_salt -(recipe_salt * raw_coefficient);

  if (raw_coefficient <= 0)
    return 0;
  else if (inventory_eggs / (recipe_eggs * raw_coefficient) <= 0  )
      return 0;
    else if (inventory_flour / (recipe_flour * raw_coefficient) <= 0)
        return 0;
      else if (inventory_milk / (recipe_milk * raw_coefficient) <= 0)
          return 0;
        else if (inventory_sugar / (recipe_sugar * raw_coefficient) <= 0)
            return 0;
          else if (inventory_salt / (recipe_salt * raw_coefficient) <= 0)
            return 0;
          else
            cout << accept_order;
*/
}