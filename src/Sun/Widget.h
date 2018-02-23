#pragma once

#include<Sun/Grid.h>

namespace Sun
{
class Widget: public Grid {
public:
	Widget() = default;
	~Widget() = default;

public:
	void Update(int Width, int Height) override;
};
}
