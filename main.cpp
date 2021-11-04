#include <iostream>

int main () {

    char answer = 'c';
    int rating = 0;

    //intro
    std::cout
            << "\nWelcome to the Game of Life!! You will be assuming the life Anthony Harley, a boy living in Las Vegas, Nevada. As a boy he moved around a lot and when he found himself in what many call \"Sin City\", he was interested in many things including his Faith in Christ, basketball, math, creation, and entrepreneurship. Now as a regular teenage boy at 16, the \"Decade of Decision\" is beginning. Let's see if you can make the right choices to see the success and happiness of one boy in a big city. (Press enter to continue)\n\n";
    std::cin.ignore();

    //Question 1
    std::cout << "STEP 1 (The first of 10 big ones)\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout
            << "1.) Currently a sophomore at the local public school , Coronado High school, all of your friends are two years older than you. This means they are all graduating. Your Mom recommends transferring to a private school, David O. McKay Academy. You will have 1 or two friends there but besides that you won't know anyone and it won't be your normal high school experience. But, it is a religious school and could be beneficial in those aspects. The smaller school vibe could also possible be good. They are also doing a Europe trip at the end of the year for the high school....\n\n";
    std::cout << "A) Stay at the local high school with the people you already know.\n\n";
    std::cout << "B) Take a risk at the new \"David O. McKay Academy\"\n\n";


    //logic
    while (answer != 'A' && answer != 'a' && answer != 'B' && answer != 'b') {
        std::cin >> answer;
        if (answer == 'A' || answer == 'a') {
            std::cout << "The local high school it is.\n\n";
        } else if (answer == 'B' || answer == 'b') {
            std::cout << "Time for a new adventure\n\n";
        } else {
            std::cout << "Invalid Answer. Please Try again.\n\n";
        }
    }

    if (answer == 'A' || answer == 'a') {
        answer = 'c';
        //Question 2.1
        std::cout << "STEP 2 ()\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout
                << "2.) Another year goes by. You tried out again for the basketball team at Coronado. Again it didn't work out. (Everyone sees this work except for coaches, man). Your family is considering moving and is on the fence about it. They know you are in a good academic program at school but they've been feeling it's time to move for a while now and right now it's financially right. What will be your response? \n\n";
        std::cout << "A) Stay here! You know a lot of people and I mean it's senior year.\n\n";
        std::cout << "B) Whatever is right for the family is best. You can adapt to whatever situation.\n\n";

        //Q2.1 logic

        while (answer != 'A' && answer != 'a' && answer != 'B' && answer != 'b') {
            std::cin >> answer;
            if (answer == 'A' || answer == 'a') {
                std::cout
                        << "The family has chosen to stay a little longer. Maybe they can look again in a couple years.\n\n";
            } else if (answer == 'B' || answer == 'b') {
                std::cout
                        << "The perfect house came and went but last second your family felt really good about a house in a different area of town. New adventures await.\n\n";
            } else {
                std::cout << "Invalid Answer. Please Try again.\n\n";
            }
        }
        answer = 'c';
    }


    if (answer == 'B' || answer == 'b') {
        answer = 'c';
        //Question 2.2
        std::cout << "STEP 2 ()\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout
                << "2.) What a success!! The new school was a risk but it was just what you needed. You made some lifelong friends and were able to learn more about yourself and find lots of real self-improvement. That being said there is one thorn in the midst of this. Due to low government funding, the school will be forced to relocate and change as a school, losing a lot of what made it great. It was a really great one-and-done. Additionally your family has just moved to the other side of town and you don't really know anyone or anything. You now have a similar decision to make. Now it is the local charter school versus the local public school. The charter school is just known for its academics while the public school is one of the worst known in the valley. But who knows who you'll meet at both...\n\n";
        std::cout << "A) Join the smaller charter school, American Preparatory Academy.\n\n";
        std::cout << "B) Enroll in the public school down the street, Sierra Vista High School.\n\n";

        //Q2.2 logic

        while (answer != 'A' && answer != 'a' && answer != 'B' && answer != 'b') {
            std::cin >> answer;
            if (answer == 'A' || answer == 'a') {
                std::cout << "APA Eagles have got another great one.\n\n";
            } else if (answer == 'B' || answer == 'b') {
                std::cout << "One more SV Mountain Lion for the class of 2018!!\n\n";

            } else {
                std::cout << "Invalid Answer. Please Try again.\n\n";
            }
        }
        answer = 'c';
    }

    std::cout << "Okay, so at this point in the game, how is Anthony's life going? Like 1-10??\n\n";
    while (rating < 10) {
        std::cin >> rating;
        switch (rating) {
            case 0:
                std::cout << "You're really not that funny.... do it again.\n";
                break;
            case 1:
                std::cout << "You know no debt and $10 which is what he has makes him richer 15% of US households??? That's pretty good if you ask me. Do it again.\n";
                break;
            case 2:
                std::cout << "Okay, I don't know who put you on that high mount... Do it again.\n";
                break;
            case 3:
                std::cout << "Says the loser. Do it again.\n";
                break;
            case 4:
                std::cout << "Wrong answer. Do it again.\n";
                break;
            case 5:
                std::cout << "Do you realize that's not even a passing grade? Do it again.\n";
                break;
            case 6:
                std::cout << "Was that supposed to be a compliment? Do it again.\n";
                break;
            case 7:
                std::cout << "I mean ok... try again.\n";
                break;
            case 8:
                std::cout << "Thanks?? Try again.\n";
                break;
            case 9:
                std::cout << "Close but... try again.\n";
                break;
            case 10:
                std::cout << "I think you're right.\n\n";
                break;
            default:
                std::cout << "Invalid input. But at least you didn't try less than 10.\n";
                break;
            }
        }
        std::cout << "To be continued...";
        return 0;
}