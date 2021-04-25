#include <iostream>
#include <math.h>
#include <string> 
using namespace std;

const int recipe_eggs = 25;
const int recipe_flour = 10;
const int recipe_milk = 5; 
const int recipe_sugar = 1;
const int recipe_salt = 10;

int main() {

  int inventory_eggs = 50;         
  int inventory_flour = 220;      
  int inventory_milk = 270;         
  int inventory_sugar = 70;        
  int inventory_salt = 130;

  double purchase_order = 1.0;
  double cake_batch = 50.0;  
  double workload = 0;      

  int eggs_remainer = 0;
  int flour_remainer = 0;
  int milk_remainer = 0;
  int sugar_remainer = 0;
  int salt_remainer = 0;

  cout << "Enter the number of cupcakes you want: ";
  cin >> purchase_order;

  workload = ceil(purchase_order / cake_batch);

  eggs_remainer = (inventory_eggs - (recipe_eggs * workload));
  flour_remainer = (inventory_flour - (recipe_flour * workload));
  milk_remainer = (inventory_milk - (recipe_milk * workload));
  sugar_remainer = (inventory_sugar - (recipe_sugar * workload));
  salt_remainer = (inventory_salt - (recipe_salt * workload));

  if(eggs_remainer < 0 || flour_remainer < 0 || milk_remainer < 0 || sugar_remainer < 0 || salt_remainer < 0)
    cout << "There is not enough inventory to bake you " << purchase_order << " cupcakes. ";
  else
    cout << "Great! We can make you " << purchase_order << " cupcakes, and we will have remaining: \n" <<
    "Eggs: " << eggs_remainer << "\n" << "Flour: " << flour_remainer << "\n" << "Milk: " << milk_remainer << "\n" << "Sugar: " << sugar_remainer << "\n" << "Salt: " << salt_remainer << endl;
return 0;
}