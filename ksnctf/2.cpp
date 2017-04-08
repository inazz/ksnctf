
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string txt = "EBG KVVV vf n fvzcyr yrggre fhofgvghgvba pvcure gung ercynprf n yrggre jvgu gur yrggre KVVV yrggref nsgre vg va gur nycunorg. EBG KVVV vf na rknzcyr bs gur Pnrfne pvcure, qrirybcrq va napvrag Ebzr. Synt vf SYNTFjmtkOWFNZdjkkNH. Vafreg na haqrefpber vzzrqvngryl nsgre SYNT.";
  for (int shift = 0; shift < 'z' - 'a' + 1; shift++) {
    for (int i = 0; i < txt.size(); i++) {
      int c = txt[i];
      if ('a' <= c && c <= 'z') {
        c = ((c - 'a') + shift) % ('z' - 'a' + 1) + 'a';
      } else if ('A' <= c && c <= 'Z') {
        c = ((c - 'A') + shift) % ('Z' - 'A' + 1) + 'A';
      }
      cout << (char)c;
    }
    cout << endl << endl;
  }
  return 0;
}
