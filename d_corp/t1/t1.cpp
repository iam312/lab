#include <iostream>
#include <list>

using namespace std;

int main( int argc, char* argv[] ) {
	// INPUT
	int i_pos_a[100] = {1, 2, 5, 6, 10, 100, }; 
	int i_pos_b[100] = {3, 15, 20, 30, }; 
	int i_pos_c[100] = {12, 18, 340, 70, }; 

	list<int*> pos_list = new list<int*>;

	pos_list.push_back(i_pos_a);
	pos_list.push_back(i_pos_b);
	pos_list.push_back(i_pos_c);


	// processing...
	for ( list<int*>::iterator itr_list = pos_list.begin(); itr_list != pos_list.end(); ++itr_list ) {
		cout << itr_list;
	}
	
//	for ( int idx = 0; idx < 100; idx++ ) {
//		if ( i_pos_a[idx] == 0 )
//			break;
//		cout << i_pos_a[idx];
//	}

	return 0;
}

