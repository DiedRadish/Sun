#pragma once
namespace Sun
{
enum class SizeType {
	Pxt = 0,
	Per = 1
};
//两种长度模式
class Size {
public:
	Size() = default;
	virtual ~Size() = default;
protected:
	int PxtValue;
	double PerValue;

public:
	//得到实际的像素长
	virtual int GetPx(int FreeSize = 0) const = 0;

public:
	//获取类型
	virtual Sun::SizeType GetType() const = 0;
};

//像素每倍
class Pxt: public Size {
private:
	Pxt() = default;
public:
	Pxt(int Value);
	~Pxt() = default;

public:
	int GetPx(int FreeSize = 0) const override;
	Sun::SizeType GetType() const override;
};

//空余百分比
class Per: public Size {
private:
	Per() = default;
public:
	Per(double Value);
	~Per() = default;

public:
	int GetPx(int FreeSize = 0) const override;
	Sun::SizeType GetType() const override;
};
}