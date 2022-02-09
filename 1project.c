//Maintain parking of vechicle
#include<stdio.h>
#include<conio.h>
int menu();                   //We have declare all the used functions
int bus();
int cycle();
int riksha();
int delete();
int ShowData();

int nor=0,nobus=0,nocycle=0,amount=0,count=0;// global variables declares  
int main()
{
   
 while(1) //It is used for the repeat the function
 {
      switch(menu()) //From switch we have call the menu function
      {
          case 1 : 
                   bus(); //We have call the menu of bus type
                   break;
          case 2 :
                  cycle(); //We have call the menu of cycle type
                  break;
          case 3 : 
                  riksha(); //We have call the menu of riksha tyoe
                  break;

          case 4 :
                  ShowData(); //We have call the menu of showdata  type
                  break;

           case 5 :
                   Delete(); //We have call the menu of delete type
                   break;

            case 6 : 
                   exit(0); //We have call the menu of exit type 

            default :
                 printf("\n Invalid choice ");                                                        
      }
   //getch();
 }

}
int menu()
{ 
    //We have to show the menu to user what to choose

    int ch;
    
    printf("\n 1.Enter bus :  \n"); //Entry Of bus
    printf("\n 2.Enter cycle : \n"); //Entry of cycle
    printf("\n 3.Enter Riksha : \n ");//Entry of riksha
    printf("\n 4.Show status : \n "); //Status of vechicle will be see here
    printf("\n 5.Delete Data : \n"); //deletion of data
    printf("\n 6. Exit \n"); // to end the loop 

     printf("\n\n Enter Your Choice : ");
    scanf("%d",&ch);
    return (ch);


}
int  Delete() //Delete function used for delete the data 
{
    nobus=0; //Numbere of bus will be 0
    nocycle=0; //Number of cycle will be 0
    nor=0;//Number of riksha will be 0
    amount=0;// Number of amount of total vechicle will be 0
    count=0;//Total vechicle will be 0
}
int  ShowData() //This function is used for showing th data of vechicle
{
    printf("\n number of bus=%d \n",nobus); //Showing the number of bus
    
    printf("\n number of cycle=%d \n",nocycle); //Showing the number of cycle
    
    printf("\n number of riksha =%d \n",nor);//Shiwing the number of Riksha
 
    printf("\n total number of Vechicle =%d \n",count); //Showing the Total number of vechicle 
     

    printf("\n Total amount gain=%d \n ",amount); //Total parking amount;

}
int riksha()
{
    printf(" Entry successful \n");
      nor++; //we have to increment the number of riksha
      amount=amount+50; //we have to add the total amount (parking charge) of riksha
      count++; // total number of vechicles to incremented
}
int cycle()
{
    printf(" Entry successful \n");
  nocycle++; //we have to increment the number of cycle
  amount=amount+20; //we have to add the total amount (parking charge) of cycle
  count++; // total number of vechicles to incremented
}

int bus()
{
    printf(" Entry successful \n");
   nobus++; //we have to increment the number of bus
   amount=amount+100; //we have to add the total amount (parking charge) of bus
   count++; // total number of vechicles to incremented
}

