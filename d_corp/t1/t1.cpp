#include <iostream>
#include <list>
#include <vector>

using namespace std;

int get_distance(list<int>& list_values ) {
	int distance = -1;

	// get min
	// get max
	
	return distance;
}

int main( int argc, char* argv[] ) {
	// INPUT
	int arr_pos_a[100] = {1, 2, 5, 6, 10, 100, }; 
	int arr_pos_b[100] = {3, 15, 20, 30, }; 
	int arr_pos_c[100] = {12, 18, 340, 70, }; 

	list<int*> list_pos;
	list_pos.push_back(arr_pos_a);
	list_pos.push_back(arr_pos_b);
	list_pos.push_back(arr_pos_c);

	vector<int> vector_idx;
	vector_idx.push_back(0);
	vector_idx.push_back(0);
	vector_idx.push_back(0);

	int count = 0;
	while ( true ) {
		
		for ( list<int*>::iterator itr_list = list_pos.begin();
			  itr_list != list_pos.end();
			  itr_list++ ) {

			cout << *(*itr_list + 0) << endl;
		}




		if ( count++ > 5 ) {
			break;
		}
	}


//	for ( list<int>::iterator itr_list = list_total.begin();
//		  itr_list != list_total.end();
//		  ++itr_list ) {
//		cout << *itr_list << endl;
//	}


	
//	for ( int idx = 0; idx < 100; idx++ ) {
//		if ( i_pos_a[idx] == 0 )
//			break;
//		cout << i_pos_a[idx];
//	}

	return 0;
}

