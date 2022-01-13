module BPZ1902.Saveleva.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				if (x >= 1.1) return 9.0-x;
				else return sin(3.0*x)/(pow(x,4)+1.0);
			}
		}
	}
}