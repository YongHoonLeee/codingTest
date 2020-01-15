#include<iostream>
#include<ctime>
#include<cstdlib>
#include<queue>
using namespace std;
#define CUS_COME_TEAM 15 //고객의 주문간격 15초

enum burger
{
	CHE_BUR,
	BUL_BUR,
	DUB_BUR,
	CHE_TEAM =12,
	BUL_TEAM =15,
	DUB_TEAM=24
};

int main()
{
	int makerProc = 0;
	int cheOrder = 0;
	int bulOrder = 0;
	int dubOrder = 0;
	int sec;

	queue<int> que;
	srand(time(nullptr));

	for (sec = 0; sec < 3600; sec++)
	{
		if (sec% CUS_COME_TEAM == 0)
		{
			switch (rand()%3)
			{
			case burger::CHE_BUR:
				que.push(CHE_TEAM);
				cheOrder += 1;
				break;
			case burger::BUL_BUR:
				que.push(burger::BUL_TEAM);
				bulOrder += 1;
				break;
			case burger::DUB_BUR:
				que.push(burger::DUB_TEAM);
				dubOrder += 1;
				break;
			}
		}

		if (makerProc <= 0 && !que.empty()) {
			que.pop();
			makerProc = que.back();
		}
		makerProc--;
	}

	cout << "Simulation Report!" << endl;
	cout << "- Cheese burger : " << cheOrder << endl;
	cout << "- Bulgogi burger : " << bulOrder << endl;
	cout << "-Duble burger : " << dubOrder << endl;
	cout << "- Waiting room size : " << que.size() << endl;
	getchar(); return 0; 


}
