#include <iostream>
#include <math.h>
#include <string> 
using namespace std;

int main() {

  int inventory_eggs = 50;      int recipe_eggs = 25;    double cake_batch = 50.0;
  int inventory_flour = 220;   int recipe_flour = 10;    double purchase_order = 1.0;
  int inventory_milk = 270;    int recipe_milk = 5;      double upsell = 0;
  int inventory_sugar = 70;    int recipe_sugar = 1;     double workload = 0;
  int inventory_salt = 100;    int recipe_salt = 10;     

  int eggs_remainer, flour_remainer,milk_remainer, sugar_remainer, salt_remainer;


  cout << "Enter the number of cupcakes you want: ";
  cin >> purchase_order;


  string accept_order = "We have everything we need to make you " +
          to_string(purchase_order) + " cupcakes! \nThe remainder of our inventory cosists of: "  +
          "\nEggs: " + to_string(eggs_remainer) + "\nFlour: " +
          to_string(flour_remainer) + "\nMilk: "+ to_string(milk_remainer) + "\nSugar: " +
          to_string(sugar_remainer) + "\nSalt: "+ to_string(salt_remainer);
  string decline_order = "There is not enough inventory to bake " + to_string(purchase_order) + " cupcakes. Sorry!";

  
  workload = purchase_order / cake_batch;
  

  eggs_remainer = inventory_eggs - (recipe_eggs * workload);
  flour_remainer = inventory_flour - (recipe_flour * workload);
  milk_remainer = inventory_milk - (recipe_milk * workload);
  sugar_remainer = inventory_sugar - (recipe_sugar * workload);
  salt_remainer = inventory_salt -(recipe_salt * workload);

  cout << workload << endl;
  
  cout << ceil(workload) << endl;

  
  if (inventory_eggs / (recipe_eggs * ceil(workload)) > 0 
  && inventory_flour / (recipe_flour * ceil(workload)) > 0 
  && inventory_milk / (recipe_milk * ceil(workload)) > 0 
  && inventory_sugar / (recipe_sugar * ceil(workload)) 
  && inventory_salt / (recipe_salt * ceil(workload)) > 0)
    cout << accept_order;
  else
    cout << decline_order;
}

