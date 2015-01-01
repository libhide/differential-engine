#include <iostream.h>
#include <conio.h>
#include <dos.h>

//Differential Engine

struct chain_ele
{
	int chain[20];
	int chain_coeff[20];
	int chain_pow[20];
};
chain_ele ch[20];
float n, k, i, j,  fx[20], diff[20], eff[20], flag[20];
int no;
int maths();
void chain_in();
void chain_loop();
void chain_disp();
void sub_chain(int b)
{
	for(int a=b+1; a<no; a++)
		{
		if (ch[i].chain[a]==333)
		{
			cout << "(log";
		}
		else if (ch[i].chain[a]==444)
		{
			cout << "(sin";
		}
		else if (ch[i].chain[a]==555)
		{
			cout <<"(cos";
		}
		else if (ch[i].chain[a]==666)
		{
			cout << "(sec";
		}
		else if (ch[i].chain[a]==777)
		{
			cout <<"(cosec";
		}
		else if (ch[i].chain[a]==888)
		{
			cout <<"(tan";
		}
		else if (ch[i].chain[a]==999)
		{
			cout << "(cot";
		}
		}
}
void menu()
{
	clrscr();
	cout<<"Choose any one of the following -"<<endl<<endl;
	cout<<"1. 0"<<endl;
	cout<<"2. e^x"<<endl;
	cout<<"3. log"<<endl;
	cout<<"4. sin"<<endl;
	cout<<"5. cos"<<endl;
	cout<<"6. sec"<<endl;
	cout<<"7. cosec"<<endl;
	cout<<"8. tan"<<endl;
	cout<<"9. cot"<<endl;
	cout <<"10. chain"<< endl << endl;
	cout<<"Choice: ";
}
void chain_menu()
{
	cout<<"Choose any one of the following - "<<endl<<endl;
	cout<<"1. log"<<endl;
	cout<<"2. sin"<<endl;
	cout<<"3. cos"<<endl;
	cout<<"4. sec"<<endl;
	cout<<"5. cosec"<<endl;
	cout<<"6. tan"<<endl;
	cout<<"7. cot"<<endl;
}
void main()
{
	clrscr();
	cout<<"Enter the highest power of x (n): ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<endl<<"Enter the coefficient for x^"<<i<<" (Put zero for trigonometric fuctions or if you want to enter a chain(s) "<<": ";
		cin>>fx[i];
		if (fx[i]==0)
		{
		      eff[i]=maths();
		}
	}
	cout << "Enter constant: ";
	cin>>k;
	delay(500);
	clrscr();
	cout<<"Differentiating w.r.t x";
	delay(500);
	cout<<".";
	delay(500);
	cout<<".";
	delay(500);
	cout<<".";
	delay(500);
	cout<<".";
	delay(500);
	cout<<".";
	clrscr();
	cout<<"f'(x) = ";
	for (i=n; i>0; i--)
	{
		if (flag[i]==1)
		{
		if (diff[i]/eff[i]==111)
		{
			cout << "0 + ";
		}
		else if (diff[i]/eff[i]==222)
		{
			cout << eff[i]<< "e^x + ";
		}
		else if (diff[i]/eff[i]==333)
		{
			cout << eff[i]<<"*" << "1/x + ";
		}
		else if (diff[i]/eff[i]==444)
		{
			cout << eff[i]<< "cosx + ";
		}
		else if (diff[i]/eff[i]==555)
		{
			cout <<"-" <<eff[i]<< "sinx + ";
		}
		else if (diff[i]/eff[i]==666)
		{
			cout << eff[i]<< "secx.tanx + ";
		}
		else if (diff[i]/eff[i]==777)
		{
			cout << "-"<< eff[i]<< "cosecx.cotx + ";
		}
		else if (diff[i]/eff[i]==888)
		{
			cout << eff[i]<< "sec^2x + ";
		}
		else if (diff[i]/eff[i]==999)
		{
			cout << "-" << eff[i] << "cosec^2x + ";
		}
		}
		else if (flag[i]==2)
		{
			chain_disp();
		}
		else
		{
			cout << fx[i]*i<< "x^" << i-1 << " + ";
			if (i==1)
			{
				cout << "0";
			}
		}
	}
	getch();
}
int maths()
{
	clrscr();
	flag[i]=1;
	int ch, coeff;
	menu();
	cin >> ch;
	if (ch!=10)
	{
		cout << "Coefficient: ";
		cin >> coeff;
	}
	cout<< endl;
	switch(ch)
	{
		case 1: {  diff[i]= 111;
			   break;
				}
		case 2: {  diff[i]= 222*coeff;
			   break;
				}
		case 3: {  diff[i]= 333*coeff;
			   break;
				}
		case 4: {  diff[i]= 444*coeff;
			   break;
				}
		case 5: {  diff[i]= 555*coeff;
			   break;
				}
		case 6: {  diff[i]= 666*coeff;
			   break;
				}
		case 7: {  diff[i]= 777*coeff;
			   break;
				}
		case 8: {  diff[i]= 888*coeff;
			   break;
				}
		case 9: {  diff[i]= 999*coeff;
			   break;
				}
		case 10: { chain_loop();
			   break;
				}
	}
	return coeff;
}
void chain_loop()
{
	clrscr();
	chain_menu();
	cout <<endl<< "Enter number of terms in chain: ";
	cin >> no;
	cout <<endl<< "Power of x: ";
	cin >>ch[i].chain_pow[i];
	cout<<endl << "Coefficient: ";
	cin >> ch[i].chain_coeff[i];
	flag[i]=2;
	for(j=0;j<no;j++)
	{
		chain_in();
	}
}
void chain_in()
{
	int ch_;
	cout << "Term " << j+1<< ": ";
	cin >> ch_;
	switch(ch_)
	{
		case 1: {  ch[i].chain[j]= 333;
			   break;
				}
		case 2: {  ch[i].chain[j]= 444;
			   break;
				}
		case 3: {  ch[i].chain[j]= 555;
			   break;
				}
		case 4: {  ch[i].chain[j]= 666;
			   break;
				}
		case 5: {  ch[i].chain[j]= 777;
			   break;
				}
		case 6: {  ch[i].chain[j]= 888;
			   break;
				}
		case 7: {  ch[i].chain[j]= 999;
			   break;
				}
	}
}
void chain_disp()
{
	cout <<"{"<< ch[i].chain_coeff[i]*ch[i].chain_pow[i]<< "x^"<< ch[i].chain_pow[i]-1<<" * ";
	for (int k=0;k<no;k++)
	{
		if (ch[i].chain[k]==333)
		{
		cout << "1/";
		sub_chain(k);
		cout <<"(x^" << ch[i].chain_pow[i]<< ") * ";
		}
		else if (ch[i].chain[k]==444)
		{
			cout << "cos";
			sub_chain(k);
			cout <<"x^" <<ch[i].chain_pow[i]<< ") * ";
		}
		else if (ch[i].chain[k]==555)
		{
			cout <<"(-sin";
			sub_chain(k);
			cout <<"x^" << ch[i].chain_pow[i]<<")) * ";
		}
		else if (ch[i].chain[k]==666)
		{
			cout <<"sec";
			sub_chain(k);
			cout <<"x^" << ch[i].chain_pow[i];
			cout <<").tan";
			sub_chain(k);
			cout <<"x^" << ch[i].chain_pow[i]<< ") * ";
		}
		else if (ch[i].chain[k]==777)
		{
			cout << "(-cosec";
			sub_chain(k);
			cout <<"x^" <<ch[i].chain_pow[i]<< ").cot";
			sub_chain(k);
			cout <<"x^"<< ch[i].chain_pow[i]<<")) * ";
		}
		else if (ch[i].chain[k]==888)
		{
			cout << "sec^2";
			sub_chain(k);
			cout <<"x^" <<ch[i].chain_pow[i]<< ") * ";
		}
		else if (ch[i].chain[k]==999)
		{
			cout << "(-cosec^2";
			sub_chain(k);
			cout <<"x^"<< ch[i].chain_pow[i]<<")) * ";
		}
	}
	cout << "1}";
}