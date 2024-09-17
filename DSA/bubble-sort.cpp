int arr[] = {};
int sz = size of arr / size of(int);

for(int I=0; I<sz; I++){
for (int j=0; j<sz-i-1; j++){
 if(arr[j] == arr[j+1]) {
   swap(arr[j], arr[j+1]);
}
}
}