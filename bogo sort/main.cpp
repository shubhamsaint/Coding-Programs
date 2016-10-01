#include <iostream>
 #include <ctime>
 #include <cstdlib>
 #include <vector>
 #include <algorithm>
 #include <iterator>
 #include<math.h>
 #include<stdio.h>
 #include <time.h>
 using namespace std;
 static const int NUM = 3;

 bool IsInOrder(const vector<int>& x)
 {
 	return adjacent_find(x.begin(), x.end(), greater<int>()) == x.end();
 }

 int main()
 {
 	int counter = 0;
 	long long int input;
 	vector<int> bogo;
 float t1,t2;
 	float n;
 	cin>>n;

 	int p=n;
 	while(p--)
{
    cin >> input;
  bogo.push_back(input);
}

float time=0;
 	// Initiate the vector with NUM random numbers
 	// Bogosort
 	while(!IsInOrder(bogo))
 	{
 	    t1=clock();
 		random_shuffle(bogo.begin(), bogo.end());
 		t2=clock();
 		time=time+((t2-t1)/CLK_TCK);
 		copy(bogo.begin(), bogo.end(), ostream_iterator<int>(cout, " "));
 		cout << "\n\n";
 		counter++;

 	}
 	time=time;
 	printf("%.6f",time);
 	//cout<<counter;

 }
