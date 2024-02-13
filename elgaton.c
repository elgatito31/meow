#include <stdio.h>
#include <pthread.h>

void *print_even(void *arg) {
  for (int i = 2; i <= 10; i += 2) {
    printf("Even: %d\n", i);
  }
  return NULL;
}

void *print_odd(void *arg) {
  for (int i = 1; i <= 9; i += 2) {
    printf("Odd: %d\n", i);
  }
  return NULL;
}

int main() {
  pthread_t thread_even, thread_odd;

  // Create the threads
  pthread_create(&thread_even, NULL, print_even, NULL);
  pthread_create(&thread_odd, NULL, print_odd, NULL);

  // Wait for the threads to finish
  pthread_join(thread_even, NULL);
  pthread_join(thread_odd, NULL);

  printf("All threads finished!\n");
  return 0;
}
