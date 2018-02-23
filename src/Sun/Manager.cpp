#include "Manager.h"

#include<EGE/graphics.h>

Sun::Manager::Manager() {
	ege::setinitmode(ege::INIT_ANIMATION);
	ege::initgraph(1000, 600);
	ege::setrendermode(ege::RENDER_MANUAL);
}
Sun::Manager::~Manager() {
	ege::closegraph();
}
Sun::Manager* Sun::Manager::GetObj() {
	static Sun::Manager Obj;
	return &Obj;
}

void Sun::Manager::SetTimes(double tTimes) {
	Times = tTimes;
}

double Sun::Manager::GetTimes() const {
	return Times;
}

void Sun::Manager::SetRootGrid(Sun::Grid * tRootGrid) {
	RootGrid = tRootGrid;
}

void Sun::Manager::Run() {
	for(; ege::is_run(); ege::delay_fps(60)) {
		ege::cleardevice();

		int l, t, r, b;
		ege::getviewport(&l, &t, &r, &b);
		RootGrid->Update(r - l, b - t);
		ege::putimage(0, 0, RootGrid->GetImg());
	}
}