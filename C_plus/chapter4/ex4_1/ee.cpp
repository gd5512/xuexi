#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class CGoods{
private:
	char Name[21];
	int Amount;
	float Price;
	float Total_value;
public:
	void RegisterGoods(char[],int,float);
	void CountTotal(void);
	void GetName(char[]);
	int GetAmount(void);
	float GetPrice(void);
	float GetTotal_value(void);
};

void CGoods::RegisterGoods(char name[],int amount,float price)
{
   strcpy(Name,name);
   Amount=amount;
   Price=price;
}

void CGoods::CountTotal(void)
{
  Total_value=Price*Amount;
}

int CGoods::GetAmount(void)
{
  return(Amount);
}
void CGoods::GetName(char name[])
{
  strcpy(name,Name);
}
float CGoods::GetPrice(void)
{
  return(Price);
}
float CGoods::GetTotal_value(void)
{
  return(Total_value);
}

int main()
{
   CGoods car;
   char str[21];
   
   char str2[21];
   int number;
   float pr;
   cout<<"�����������ͺţ�";
   cin.getline(str,20);
   cout<<"���������������뵥�ۣ�";
   cin>>number>>pr;
   car.RegisterGoods(str,number,pr);
   car.CountTotal();
   str[0]='\0';
   car.GetName(str2);
   cout<<setw(20)<<str2<<setw(5)<<car.GetAmount();
   cout<<setw(10)<<car.GetPrice()<<setw(20)<<car.GetTotal_value()<<endl;
   return 0;
}