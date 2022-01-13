module BPZ1902.Saveleva.Lab3.Task2;


namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return (sqrt(pow(3.0*x+2,2)-24.0*x))/(3.0*sqrt(x)-(2.0/sqrt(x)));
			}

			double f2(double x) {
				if (x >= 1.1) return 9.0-x;
				else return sin(3.0*x)/(pow(x,4)+1.0);
			}

			double a(int i) {
				return (pow(-1.0, i) * (1.0 - (i*i + 1.0)/(i*i+3.0)));
			}

			double f3(int n) {
				double acc = 0.0;
				int i = 0;
				while (i <=n){
					acc += a(i);
					i++;
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				int i = 2;
				while (abs(prev - curr) > eps) {
					prev = curr;
					curr = a(i);
					i++;
					acc += curr;
				}
				return acc;
			}
		}
	}

}