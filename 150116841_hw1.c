/* Hale ÞAHÝN
 * 150116841
 * Homework1
 */



	#include <stdio.h>
	#include <stdlib.h>
    #include <math.h>
	int main()
{
    printf("\n\nA menu driven program that draws the coordinate system and some geometric shapes on the console screen\n");
    printf("-------------------------------------------------------------------------\n\n");
	printf("Which shape would you like to draw?\n1. Line\n2. Parabola\n3. Circle\n4. Exit\n");
	int c;
    scanf("%d",&c);
	  	//control the menu input
		if((c<4)&&(c>0)){

int x1,x2,c,h,k,t,r;
int a, b, x, i, j;
	 	 switch(c)
      {
            case 1:

            	printf("Line formula is y = ax + b Please enter coefficients a and b :\n");

            //take the coefficients
             if (scanf("%d", &a)==1){
               if(scanf("%d", &b)==1){
			     //control the coefficients
            	if((a>-10)&&(a<10)&&(b<10)&&(b>-10)){
            	//y ascent of cartesian coordinate system
                 for(i=10;i>-10;i--){

					   //for the first row
				if(i==10){
						for(j=-10;j<11;j++){ //x ascent of cartesian coordinate system
						if(j==0){  //make the name of ascent at the middle
							printf("y\n");
						}else if(j<0){
						    printf(" ");
						}
                }

				}else if((i<10)&&(i>0)){    //upper part
						for(j=-10;j<11;j++){
						x=(i-b)/a;    //formula for x when we know y value which is variable in here in loop

						if(j==x){
							printf("*");   //if this is the point make the *
						}else if(j<0){
							printf(" "); //if nothing pressed tab
						}else if(j==0){
							printf("|");  //if in the middle and no interception put |
						}else if((j>0)&&(j<10)){
							printf(" ");
						}else if(j==10){
							printf("\n");
						}

					}
				}else if(i==0){
					for(j=-10;j<11;j++){
						x=(i-b)/a;

						if(j==x){
							printf("*"); //if there is an interception put *
						}else if(j<0){
							printf("-");
						}else if(j==0){
							printf("-");  //if in the middle and no interception put -
						}else if((j>0)&&(j<10)){
							printf("-");
						}else if(j==10){
							printf("x\n");
						}

					}

				}else if((i<0)&&(i>=-10)){
						for(j=-10;j<11;j++){
						x=(i-b)/a;
												//same with the upper part
						if(j==x){
							printf("*");
						}else if(j<0){
							printf(" ");
						}else if(j==0){
							printf("|");
						}else if((j>0)&&(j<10)){
							printf(" ");
						}else if(j==10){
							printf("\n");
						}

					}
				}


            }
		        	//check the coefficient value and the type of them
				}else{
						printf("Please check your numbers,they must be in between -10 and  10!");
				}
			}else if(scanf("%d", &b)!=1){
				printf("They must be integer numbers.\n");
				return EXIT_FAILURE;
			}



		}else{
		   printf("They must be integer numbers.\n");
           return EXIT_FAILURE;
        }

					break;




            case 2:



            	printf("Parabola formula is y = ax^2 + bx + c Please enter coefficients a, b and c:\n");
                 //take the coefficients
             if (scanf("%d", &a)==1){
               if(scanf("%d", &b)==1){
               	 if(scanf("%d",&c)==1){
				//control  them
            	if((a>-10)&&(a<10)&&(b<10)&&(b>-10)&&(c<10)&&(c>-10)){

                 for(i=10;i>-10;i--){ //y ascent loop


				if(i==10){   //first row
						for(j=-10;j<11;j++){  //x ascent loop
						if(j==0){
							printf("y\n"); //in the middle
						}else if(j<0){
						    printf(" ");
						}
                }

				}else if((i<10)&&(i>0)){  //upper part of cartesian coordinate
						for(j=-10;j<11;j++){  //x ascent loop

							   r=a*j*j+b*j+c;  //required formula for y ascent when we know x ascent as j


						if(i==r){
							printf("*"); //intercept
						}else if(j<0){
							printf(" ");
						}else if(j==0){
							printf("|");   //if no intercept,in the middle
						}else if((j>0)&&(j<10)){
							printf(" ");
						}else if(j==10){
							printf("\n");
						}


					}
				}else if(i==0){ //middle row
					for(j=-10;j<11;j++){
					    if(j<0){
							printf("-");   //no intercept control here, just draws row
						}else if(j==0){
							printf("-");
						}else if((j>0)&&(j<10)){
							printf("-");
						}else if(j==10){
							printf("x\n");  //new line when it is in the end
						}

					}
				      	//lower part same with the upper
				}else if((i<0)&&(i>=-10)){
						for(j=-10;j<11;j++){
					     r=a*j*j+b*j+c;


						if(i==r){
							printf("*");
						}else if(j<0){
							printf(" ");
						}else if(j==0){
							printf("|");
						}else if((j>0)&&(j<10)){
							printf(" ");
						}else if(j==10){
							printf("\n");
						}

					}
				}


            }   //control the coefficients type and value

				}else{
						printf("Please check your numbers,coefficients must be in between -10 and  10!\n");
				}
			}else if(scanf("%d", &b)!=1){
				printf("They must be integer numbers.\n");
				return EXIT_FAILURE;
			}
	        }else if(scanf("%d", &c)!=1){
		     printf("They must be integer numbers.\n");
				return EXIT_FAILURE;
	        }


		}else{
		   printf("They must be integer numbers.\n");
           return EXIT_FAILURE;
        }

                  break;
            case 3:




            	printf("Circle formula is (x-a)^2 + (y-b)^2 = r^2 Please enter center's coordinates (a,b) and radius:\n");

             if (scanf("%d", &a)==1){
               if(scanf("%d", &b)==1){
               	 if(scanf("%d",&r)==1){

            	if((a>-10)&&(a<10)&&(b<10)&&(b>-10)&&(r<10)&&(r>=0)){

                 for(i=10;i>-10;i--){


				if(i==10){
						for(j=-10;j<11;j++){
						if(j==0){
							printf("y\n");
						}else if(j<0){
						    printf(" ");
						}
                }

				}else if((i<10)&&(i>0)){
					for(j=-10;j<11;j++){

						t=sqrt(r*r - (j-a)*(j-a)) +b;  //required formula for y ascents, when j is the variable x ascent
						k=-sqrt(r*r - (j-a)*(j-a)) +b;

						if((i==t)||(i==k)){
							printf("*");
						}else if(j<0){
							printf(" ");
						}else if(j==0){
							printf("|");
						}else if((j>0)&&(j<10)){
							printf(" ");
						}else if(j==10){
							printf("\n");
						}

					}
				}else if(i==0){
					for(j=-10;j<11;j++){
						k=sqrt(r*r-b*b)+a;
						h=-sqrt(r*r-b*b)+a;
						if((j==k)||(j==h)){
					    	printf("*");
						}else if(j<0){
							printf("-");
						}else if(j==0){
							printf("-");
						}else if((j>0)&&(j<10)){
							printf("-");
						}else if(j==10){
							printf("x\n");
						}

					}

				}else if((i<0)&&(i>=-10)){
						for(j=-10;j<11;j++){

						t=sqrt(r*r - (j-a)*(j-a)) +b;
						k=-sqrt(r*r - (j-a)*(j-a)) +b;

						if((i==k)||(i==t)){
							printf("*");
						}else if(j<0){
							printf(" ");
						}else if((j>0)&&(j<10)){
							printf(" ");
						}else if(j==0){
							printf("|");
						}else if(j==10){
							printf("\n");
						}

					}
				}


            }

				}else{
						printf("Please check coefficents,they must be in between -10 and  10, and radius cannot be less than 0!");
				}
			}else if(scanf("%d", &b)!=1){
				printf("They must be integer numbers.\n");
				return EXIT_FAILURE;
			}
	        }else if(scanf("%d", &r)!=1){
		     printf("They must be integer numbers.\n");
				return EXIT_FAILURE;
	        }


		}else{
		   printf("They must be integer numbers.\n");
           return EXIT_FAILURE;
        }







                  break;
    		case 4:
    			 printf("Good Bye!");
                  break;
            default:
            	printf("Please choose an option or choose to exit!");
          }

      }else{
			printf("Please choose an option in between 1 and 4.");
	  }
	  main();
 }

