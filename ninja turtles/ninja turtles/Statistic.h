#pragma once
#include<set>
#include<map>
#include<iostream>
#include<string>
#include<vector>
#include"Dish.h"
class Statistic{
private:
	std::set<std::string> blacklist;
	std::map<std::string, std::vector<Dish>> clients_rates;
	std::map<std::pair<std::string, std::string>, std::vector<Dish>> cooker_and_dish_rates;

public:
	void add_dish_to_statistic(Dish order);

	void liar_check();

	void show_rate_cooker_dish(Dish order);

	Statistic();
	~Statistic();
};

