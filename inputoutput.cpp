/* 
   Example file showing how to write a program that reads
   input from `input.txt` in the current directory
   and writes output to `output.txt` in the current directory
*/
#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#define int long long
#define MOD 1000000007
#define INF 9e18
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define ii pair<int,int>
#define sz(x) (int)(x).size()
#define GCD(x,y) __gcd(x,y)
#define LCM(x,y) x*y/__gcd(x,y)
#define roof(a,b) a/b +(a%b!=0)
#define bcnt(x) __builtin_popcount(x)
#define for0(i,a,b) for(int i=a;i<b;i++)
#define for1(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

/* If you wish you can include any more files here.
   (from standard libraries only) */

int main() {
  std::ifstream in("input.txt");
  int num_lines = 5;

  /* Here we can read in the input file */
  /* In this example, we're reading all the lines of file
     `input.txt` and then ignoring them. 
     You should modify this part of the
     program to read and process the input as desired */

  while (in) {
    std::string line;
    std::getline(in, line);
    if (!line.empty()) /* ignore empty lines */
      num_lines++;
  }
  /* In this example, we're writing `num_lines` to
     the file `output.txt`.
     You should modify this part of the
     program to write the desired output */
  std::ofstream out("output.txt");
  Cout<<num_lines<<endl;
  return 0;
}

