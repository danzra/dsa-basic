#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, m;

  cin >> m;

  cin >> n;
  int arr[m][n];
  int i, j;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int k = 0, l = 0;
  while (k < m && l < n) {
    for (i = l; i < n; i++) {
      cout << arr[k][i] << endl;
    }
    k++;
    for (i = k; i < m; i++) {
      cout << arr[i][n - 1] << endl;
    }
    n--;
    if (k < m) {
      for (i = n - 1; i >= 0; i--) {
        cout << arr[m - 1][i] << endl;
      }
      m--;
    }
    if (l < n) {
      for (i = m - 1; i >= k; i--) {
        cout << arr[i][l] << endl;
      }
      l++;
    }
  }

  return 0;
}