int main(void) {
  int nHrs = 40;
  int nDays = 7;
  
  float avg = nHrs/(float)nDays;
  printf("%d hours in %d days\n", nHrs, nDays);
  printf("work %.1f hours per day!\n", avg);
}