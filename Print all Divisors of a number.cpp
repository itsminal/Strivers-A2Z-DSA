int* printDivisors(int n, int &j){

// Write your code here

int *ans=new int[n];

j=0;

for(int i=1;i<=n;i++)

{

  if (n % i == 0) {
    ans[j++] = i;
  }
}

return ans;

}
