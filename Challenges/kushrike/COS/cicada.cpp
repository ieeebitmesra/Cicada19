#include <bits/stdc++.h>
#include <ctime>
#include <iostream>

using namespace std;
int main() {
  srand(time(0));
  int a, b, c;
  string t = "D7i`u302+X~7rXli7pXohpXs7Xd7i0u7kXS&J4"; // Flag XORed with 7
  int counter = 0; // STORES THE NUMBER OF CONSECUTIVE CORRECT INPUTS
  clock_t start = clock();
  while (true) {

    int a = (rand() % 100) + 1;
    int b = (rand() % 100) + 1;
    int c = (std::max(a, b) + (a + b)) / 2;
    cout << a << " " << b << " " << c << "\n";

    // c is biggest integer

    int in;

    cin >> in;
    // CALCULATE THE COSINE VALUE
    int cos = floor((((b * b) + (a * a) - (c * c)) / (1.00 * 2 * a * b)) * 100);
    if (clock() - start < 2000) // ENSURE THE TIME ELAPSED IS WITHIN 2 SECONDS
    {
      if (cos == in) {
        counter++; // CORRECT INPUT OBTAINED
        
        if (counter == 6) {
          cerr << "3301{";
          for (int i = 0; i < t.size(); i++)
            cerr << char(t[i] ^ 7);
          cerr << "}";
          break;
        }
      } else
        exit(0);
    } else {
      cerr << "Sorry kiddo, you gotta get the Timestone !";
      return 0;
      exit(5000);
    }
  }
}