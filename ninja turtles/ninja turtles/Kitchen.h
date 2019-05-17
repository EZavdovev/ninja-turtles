#pragma once
#include<map>
#include<string>
#include"Dish.h"
class Kitchen{
private:
	std::map<std::string, Dish> ready_for_cook;
	std::map<std::string, Dish> ready_for_eat;
public:
	Kitchen();
	void get_order_from_waiter(Dish order);
	void cooking(Dish order);
	Dish give_dish_for_waiter(Dish order);
	~Kitchen();
};

