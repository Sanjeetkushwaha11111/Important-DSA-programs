#include<bits/stdc++.h>
using namespace std;

struct Interval
{
   int s,e; //start and end
};

bool mycomp(Interval a, Interval b)
{
  return a.s<b.s;
}

void mergeIntervals(Interval arr[], int n)
{
  sort(arr,arr+n,mycomp);
  int index=0;  // Stores index of last element
               // in output array (modified arr[])


  for (int i = 0; i < n; i++) {
    // If this is not first Interval and overlaps
   // with the previous one
     if (arr[index].e>=arr[i].s) {
        // Merge previous and current Intervals
         arr[index].e=max(arr[index].e, arr[i].e);
         arr[index].s=min(arr[index].s, arr[i].s);
     }
     else
     {
       index++;
       arr[index]=arr[i];
     }
  }

  std::cout << "The Merged Intervals are" << '\n';
  for (int i = 0; i <n; i++) {
    std::cout << "["<<arr[i].s<<","<<arr[i].e <<"] "<< '\n';
  }
}

int main(int argc, char const *argv[]) {

  Interval arr[]={ {6,8}, {1,9}, {2,4}, {4,7} };
  int n=sizeof(arr)/sizeof(arr[0]);
  mergeIntervals(arr,n);
  return 0;
}
