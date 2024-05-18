//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	a=12;
//	cout<<"size of int:"<<sizeof(a)<<endl;
//	
//	float b;
//	cout<<"size of float:"<<sizeof(b)<<endl;
//	
//	char c;
//	cout<<"size of char:"<<sizeof(c)<<endl;
//	
//	bool d;
//	cout<<"size of bool:"<<sizeof(d)<<endl;
//	
//	short int si;
//	long int li;
//	
//	cout<<"size of shortint:"<<sizeof(si)<<endl;
//	cout<<"size of longint:"<<sizeof(li)<<endl;
//	
//	
//	return 0;
//}

//how to take input from user.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int amount1;
//	cin>>amount1;
//	
//	int amount2;
//	cin>>amount2;
//	
//	int sum=amount1+amount2;
//	cout<<"sum\n";
//	cout<<sum;
//	
//	return 0;
//	
//}

//CONDITIONAL STATEMENTS.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int savings;
//    cin>>savings;
//	if(savings>5000)
//	{
//		if(savings>10000) // do not write 10,000("," is used as separator.)
//		{
//			cout<<"long drive with rashmi\n";
//		}
//		else
//		{
//			cout<<"lunch with rashmi\n";
//		}
//	}
//	else if(savings<5000)
//	{
//		if(savings<10000)
//		{
//			cout<<"long drive with neha";
//		}
//		else
//		{
//			cout<<"lunch with neha";
//		}
////		cout<<"neha\n";
//	}
//	else
//	{
//		cout<<"friends\n";
//	}
//	return 0;
//}
//code to print greater of 3.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c;
//	cin>>a>>b>>c;
//	if(a>b)
//	{
//		if(a>c){
//			cout<<"a is greater\n"<<endl;
//		}
//		else{
//			cout<<" c is greater\n"<<endl;
//		}
//	}
//	else
//	{
//		if(b>c){
//			cout<<"b is greater\n"<<endl;
//		}
//		else{
//			cout<<"c is greater\n"<<endl;
//		}
//	}
//	return 0;
//}

//even or odd.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cin>>a;
//	if(a%2==0)
//	{
//		cout<<"a is even"<<endl;
//	}
//	else{
//		cout<<"a is odd"<<endl;
//	}
//	return 0;
//}

//LOOP.
//for loop.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int sum=0;
//	cin>>n;
//	for(int counter=1;counter<=n;counter++)
//	{
//		sum=sum+counter;
//	}
//	cout<<"sum:1"<<sum;
//	return 0;
//}
// while loop.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int sum=0;
//	cout<<"ENTER THE VALUE:";
//	cin>>n;
//	int counter=1;
//	while(n>0){
//		sum=sum+counter;
//		counter++;
//		n--;
//	}
//	cout<<"sum of 10 to "<<n<<" is:"<<sum<<endl;
//	return 0;
//}

//DO WHILE LOOP.//it will break loop in second execution.
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cout<<"enter the value:";
//	cin>>n;
//	int counter=1;
//	int sum=0;
//	do{
//		sum=sum+counter;
//		counter++;
//		n--;
//		//cout<<sum<<endl;
//		//cin>>n;
//	}
//	while(n>0);
//	cout<<"the sum of numbers from 1 to "<<n<<" is:"<<sum<<endl;
//	return 0;
//	
//}

//continue and break
//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=0;i<100;i++)
//	{
//		if(i%3==0)
//		{
//			continue;// factors of 3 are skipped.
//		}
//		cout<<i<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int i;
//	for(int i=2;i<n;i++)
//	{
//		if(n%i==0)
//		{
//			cout<<"non-prime"<<endl;
//			break;
//		}
//    }
////    if(i==n)
////    {
////    	cout<<"it is a prime number"<<endl;
////	}
//	cout<<"prime"<<endl;	
//	return 0;
//}

#include<iostream>

