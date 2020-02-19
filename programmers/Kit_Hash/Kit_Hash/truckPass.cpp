#include <string>
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// ���� �������� �����ϴµ� ���԰� ��ġ�� �߷� ,�ƴϸ� ����
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
		//���� Ʈ�� ���� ��� �ٸ� ����ϴ� �ð����ؼ� return
		if (i==truck_weights.size())
			return answer+bridge_length;
		//���� Ʈ���� ���� ���
		else 
		{	//�ٵ� ����Ʈ���� �������ϱ� �����ʰ��Ǽ� 1�� �����ؾ��ϴ°��
			if (isFull(sumWeight- b[bridge_length - 1], truck_weights[i], weight))
			{
				answer++;
				sumWeight -= b[bridge_length-1];
				b.push_front(0);
				b.resize(bridge_length);

			}
			//Ʈ�� �ö�.
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