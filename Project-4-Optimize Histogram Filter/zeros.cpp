#include "headers/zeros.h"

using namespace std;

vector < vector <float> > zeros(int height, int width) {
	int i;
  
	// OPTIMIZATION: Reserve space in memory for vectors
	vector < vector <float> > newGrid;
	vector <float> newRow;
  	newGrid.reserve(height);
  	newRow.reserve(width);

  	// OPTIMIZATION: nested for loop not needed
    // because every row in the matrix is exactly the same
 

   	newRow.assign(width, 0);
	for (i=0; i<height; i++) {
	newGrid.push_back(newRow);
	}
	return newGrid;
}