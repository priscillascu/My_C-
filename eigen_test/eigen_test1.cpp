#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;

int main()
{
	MatrixXd m_random = MatrixXd::Random(3, 3);   //MatrixXd: make a unknow direction matrix
	cout << "Random Matrix" << m_random << endl;
	cout << m_random.size() << endl;
	return 0;
}
