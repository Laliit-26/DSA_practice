#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{

   map<int,string> mp;
   mp.insert({1000, "M"});
   mp.insert({900, "CM"});
   mp.insert({500, "D"});
   mp.insert({400, "CD"});
   mp.insert({100, "C"});
   mp.insert({90 ,"XC"});
   mp.insert({50 ,"L"});
   mp.insert({40,"XL"});
   mp.insert({10,"X"});
   mp.insert({9,"IX"});
   mp.insert({5,"V"});
   mp.insert({4,"IV"});
   mp.insert({1,"I"});

   string str = "";
   map<string, int>::iterator itr;
   for (itr = mp.end(); itr != mp.begin(); itr--)

       {
           int k = num / (itr->first);
           cout << k << " ";
           if (k > 0)
           {
               for (int j = 0; j < k; j++)
               {
                   str += itr->second;
               }
               num = num % (k);
           }
       }
    return str;
}

int main(){

string p=intToRoman(1051);
cout << p;
}
