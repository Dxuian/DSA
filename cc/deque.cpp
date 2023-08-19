#include<bits/stdc++.h>
using namespace std;

int main() {
  deque<int> syt ;
  syt.push_back(1);
    syt.push_back(2);
        syt.push_back(3);
            syt.push_back(4);
            syt.push_back(5);
                syt.push_back(6);
                syt.push_back(7);
                    syt.push_back(8);
                    syt.push_back(9);
                        syt.push_back(10);

  // Access elements using the [] operator
  std::cout << "mydeque[0] = " << syt[0] << std::endl;
  std::cout << "mydeque[2] = " << syt[2] << std::endl;
  std::cout << "mydeque[4] = " << syt[4] << std::endl;

  return 0;
}