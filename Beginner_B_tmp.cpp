#include <stdio.h>
#include <vector>
using namespace std;
int main() {
   vector<int> v;
   int N, in[10000];
   scanf("%d", &N);
   for (int i = 0; i < N; i++) {
      scanf("%d", &in[i]);
      v.push_back(i);
   }
   int i, idx = 0;
   for (i = 0; i < N; i++) {
      bool chk[10000] = { false, };
      while (in[v[idx]] != 3) {
         if (chk[idx]) {
            printf("%d", i);
            return 0;
         }
         chk[idx] = true;
         idx += in[v[idx]] - 3;
         while (idx >= N - i) idx -= v.size();
         while (idx < 0) idx += v.size();
      }
      v.erase(v.begin() + idx);
      if (idx == v.size()) idx = 0;
   }
   printf("%d", i);
   return 0;
}
/*
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
   FILE *ifs, *ofs;
   for (int tc = 1; tc <= 45; tc++) {
      char ifn[30], ofn[30];
      sprintf(ifn, "./testdata/%d.in", tc);
      sprintf(ofn, "./testdata/%d.ans", tc);
      ifs = fopen(ifn, "r");
      ofs = fopen(ofn, "w");

      vector<int> v;
      int N, in[10000];
      fscanf(ifs, "%d", &N);
      for (int i = 0; i < N; i++) {
         fscanf(ifs, "%d", &in[i]);
         v.push_back(i);
      }
      int i, idx = 0;
      for (i = 0; i < N; i++) {
         bool chk[10000] = { false, };
         while (in[v[idx]] != 3) {
            if (chk[idx]) goto ex;
            chk[idx] = true;
            idx += in[v[idx]] - 3;
            while (idx >= N - i) idx -= v.size();
            while (idx < 0) idx += v.size();
         }
         v.erase(v.begin() + idx);
         if (idx == v.size()) idx = 0;
      }
   ex:
      fprintf(ofs, "%d", i);
      fclose(ifs);
      fclose(ofs);
   }
   return 0;
}
*/
