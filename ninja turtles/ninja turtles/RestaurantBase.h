#pragma once
#include<iostream>
#include<string>
#include<set>
#include<map>
#include"Dish.h"
class RestaurantBase
{
private:
	std::map<std::string,std::set<std::string>> menu;
	std::set<std::string> cooker;
public:
	RestaurantBase();
	void add_type(std::string type);

	void add_dish(std::string foodname, std::string type);

	void add_cooker(std::string chefname);

	void erase_cooker(std::string chefname);

	void erase_type(std::string type);

	void erase_dish(std::string foodname, std::string type);

	bool find_dish(Dish food);

	bool find_cooker(Dish food);

	void put_menu();

	~RestaurantBase();
};

