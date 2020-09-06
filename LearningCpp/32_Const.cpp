#include <iostream>
#include <string>;
#include "src/Log.h";

/*
	Fake keyword, visibility for classes and structs.
	Promise nothing will change, it is breakable but bad pratice.

	Can point to the memory address.

	Can use mutable to change the values.
*/

class Yorkshireman
{
	private:
		int m_money = 1000000;
	public:
		int GetMoney() const
		{
			//can't amend
			/*money = 0;*/

			return m_money;
		}

		//Can't set with const
		//void setMoney(int money) const
		void setMoney(int money)
		{
			m_money = money;
		}
};

int main()
{
	Yorkshireman* dude = new Yorkshireman();

	int money = dude->GetMoney();

	LogNumber(money);

	const int vat = 25;
	int* vat2 = new int;

	*vat2 = 10;
	vat2 = (int*)&vat;

	//Can't do.
	//vat = 35;

	LogConstNumber((int)&vat2);
	LogConstNumber(vat);

	delete dude;

	std::cin.get();
}