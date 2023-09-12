#include <stdio.h>

void toh(int n, char source, char intermediate, char destination)
{
    if (n > 0)
    {
        // Move n-1 disks from source to intermediate using destination as the auxiliary rod
        toh(n - 1, source, destination, intermediate);

        // Move the nth disk from source to destination
        printf("\nMoved %dth disk from %c to %c", n, source, destination);

        // Move n-1 disks from intermediate to destination using source as the auxiliary rod
        toh(n - 1, intermediate, source, destination);
    }
}

int main()
{
    int n;
    printf("How many disks? ");
    scanf("%d", &n);
    toh(n, 'S', 'I', 'D');

    return 0;
}
