#include <iostream>
using namespace std;



int main(int argv, char **argc) {
	int **p = new int*[5];
	int *q = new int[5];
	for (int i = 0; i < 5; i++) {
		q[i] = i;
	}
	p[1] = q;
	delete p;
	//cout<<"p[2] ="<< p[2] <<endl;
	cout << "q[2]= " << q[2] << endl;
	cout << "p[1][2] = " << p[1][2] << endl;
    //=============== Uncomment on submit ================//
    // if (argv == 2) printInPattern(atoi(argc[1]));
    //====================================================//
    return 0;
}