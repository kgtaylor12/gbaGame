Welcome to Don't Touch the Ground.

File contained:
gba.h: This file contains the macros for the game as well as DMA information.
gba.c: This file contains helper methods for drawing images, shapes, and text.
main.h: This file contains the structs relevant to main.c
main.c: This file contains the functioning of the actual game
images: "beach.png", "gamescreen.png", "star.png", "game over.png", "you won.png", "You lost.png"
**All the images include the png file, c header file, and c source file

Elements of the game:
START SCREEN:
- When the game is first opened you will be brought to a start page.
- This page includes the title as well as the two objects that will be moving during game play.
- It also includes a cue to hit select in order to start the game.
button controls:
- hit select to start game

GAME SCREEN:
basic game concept:
- After select is pressed the game begins. The goal of this game is to get to a score of 10 points.
- There is a bouncing star that will earn points the longer it is bouncing without hitting the gound.
- There is a rectangle that is controlled by the user using up/down and right/left arrows.
- If the bouncing star hits the rectangle it will reverse direction it had been going in.
- There is a counter in the bottome left corner that will update with the current level, current score, and current lives.
level play:
- level 1 is when score is 0 to 3
- level 2 is when score is 4 to 6
- level 3 is when score is 7 to 10
- when the score reaches 10 the game is over and the user wins!
- if lives get down to 0 before the user wins the game is over and the user loses
button controls:
- hit A to pause the game, then hit A to resume game
- hit select to end the game, it will go to the game over screen, hit select again to restart the game
- hit UP, DOWN, LEFT, RIGHT to move the rectangle around the screen to keep the bouncing ball from hitting the ground

END GAME:
win screen:
- if the score reaches 10, the game jumps to a congradulation screen
lose screen:
- if the lives reach 0, the game jumps to a better luck next time screen
game over screen:
- if the user elects to end the game early, they will be put to the game over screen
button controls:
- from all of these screens the user can hit select which will reset the game to the start screen

