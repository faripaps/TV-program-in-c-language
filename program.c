#include <stdio.h>

#define MAX_CHANNELS 10

// Structure for TV channel
struct Channel {
    int number;
    char name[20];
};

// Function to display the TV channel guide
void displayChannelGuide(struct Channel channels[], int numChannels)
{
    printf("TV Channel Guide:\n");
    printf("-------------------------------------------------\n");
    printf("Channel Number\t| Channel Name\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < numChannels; i++) {
        printf("%d\t\t| %s\n", channels[i].number, channels[i].name);
    }
    printf("-------------------------------------------------\n");
}

int main()
{
    struct Channel channels[MAX_CHANNELS];

    // Adding TV channels to the guide
    channels[0].number = 1;
    strcpy(channels[0].name, "CBS");
    channels[1].number = 2;
    strcpy(channels[1].name, "NBC");
    channels[2].number = 3;
    strcpy(channels[2].name, "ABC");
    channels[3].number = 4;
    strcpy(channels[3].name, "FOX");
    channels[4].number = 5;
    strcpy(channels[4].name, "ESPN");
    int numChannels = 5;

    // Display the TV channel guide
    displayChannelGuide(channels, numChannels);

    return 0;
}
