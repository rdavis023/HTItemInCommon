#include "ItemInCommon.h"

bool itemInCommon(vector<int> vect1, vector<int> vect2) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function checks if two vectors have a        |
  //   |   common element.                                   |
  //   | - It uses an unordered_map to store elements from   |
  //   |   the first vector.                                 |
  //   | - Then it checks each element from the second       |
  //   |   vector against the map.                           |
  //   |                                                     |
  //   | Return type: bool                                   |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'myMap' stores elements from 'vect1' as keys.     |
  //   | - Loop through 'vect2' and check against 'myMap'.   |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
  unordered_map<int, bool>
      myMap; // Create an unordered_map to store elements from vect1

  // Store elements from vect1 in myMap
  for (int elem : vect1) {
    myMap[elem] = true;
  }

  // Check each element from vect2 against myMap
  for (int elem : vect2) {
    if (myMap.find(elem) != myMap.end()) {
      return true; // Found a common element
    }
  }

  return false; // No common elements found
}