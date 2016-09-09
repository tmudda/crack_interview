#include "iostream"

using namespace std;

int main()
{
	char arr[] = "test";

	static int count[256];

	int len = strlen(arr);

	for(int i = 0; i< len; i++)
	{
		count[arr[i]]++;
	}

	char max_occuring_char = arr[0];
	int max_count = count[arr[0]];

	cout<<"maximum occuring character : "<<max_occuring_char<<endl;
	cout<<"max count : "<<max_count<<endl;

	for(int i = 0; i < len; i++)
	{
		if(count[arr[i]] > max_count)
		{
			max_occuring_char = arr[i];
		}
	}

	cout<<"maximum occuring character : "<<max_occuring_char<<endl;
}
