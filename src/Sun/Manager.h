#pragma once

#include<Sun/Grid.h>

namespace Sun
{
class Manager {
private:
	Manager();
public:
	~Manager();
public:
	static Sun::Manager* GetObj();

private:
	//·Å´ó±¶ÂÊ
	double Times;
public:
	void SetTimes(double tTimes);
	double GetTimes() const;

private:
	Sun::Grid* RootGrid;
public:
	void SetRootGrid(Sun::Grid* tRootGrid);

public:
	void Run();
};
}
