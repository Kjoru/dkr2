double findMaxpos(double* arr, int size);
int main() {
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);

  double arr[size];
  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  double max = findMaxpos(arr, size);
  printf("Max positive value: %f\n", max);
  return 0;
}

double findMaxpos(double* arr, int size) {
  double max = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 0 && arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
