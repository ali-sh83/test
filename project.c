#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int j = 0; j < t; j++) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int adad = 0;
        int max = 0;
        for (int k = 0; k < n; k++) {
            if (a[k] == 0) {
                adad++;

                if (adad > max) {
                    max = adad;
                }
            } else adad = 0;


        }
        printf("%d \n", max);


    }

}
