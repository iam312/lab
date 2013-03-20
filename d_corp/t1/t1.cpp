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



void process_distance( list<int*> list_pos ) {

	vector<int> vector_cursor;

	int i_howmany_list = list_pos.size();

	for ( int i = 0; i < i_howmany_list; i++ ) {
		vector_cursor.push_back(0);
	}


	int count = 0;
	while ( true ) {
		
		for ( list<int*>::iterator itr_list = list_pos.begin();
			  itr_list != list_pos.end();
			  itr_list++ ) {

			cout << *(*itr_list + 0) << endl;
		}

//		vector<int>::iterator itr = vector_cursor.begin();
//		cout << "val :" << *itr << endl;
//		cout << "cursor 1 :" << vector_cursor.at(0) << endl;
//		cout << "cursor 2 :" << vector_cursor.at(1) << endl;
//		cout << "cursor 3 :" << vector_cursor.at(2) << endl;
//
//		vector_cursor.at(0) = 5;
//
//
//		if ( count++ > 5 ) {
//			break;
//		}
	}
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

	process_distance( list_pos );

	return 0;
}

