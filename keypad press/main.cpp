#include <iostream>
#include <stdio.h>
using namespace std;

void subsets(int i, int j)
{
	static char input[] = "shubham";
	static char output[sizeof input];

    output[j] = '\0';
	printf("%s\n", output);

    while(input[i] != '\0') {
        output[j] = input[i];
        subsets(i + 1, j + 1);
        do ++i;
        while(input[i] == input[i - 1]);
    }
}

int main()
{
    cout << "The subsets of rum are: " << endl;
    subsets(0, 0);
//    system("Pause");
    return 0;
}
