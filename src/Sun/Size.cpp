#include "Size.h"

#include<Sun/Manager.h>

Sun::Pxt::Pxt(int Value) {
	PxtValue = Value;
}

int Sun::Pxt::GetPx(int FreeSize) const {
	return (int)(Sun::Manager::GetObj()->GetTimes() * (double)PxtValue);
}

Sun::SizeType Sun::Pxt::GetType() const {
	return Sun::SizeType::Pxt;
}

Sun::Per::Per(double Value) {
	PerValue = Value;
}

int Sun::Per::GetPx(int FreeSize) const {
	return (int)(Sun::Manager::GetObj()->GetTimes() * (double)FreeSize * PerValue);
}

Sun::SizeType Sun::Per::GetType() const {
	return Sun::SizeType::Per;
}