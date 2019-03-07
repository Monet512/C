#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c) return a;
		else return c;
	}
	else if(b>c) return b;
	else return c;
}
double max(double s,double d,double f)
{
	if(s>d)
	{
		if(s>f) return s;
		else return f;
	}
	else if(d>f) return d;
	else return f;
}
int abc(int i,int j)
{
	return max(i,j);
}
int abc(int q,int w,int e)
{
	return max(q,w,e);
}
double abc(double r,double t)
{
	return max(r,t);
}
double abc(double y,double u,double o)
{
	return max(y,u,o);
}
int main()
{
	int al,bl,cl,dl,el;
	double xl,yl,zl,ql,vl;
	cin>>al>>bl;
	cin>>cl>>dl>>el;
	cin>>xl>>yl;
	cin>>zl>>ql>>vl;
	cout<<abc(al,bl)<<endl<<abc(cl,dl,el)<<endl;
	cout<<abc(xl,yl)<<endl<<abc(zl,ql,vl)<<endl;
	return 0;
}
