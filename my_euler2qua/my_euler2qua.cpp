#include <iostream>
#include <cmath>
 
using namespace std;

#define PI 3.14

class RPY2qua
{
   public:
	double roll_deg;
	double pitch_deg;
	double yaw_deg;
 
      // 成员函数声明
    double getQua_x(void);
    double getQua_y(void);
    double getQua_z(void);
    double getQua_w(void);
};
 
// 成员函数定义
double RPY2qua::getQua_x(void)
{
	return sin(roll_deg*PI/180.0/2)*cos(yaw_deg*PI/180.0/2)*cos(pitch_deg*PI/180.0/2)-cos(roll_deg*PI/180.0/2)*sin(yaw_deg*PI/180.0/2)*sin(pitch_deg*PI/180.0/2);
}

double RPY2qua::getQua_y(void)
{
	return cos(roll_deg*PI/180.0/2)*sin(yaw_deg*PI/180.0/2)*cos(pitch_deg*PI/180.0/2)+sin(roll_deg*PI/180.0/2)*cos(yaw_deg*PI/180.0/2)*sin(pitch_deg*PI/180.0/2);
}
double RPY2qua::getQua_z(void)
{
	return cos(roll_deg*PI/180.0/2)*cos(yaw_deg*PI/180.0/2)*sin(pitch_deg*PI/180.0/2)-sin(roll_deg*PI/180.0/2)*sin(yaw_deg*PI/180.0/2)*cos(pitch_deg*PI/180.0/2);
}
double RPY2qua::getQua_w(void)
{
	return cos(roll_deg*PI/180.0/2)*cos(yaw_deg*PI/180.0/2)*cos(pitch_deg*PI/180.0/2)+sin(roll_deg*PI/180.0/2)*sin(yaw_deg*PI/180.0/2)*sin(pitch_deg*PI/180.0/2);
}

int main()
{
	RPY2qua my_RPY2qua;
	cout << "请输入绕x轴旋转角度：" << endl;
	cin >> my_RPY2qua.roll_deg;
	cout << "请输入绕y轴旋转角度：" << endl;
	cin >> my_RPY2qua.yaw_deg;
	cout << "请输入绕z轴旋转角度：" << endl;
	cin >> my_RPY2qua.pitch_deg;

	cout << "四元数x：" << my_RPY2qua.getQua_x() << endl;
	cout << "四元数y：" << my_RPY2qua.getQua_y() << endl;
	cout << "四元数z：" << my_RPY2qua.getQua_z() << endl;
	cout << "四元数w：" << my_RPY2qua.getQua_w() << endl;

	return 0;
}

