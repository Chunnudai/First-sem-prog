#include<stdio.h>
#include<windows.h>
void main()
{
    system("color 1E");
	int x;

	// Loop for sound Jingle
	for (x = 0; x < 2; x++) {
		Beep(523, 500);
	}

	// sound Bell
	Beep(523, 800);

	Sleep(200);

	// Loop for sound Jingle
	for (x = 0; x < 2; x++) {
		Beep(523, 500);
	}

	// sound Bell
	Beep(523, 800);

	// Sound for rest of the tone
	Sleep(200);

	Beep(523, 500);

	Sleep(50);

	Beep(659, 400);

	Sleep(50);

	Beep(440, 400);

	Sleep(50);

	Beep(494, 400);

	Sleep(50);

	Beep(523, 750);

	Sleep(400);

	Beep(600, 400);

	Sleep(100);

	Beep(600, 350);

	Sleep(200);

	Beep(600, 300);

	Sleep(150);

	Beep(600, 250);

	Sleep(150);

	Beep(600, 150);

	Sleep(150);

	Beep(550, 250);

	Sleep(150);

	Beep(555, 350);

	Sleep(50);

	Beep(555, 200);
	Sleep(150);

	Beep(555, 200);

	Sleep(150);

	Beep(690, 200);

	Sleep(150);

	Beep(690, 200);

	Sleep(150);

	Beep(610, 200);

	Sleep(150);

	Beep(535, 160);

	Sleep(100);

	Beep(500, 150);

		Beep(500, 50);

	Sleep(200);

	Beep(700, 200);
    printf("Kaun Banega Crorepati\n");
    int i, points=0,n,choice,score=0;
    do
    {
        printf("Enter\n 1.Start\t 2.Exit\n");
        scanf("%d",&n);
        if(n == 1)
        {
            printf(" We have total 10 Questions in the game and 1 correct answer = 10 points\n ");
            for(int i=1; i<=10; i++)
            {
                switch(i)
                {
                    case 1: printf("What is the range of values that can be stored by int datatype ic C ?\n 1 -(2^31) to (2^31)-1 \t 2 -256 to 255 \n 3 -(2^63) to (2^63)-1 \t 4 0 to (2^31)\n");
                            scanf("%d",&choice);
                            if(choice == 1){
                                printf("Your answer is correct\n");
                                score = score + 10;
                            }
                            else{
                                printf("your answer is wrong\n");
                            }
                            break;
                    case 2: printf("How is an array initialized in C language ? \n 1 int a[3] = {1,2,3}; \t 2 int a = {1,2,3};\n 3 int a[] = new int[3] \t 4 int a(3) = [1,2,3];\n");
                            scanf("%d",&choice);
                            if(choice == 1){
                                printf("Your answer is correct\n");
                                score = score + 10;
                            }
                            else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 3: printf("In ODI cricket, who created the record of scoring the fastest century in just 31 balls ?\n 1 Corey Anderson \t 2 AB De villiars \n 3 Shahid Afridi \t 4 Mark Bounccher\n");
                            scanf("%d",&choice);
                            if(choice == 2){
                                printf("Your answer is correct\n");
                                score = score + 10;
                            }else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 4: printf("Which of the following gods is also known as 'Gauri Nandan'?\n 1 Agni \t 2 Indra \n 3 Hanuman \t 4 Ganesha \n");
                            scanf("%d",&choice);
                            if(choice == 4){
                                printf("Your answer is correct\n");
                                score = score + 10;
                            }
                            else{
                                printf("You have answer is wrong\n");
                            }
                            break;
                    case 5: printf("In the game of ludo the discs or tokens are of how many colors\n 1 One \t 2 Two \n 3 Three \t 4 Four \n");
                            scanf("%d",&choice);
                            if(choice == 4){
                                printf("Your answer is correct \n");
                                score = score + 10;
                            }else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 6: printf("Who wrote the introduction to the English translation of Rabindranath Tagore's Gitanjali ?\n 1 P.B Shelley \t 2 Alfred Tennyson \n 3 W.B Yeats \t 4 T.S Elliot\n");
                            scanf("%d",&choice);
                            if(choice == 3)
                            {
                                printf("Your answer is correct\n");
                                score = score + 10;
                            }
                            else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 7: printf("Who won the t20 World Cup of 2022 ?\n 1 India \t 2 Australia \n 3 Pakistan \t 4 England\n");
                            scanf("%d",&choice);
                            if(choice == 4){
                                printf("Your answer is correct \n");
                                score = score + 10;
                            }else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 8: printf("Who won the First IPL tropy ?\n 1 Chennai super kings \t 2 Rajasthan Royals \n 3 Royal challenger Banglore \t 4 Mumbai Indians\n");
                            scanf("%d",&choice);
                            if(choice == 2){
                                printf("Your answer is correct \n");
                                score = score + 10;
                            }else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 9: printf("Who won the FIFA World in 2022 ?\n 1 Brazil \t 2 France \n 3 Argentina \t 4 Portugal\n");
                            scanf("%d",&choice);
                            if(choice == 3){
                                printf("Your answer is correct \n");
                                score = score + 10;
                            }else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                    case 10: printf("Who is the Body Building Motivation of Indian youngster ?\n 1 Ronnie Collmean \t 2 Jai shri Hanuman  \n 3 Chris Bum \t 4 Arnold \n");
                            scanf("%d",&choice);
                            if(choice == 2){
                                printf("Your answer is correct \n");
                                score = score + 10;
                            }else{
                                printf("Your answer is wrong\n");
                            }
                            break;
                }
            }
        }
        if(n == 2)
        {
            break;
        }
        n++;
    } while (n != 2);
    printf("Game Ended \n Your Score = %d\n Thanks for playing",score); 
}
