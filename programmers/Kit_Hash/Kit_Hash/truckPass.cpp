#include <string>
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// 만약 다음차가 들어가야하는데 무게가 넘치면 뜨루 ,아니면 쀄일
bool isFull(int sumWeight, int newTruck,int maxWeight) {
	if (newTruck + sumWeight > maxWeight)
		return true;
	else
		return false;
}
int solution(int bridge_length, int weight, vector<int> truck_weights)
{
	int answer = 0;
	int sumWeight = 0;
	int i = 0;
	deque<int>b(bridge_length, 0);
	while (true) 
	{
		//남은 트럭 없는 경우 다리 통과하는 시간더해서 return
		if (i==truck_weights.size())
			return answer+bridge_length;
		//아직 트럭이 남은 경우
		else 
		{	//근데 다음트럭을 넣으려니까 무게초과되서 1초 존버해야하는경우
			if (isFull(sumWeight- b[bridge_length - 1], truck_weights[i], weight))
			{
				answer++;
				sumWeight -= b[bridge_length-1];
				b.push_front(0);
				b.resize(bridge_length);

			}
			//트럭 올라감.
			else
			{
				answer++;
				sumWeight -= b[bridge_length-1];
				b.push_front(truck_weights[i]);
				b.resize(bridge_length);
				sumWeight = truck_weights[i]+ sumWeight;
				i++;
			}
		}
	}
}

int main() {
	int bridge_length;
	int weight;
	vector<int> truck_weights;
	truck_weights.push_back(7);
	truck_weights.push_back(4);
	truck_weights.push_back(5);
	truck_weights.push_back(6);
	int result = solution(2, 10, truck_weights);
	cout << result << endl;
	getchar(); return 0; 
}