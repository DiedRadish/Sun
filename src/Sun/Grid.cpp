#include "Grid.h"

//void Sun::Grid::SetGrid(int tRow, int tColumn)
//{
//
//	RowHeight.clear();
//	RowHeight.resize(tRow);
//	ColumnWidth.clear();
//	ColumnWidth.resize(tColumn);
//
//	Children.clear();
//	Children.resize(tRow);
//	for(auto &t : Children)
//	{
//		t.clear();
//		t.resize(tColumn);
//	}
//
//}

Sun::Grid::Grid() {
	img = ege::newimage(1000, 1000);
}

Sun::Grid::~Grid() {
	ege::delimage(img);
}

//Sun::WidgetType Sun::Grid::GetType() const {
//	return WidgetType::Grid;
//}
//
void Sun::Grid::SetGrid(int tRow, int tColumn, std::vector<Sun::Size*> tRowHeight, std::vector<Sun::Size*> tColumnWidth, std::vector<std::vector<Grid*>> tChildren) {
	Row = tRow;
	Column = tColumn;
	RowHeight = tRowHeight;
	ColumnWidth = tColumnWidth;
	Children = tChildren;
	//TODO: Check size.
}

void Sun::Grid::Update(int Width, int Height) {
	Resize(Width, Height);

	int Top = 0;
	for(int y = 0; y < Row; ++y) {
		int Left = 0;
		for(int x = 0; x < Column; ++x) {
			Children[y][x]->Update(ColumnRealWidth[x], RowRealHeight[y]);
			ege::putimage(img, Left, Top, ColumnRealWidth[x], RowRealHeight[y], Children[y][x]->GetImg(), 0, 0);

			Left += ColumnRealWidth[x];
		}
		Top += RowRealHeight[y];
	}
}

ege::PIMAGE Sun::Grid::GetImg() {
	return img;
}

void Sun::Grid::Resize(int Width, int Height) {
	//TODO: Check if more than the width and height
	for(int t = 0; t < Row; ++t) {
		if(RowHeight[t]->GetType() == Sun::SizeType::Pxt) {
			Height -= (RowRealHeight[t] = RowHeight[t]->GetPx());
		}
	}
	for(int t = 0; t < Row; ++t) {
		if(RowHeight[t]->GetType() == Sun::SizeType::Per) {
			RowRealHeight[t] = RowHeight[t]->GetPx(Height);
		}
	}

	for(int t = 0; t < Column; ++t) {
		if(ColumnWidth[t]->GetType() == Sun::SizeType::Pxt) {
			Width -= (ColumnRealWidth[t] = ColumnWidth[t]->GetPx());
		}
	}
	for(int t = 0; t < Column; ++t) {
		if(ColumnWidth[t]->GetType() == Sun::SizeType::Per) {
			ColumnRealWidth[t] = ColumnWidth[t]->GetPx(Width);
		}
	}
}