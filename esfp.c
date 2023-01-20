#include <stdio.h>

#include <string.h>

int main ()

{
printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:
    printf("                               ______________________________________________________________________________________________\n");
    printf("                              |                                     Ganpat University                                        |\n");
    printf("                              |----------------------------------------------------------------------------------------------|\n");
    printf("                              |                                         PID: 492                                             |\n");
    printf("                              |               Project Name:             SAFAR                                                |\n");
    printf("                              |                                     Subject: ESFP-1                                          |\n");
    printf("                              |                                        Batch: 12                                             |\n");
    printf("                              |                                  Enrollment No.: CS 23                                       |\n");
    printf("                              |                                       Designed by                                            |\n");
    printf("                              |                                     Vaidehi Ahir                                             |\n");
    printf("                              |______________________________________________________________________________________________|\n");

printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"admin")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"3104")==0)

{

printf("You have successly loged in.\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}
 int choice = -1;
    printf("\n\n\n\tSAFAR.\n\n\t");
   
    // Menu display
    printf("\nMENU:\n1. ABOUT US\n2. MODES\n3. CONTACT \n4. EXIT");
   
    // Flag variable for termination of loop
    int flag = 1;
   
    // Infinite Loop for choice input
    while(flag){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
       
        // Switch statements
        switch(choice){
            case 1:
                printf("\nPhilosophy:\n");
                printf("Our mission is to be the leading and most trustworthy transportation company that sets the standard for professionalism reliability and transparency to its customers.\n");
                 printf("\nStrenght:\n");
                printf("We have varied experience with global networking travel management companies.Broad expertise in the local travel market.Client-first approach to business.\n");
                 printf("\nSpeciality:\n");
                printf("Our excellent rapport of over two decades with the Airlines, Indian Railways, Differnt Bus Oraganizations like GSRTC has given us the confidence to do the best in times of crisis or emergencies and won us the trust of our clients.Robust decision making process owing to us being a single owner company enables us to Focus on exceeding service expectation.\n");
                break;
            case 2:
                printf("MODES\n");
                printf("\nBUS:\n");
                printf("Public transport bus services are generally based on regular operation of transit buses along a route calling at agreed bus stops according to a published public transport timetable\n");
                 printf("\nTRAIN:\n");
                printf("Railway Services means those uses integral to the passenger and freight operations of a railway such as railway lines, marshalling yards, sidings, shunting yards, train stations, offices for railway administration, staff housing and terminals.\n");
                 printf("\nFLIGHT:\n");
                printf("Airways are defined with segments within a specific altitude block, corridor width, and between fixed geographic coordinates for satellites navigation system, or between ground-based radio transmitter navigational aids (navaids; such as VORs or NDBs) or the intersection of specific radials of two navaids\n");
                break;
            case 3:
            	printf("CONTACT\n");
                printf("> Name: Vaidehi Ahir\n ");
                printf("> Mobile: +91 XXXXXX7890\n");
                printf("> Email: mail@mail.com\n ");
                break;
                 case 4:
                printf("THANKS FOR VISITING!!!\n");
                flag = 0;  // To terminate the loop
                break;
            default:
                printf("> Invalid Input\n");
                break;
        }
    }

return 0;

}
