#include <iostream>
#include <stdint.h>
#include <math.h> 


#include "calculator2.h"

using namespace std;
// test push

Calculator::Calculator()
{
	m_num1 = 0;
	m_num2 = 0;
	m_op = "+";
	m_result = 0;
}
/*Calculator(float Num, string op) constructor มีได้มากกว่า 1 มันรับค่าได้หรือไม่รับค่าก็ได้ ถ้าใส่มันรับค่า ก็ต้อง ไปบอก Objectที่เราสรา้งด้วยว่าให้ส่งค่ามาหา constructor
{
	setNum1( Num );
	setNum2(Num);
	setOp( op) ;
}*/
void Calculator::setNum1(float num)
{
	m_num1 = num;
}
void Calculator::setNum2(float num)
{
	m_num2 = num;
}

void Calculator::setOp(string op)
	// ถ้าอยากDevelop ให้ปรับจาก void เป็น bool แล้วมี if-else หรือ switch-case ภายใน Function member
{
	m_op = op;
}

float Calculator::calculate() {
	// calculate ไม่จำเป็นต้องสร้าง parameter เพือมารับค่ามากจากด้านนอก เพราะว่า มันอยู่ใน class เดียวกันแล้ว ดึงค่า Function member ที่อยู่ในคลาสเดียวกันมาใช้ได้เลย
	if (m_op == "+") {

		m_result = m_num1 + m_num2;
	}
	else if (m_op == "-") {

		m_result = m_num1 - m_num2;
	}
	else if (m_op == "*") {

		m_result = m_num1 * m_num2;
	}
	else if (m_op == "/") {

		m_result = m_num1 / m_num2;
	}
	else if (m_op == "^") {

		m_result = pow(m_num1, m_num2);
	}
	//float m_result = m_num1 m_op m_num2;

	return m_result;
}

