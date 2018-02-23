#include<Sun/Size.h>
#include<Sun/Manager.h>
#include<Sun/Grid.h>
#include<Sun/Widget.h>

#include<vector>
#include<iostream>

int main(int argc, char* argv[]) {
	Sun::Grid g;
	Sun::Pxt w(100), h(50);
	Sun::Widget wi;

	g.SetGrid(1, 1, {&w}, {&h}, {{&wi}});

	Sun::Manager::GetObj()->SetTimes(1.);
	Sun::Manager::GetObj()->SetRootGrid(&g);
	Sun::Manager::GetObj()->Run();

	char i;
	std::cin >> i;
	return 0;
}