#include<stdio.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

   void alarm_handler(int signum){
   	printf("alarm! time to wake up!\n");
   	exit(0);
   }
     
     int main(){
     	//set the alarm handler 
     	function
     	 signal(SIGALRM, alarm_handler);
     	
     	//set the alarm to go off after 5 seconds
     	alarm(5);
     	
     	printf("alarm set for 5 seconds from now....\n");
     	
     	//infinite loop to keep the program running
     	    
     	    while(1){
     	    	//Do nothing
			 }
			 return 0;
	 }