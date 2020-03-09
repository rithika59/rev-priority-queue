#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<int>> pq;
//	priority_queue<int>::iterator it;

	int n;

	while(1)
	{
		cout<<"Priority queue implementation\n";
		cout<<"1.Insert element\n";
		cout<<"2.Delete Element \n";
		cout<<"3.Get Size\n";
		cout<<"4.Top priority element\n";
		cout<<"5.Exit \n";
		cout<<"Enter your choice\n";
		cin>>n;
		switch(n)
		{
			case 1:
			{
				int n1;
				cout<<"Enter element to insert: \n";
				cin>>n1;
				pq.push(n1);
			}
			break;
			case 2:
			{
				int rm = pq.top();
				if(!pq.empty())
				{
					pq.pop();
					cout<<"Element "<<rm<<" Deleted \n";
				}
				else
					cout<<"PQ is empty \n";
			}
			break;
			case 3:
			{
				cout<<"Size of Quene \n";
				cout<<pq.size()<<endl;
			}
			break;
			case 4:
			{
				cout<<"Top element of the Queue \n";
				cout<<pq.top()<<endl;
			}
			break;
			case 5:
				exit(1);
			break;
			default:
				cout<<"Wrong choice\n"<<endl;
		}
	}

	return 0;
}
