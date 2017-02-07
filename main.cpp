#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	double x[4][2] = {{1,1},{1,0},{0,1},{0,0}};
	double y[4]= {0,1,1,0};
	double nn[2];
	double delta[2]={0,0};
	double a1[2],a2,epsilon;
	nn[0] = rand();
	nn[1] = rand();
	for(int i=0;i<4;i++){
		a2=1/(1+exp(-(nn[0]*x[i][0]+nn[1]*x[i][1])));
		epsilon=a2-y[i];
		delta[0]=delta[0]+(x[i][0]*epsilon);
		delta[1]=delta[1]+(x[i][1]*epsilon);
	}
	delta[0]=(1/4)*(delta[0]);
	delta[1]=(1/4)*(delta[1]);
	for(int i=0; i<5000; i++){
		nn[0]=nn[0]-delta[0];
		nn[1]=nn[1]-delta[1];	
	}
	printf("%lf  -   %lf \n",nn[0],nn[1]);
return 0;
}	
