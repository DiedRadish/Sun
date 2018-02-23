#pragma once
#include<vector>

#include<Sun/Size.h>

#include<EGE/graphics.h>

namespace Sun
{
class Grid {
public:
	Grid();
	virtual ~Grid();
private:
	int Row /* 行数 */, Column /* 列数 */;
	std::vector<Sun::Size*> RowHeight, ColumnWidth;
	std::vector<int> RowRealHeight, ColumnRealWidth;

	std::vector<std::vector<Grid*>> Children; //先行在列

public:
	void SetGrid(int tRow, int tColumn,
				 std::vector<Sun::Size*> tRowHeight,
				 std::vector<Sun::Size*> tColumnWidth,
				 std::vector<std::vector<Grid*>> tChildren);
protected:
	ege::PIMAGE img;
public:
	virtual void Update(int Width, int Height);
	ege::PIMAGE GetImg();
private:
	void Resize(int Width, int Height);
};
}
