//
// this program determines how many hours you slept last night. 
// it assumes that: 
// you're using a 12 hour clock
// you sleep for a maximum of 24 hours
// hehe

#include <stdio.h>
#include <cs50.h>

int main(void)
{   // get user bedtime
    printf("When did you go to bed last night?\n");
    int bedtime = GetInt();
    // determine AM or PM
    printf("AM [1]\nor\nPM [2]\n");
    int b = GetInt();
    // get user wake up time
    printf("When did you wake up this morning?\n");
    int wakeup = GetInt();
    // determine AM or PM
    printf("AM [1]\nor\nPM [2]\n");
    int w = GetInt();
    // interpret inputs and determine how to calculate hours slept
    {if ((b == 1) && (w == 1))
    {
        int slept = wakeup-bedtime;
        printf("You slept for %i hours last night\n",slept);
