#pragma once
namespace Sun
{
enum class SizeType {
	Pxt = 0,
	Per = 1
};
//���ֳ���ģʽ
class Size {
public:
	Size() = default;
	virtual ~Size() = default;
protected:
	int PxtValue;
	double PerValue;

public:
	//�õ�ʵ�ʵ����س�
	virtual int GetPx(int FreeSize = 0) const = 0;

public:
	//��ȡ����
	virtual Sun::SizeType GetType() const = 0;
};

//����ÿ��
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

//����ٷֱ�
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