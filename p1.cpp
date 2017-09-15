#include<iostream>
#define ll long long int 
using namespace std;
int main()
{
	string input1;
	while (getline(std::cin,input1))
{
    if (input1.empty())
        break;
    else
    {
    	ll s=1,n=input1.length(),num;
    	if(input1=="0")
    		cout<<"0"<<endl;
    	//cout<<num<<" ";
    	else
    	{
    		num=0;
    		for(int i=0;i<n;i++)
    		num=num*10+(input1[i]-'0');
    		s=1;
    	while(num%2==0)
    	{
    		num=num/2;
    		s=s*2;
    	}
    	cout<<s<<endl;
    }
    }
}
return 0;
}