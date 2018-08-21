#pragma once

#include <iostream>
#include <stdint.h>
#include <math.h> 

using namespace std;

class Calculator
{
public:

	Calculator();
	/*Calculator(float Num, string op) constructor มีได้มากกว่า 1 มันรับค่าได้หรือไม่รับค่าก็ได้ ถ้าใส่มันรับค่า ก็ต้อง ไปบอก Objectที่เราสรา้งด้วยว่าให้ส่งค่ามาหา constructor
	{
	setNum1( Num );
	setNum2(Num);
	setOp( op) ;
	}*/
	void setNum1(float num);
	void setNum2(float num);

	void setOp(string op);
		// ถ้าอยากDevelop ให้ปรับจาก void เป็น bool แล้วมี if-else หรือ switch-case ภายใน Function member

	float calculate();
		// calculate ไม่จำเป็นต้องสร้าง parameter เพือมารับค่ามากจากด้านนอก เพราะว่า มันอยู่ใน class เดียวกันแล้ว ดึงค่า Function member ที่อยู่ในคลาสเดียวกันมาใช้ได้เลย
	
private:
	float m_num1;
	float m_num2;
	float m_result;
	string m_op;
};