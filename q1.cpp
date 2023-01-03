                                    //   Question Name :- CABS

#include <iostream>
using namespace std;

int main() {
	int testcase ;
	cin>>testcase ;
	for(int i = 0 ; i < testcase ; i++)
	{
	    int x , y ;
	    cin>>x>>y;
	    if(x > y)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else if(x == y)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(x < y)
	    {
	        cout<<"FIRST"<<endl;
	    }
	}
	return 0;
}
