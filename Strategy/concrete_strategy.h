#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRATEGY_H

#include "strategy.h"
#include <iostream>

//c++规定，当一个成员函数被声明为虚函数后，其派生类中的同名函数都自动成为虚函数。
//因此，在子类重新声明该虚函数时，但习惯上每一层声明函数时都加virtual,使程序更加清晰。

// 骑自行车
class BikeStrategy : public IStrategy
{
public:
	virtual void Travel() override { std::cout << "Travel by bike" << std::endl; }
};

// 开车
class CarStrategy : public IStrategy
{
public:
	virtual void Travel() override { std::cout << "Travel by car" << std::endl; }
};

// 坐火车
class TrainStrategy : public IStrategy
{
public:
	virtual void Travel() override { std::cout << "Travel by train" << std::endl; }
};

#endif // CONCRETE_STRATEGY_H