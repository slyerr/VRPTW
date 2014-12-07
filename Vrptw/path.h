#ifndef _path_h_
#define _path_h_

#include <string>

//·���ӿ�
class IPath
{
public:
	//�ɱ�
	virtual double Get_cost() = 0;

	//���·���ַ���
	// |	��ʾ·��
	// +	��ʾ�����յ�
	virtual std::string Get_path_string() const = 0;

	//·��ʹ�õĳ�����Ŀ
	virtual int Get_vehicle_count() = 0;
};

#endif
