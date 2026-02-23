// A ticket system in C programming

// INFO GIVEN
/*
    Prices For Invidual and Accessories

    Adult - $50
    Child - $20
    Caemra - $100
*/

/*
    TODO: Take input from user put it in a loop
    No of Adult = 2
    No of Child = 1
    No of Camera = 1

    Total Price: <Calculated Price>
    
    Then Ask User For (Y/N) 

    Condition: If user enters 'Y' Then the function runs again
*/

/*
    If the user enters "N" then it will calculate all the prices and display the output as

            Collection Statement
    ------------------------------------

        Adult      30       1500.00
        Child      10        200.00
        Camera     05        500.00
    ------------------------------------
                            2200.00

*/

#include <stdio.h>

int main() {
    int adult_price_043 = 50;
    int child_price_043 = 20;
    int camera_price_043 = 100;

    int no_of_adult_043, no_of_child_043, no_of_camera_043;
    int total_adult_price_043, total_child_price_043, total_camera_price_043, total_price_043;

    int loop_adults_043 = 0;
    int loop_childrens_043 = 0;
    int loop_cameras_043 = 0;
    int loop_final_total_043 = 0;

    char choice_043;

    do
    {
        // Take Input From Users
        printf("Enter The Number Of Adults: ");
        scanf("%d", &no_of_adult_043);
        printf("Enter The Number Of Childrens: ");
        scanf("%d", &no_of_child_043);
        printf("Enter The Number Of Cameras: ");
        scanf("%d", &no_of_camera_043);

        // Calculate Total Price
        total_adult_price_043 = (adult_price_043 * no_of_adult_043);
        total_child_price_043 = (child_price_043 * no_of_child_043);
        total_camera_price_043 = (camera_price_043 * no_of_camera_043);
        total_price_043 = total_adult_price_043 + total_child_price_043 + total_camera_price_043;


        // Calculate Loop Value
        loop_adults_043 += no_of_adult_043;
        loop_childrens_043 += no_of_child_043;
        loop_cameras_043 += no_of_camera_043;
        loop_final_total_043 += total_price_043;


        // Display Total Price And Ask The User To Enter Another Ticket
        printf("Total Price: %d\n", total_price_043);
        printf("Do You Want To Continue/Enter Another Ticket? (Y/N): ");
        scanf(" %c", &choice_043);


    } while (choice_043 == 'Y' || choice_043 == 'y');
    
    // Collection Statement

    printf("\nCollection Statement\n");
    printf("--------------------------------------------\n");
    printf("Adult            %d         %d\n", no_of_adult_043, total_adult_price_043);
    printf("Child            %d         %d\n", no_of_child_043, total_child_price_043);
    printf("Camera           %d         %d\n", no_of_camera_043, total_camera_price_043);
    printf("--------------------------------------------\n");

    printf("Total Price: %d\n", loop_final_total_043);

    return 0;
}

