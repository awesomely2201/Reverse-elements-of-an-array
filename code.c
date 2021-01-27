void reverseArray ( int a[], int n)
{
  int b[n];
  for(int i=0;i<n;i++)
    b[i]=a[i];
  for(int i=n-1;i>=0;i--)
    a[i]=b[n-1-i];
}
