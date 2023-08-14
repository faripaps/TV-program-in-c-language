
#include <stdio.h>
#include <string.h>

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
    printf("----------------------------------\n");
    printf("| Channel Number | Channel Name  |\n");
    printf("----------------------------------\n");
    for (int i = 0; i < numChannels; i++) {
        printf("| %-14d | %-12s |\n", channels[i].number, channels[i].name);
    }
    printf("----------------------------------\n");
}

int main()
{
    struct Channel channels[MAX_CHANNELS];

    // Adding TV channels to the guide
    channels[0].number = 1;
    strcpy(channels[0].name, "ZBC");
    channels[1].number = 2;
    strcpy(channels[1].name, "Fx News");
    channels[2].number = 3;
    strcpy(channels[2].name, "supersport 3");
    channels[3].number = 4;
    strcpy(channels[3].name, "ESPN");
    int numChannels = 4;

    // Display the TV channel guide
    displayChannelGuide(channels, numChannels);

    return 0;
}
