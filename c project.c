#include<stdio.h> 
int main()
{
int n,t,i,id,date,a;
float rs;
char  movie; 
printf("*****WELCOME TO BOOK MY SHOW*****\n\n\n"); 
printf("Printing the name of the theatres: \n");
printf("1.LA CINEMAS\n2.MEGASTAR\n3.PVR\n\n\n");
printf("Choose the Theatre: \n");
scanf("%d",&a);
if(a==1)
{
printf("WELCOME TO LA\n");    
}
else if(a==2)
{
    printf("WELCOME TO MEGASTAR\n");
}
else if(a==3)
{
   printf("WELCOME TO PVR\n"); 
}
else
{
    printf("Database Error\n");
}

printf("Printing the name of the movies: \n");

printf("1.LEO\n2.CAPTAIN MILLER\n3.IRUGAPATRU\n\n\n");

printf("Choose the movie: \n");

scanf("%d",&id);


if(id==1)
{

printf("Entering into the LEO..............\n");
}

else if(id==2)
{

printf("Entering into the CAPTAIN MILLER..........\n"); 
}
else if(id==3)

{
   printf("Entering into the IRUGAPATRU..........\n"); 
} 

 else
{

printf("Database error..... \n");

return 0;

} 
printf("You Are Entering into the Movie Ticket Booking Section\n\n\n");
printf("The amount of movie is 180 Rs. per audience\n"); 
printf("Number of Audience\n");
scanf("%d", &n);
printf("Enter the date:");
scanf("%d",&date);
printf("Choose the time \n 1.11:00 am\n 2.2:30 pm\n 3.6:30 pm\n 4.10:30pm\n\n\n");
scanf("%d",&t);
if(t==1)
{
    printf("Your time is:11:00 am\n\n");

} 
else if(t==2)
{

printf("Your time is:2:30 pm\n\n");

} 
else if(t==3){

printf("Your time is:6:30 pm\n\n");
}

else
{
    printf("Your time is:10:30 pm\n\n");

}
printf("PRINTING ALL THE DETAILS OF THE TICKETS...\n");
    if(id==1)
    {
        printf("MOVIE NAME : LEO\n");
    }
else if(id==2)
{
    printf("MOVIE NAME: CAPTAIN MILLER\n ");
    
}
else if(id==3)
{
    printf("MOVIE NAME: IRUGAPATRU\n");
}
else
{
    printf("DATABASE PROBLEM\n");
}

printf("Date:%d:11:2023\n", date); 
rs=n*180;

printf("Amount of Rs:%f\n",rs);

if(t==1)

printf("Time is:11:00 am\n");

else if(t==2)
{

printf("Time is:2:30 pm\n");

}
else if (t==3)

{
printf("Time is:6:30 pm\n");

}
else
{

printf("Time is:10:30 pm\n\n\n");
}


printf("THANK YOU ! ENJOY THE SHOW...");
return 0;
}



