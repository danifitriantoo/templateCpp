#include <iostream>

using namespace std;


main() {

	// arrayData
	int arrayData[10] = {1,2,3,4,5};
	
	// business logic
	for(int i =0; i< 5; i++) 
	{
		if(arrayData[i] %2 == 0)
		{
			cout << arrayData[i] << " =";
			cout << " genap" << endl;
		}
		else
		{
			cout << arrayData[i] << " =";
			cout << " ganjil" << endl;
		}
	}

}
