#include<stdio.h>

int main()
{
        int incoming, outgoing, buck_size, n, store=0;
        printf("Enter the bucket size, outgoing rate and no.of inputs: ");
        scanf("%d%d%d", &buck_size, &outgoing, &n);
        while(n != 0)
        {
                printf("Enter the incoming bucket size: ");
                scanf("%d", &incoming);
                printf("incoming bucket size %d\n, incoming");
                if(incoming <= (buck_size-store))
                {
                        store += incoming;
                        printf("Bucket buffer size %d\n", store, buck_size);
                }
                else
                {
                        printf("Dropped %d no of packets\n", incoming-(buck_size-store));
                        printf("Bucket buffer size %d out of %d\n",store,buck_size);
                }
        store = store - outgoing;
        printf("After outgoing %d packet left out of %d in buffer\n",store,buck_size);
        n--;
        }
        return 0;
}
