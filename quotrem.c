// This program computes the quotient and remainder of 32 / 5.

int main () {
  int q, r, x, y;
  x = 32; y = 5;
  q = 0; r = x;
  while (r >= y) {
      q = q + 1; 
      r = r - y;
  }
}
