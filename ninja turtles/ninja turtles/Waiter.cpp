#include "pch.h"
#include "Waiter.h"


Waiter::Waiter(){
}

Dish Waiter::get_order_and_give_kitchen(Dish order) {
	order.ready_ = false;
	if (client_order.find(order.foodname_) == client_order.end()) {
		client_order.insert({ order.foodname_,order });
		return order;
	}
}
void Waiter::get_dish(Dish order) {
	if (order.ready_ == true) {
		client_order.erase(order.foodname_);
		client_dish.insert({ order.foodname_,order });
	}
}
Dish Waiter::give_client_dish(Dish order) {
	if (client_dish.find(order.foodname_) != client_dish.end()) {
		client_dish.erase(order.foodname_);
		return order;
	}
}

Waiter::~Waiter()
{
}
