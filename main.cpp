#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int inventory_eggs = 42;
  int inventory_flour = 22;
  int inventory_milk = 27;
  int inventory_sugar = 7;
  int inventory_salt = 10;

  int recipe_eggs = 25;
  int recipe_flour = 10;
  int recipe_milk = 5;
  int recipe_sugar = 1;
  int recipe_salt = 10;
  
  int cake_batch = 50;
  int desire = 0;
  int raw_coefficient = 0;
  int coefficient = 0;

  cout << "Enter the number of cupcakes your heart desires: ";
  cin >> desire;

  raw_coefficient = desire / cake_batch;
  
  if (raw_coefficient <= 0)
    return 0;
  else
    if (inventory_eggs / (recipe_eggs * raw_coefficient) <= 0  )
      return 0;
    else
      if (inventory_flour / recipe_flour * raw_coefficient <= 0)
        return 0;
      else
        if (inventory_milk / recipe_milk * raw_coefficient <= 0)
          return 0;
        else
          if (inventory_sugar / recipe_sugar * raw_coefficient <= 0)
            return 0;
          else if (inventory_salt / recipe_salt * raw_coefficient <= 0)
            return 0;
          else
            cout << "We're making you " << desire;


    
  



  
  
  
}