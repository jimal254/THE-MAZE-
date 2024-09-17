##The Maze Project 🎮🧩
Welcome to The Maze, a thrilling 3D maze game built using C and SDL2! This project transforms a 2D map into an immersive 3D world using ray casting, offering an exciting and interactive experience.

##🚀 Overview
The Maze is written in C and uses the SDL2 library for rendering graphics and handling input. It was developed on Ubuntu 14.04 LTS using gcc (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4.

About SDL2
SDL (Simple DirectMedia Layer) is a cross-platform development library designed to provide low-level access to:

Audio
Keyboard and mouse input
Joystick
Graphics hardware via OpenGL and Direct3D
It is commonly used in video playback software, emulators, and popular games, including Valve’s award-winning catalog.

##🛠️ Installation
Clone the repository:

bash
Copy code
git clone https://github.com/jimal254/The-Maze.git
Compilation
To compile the game, use the following command:

bash
Copy code
gcc -Wall -Werror -Wextra -pedantic ./src/*.c -lm -o maze `sdl2-config --cflags --libs`
🎮 Usage
To run the game, simply execute the following:

bash
Copy code
./maze
Alternatively, you can use the make run command if you have make configured.

Controls:
Move Forward/Backward: Up/Down arrow keys (or W/S)
Rotate Camera: Left/Right arrow keys (or A/D)
##🏆 Gameplay Objective
The primary goal is to navigate through the maze and find the exit. Movement is controlled via arrow keys, where:

The left/right arrow keys (or A/D) rotate the player.
The up/down arrow keys (or W/S) move the player forward or backward.
The player's starting position and maze goal can be customized through the map file. If no custom position is provided, the player begins at the top-left corner, and the goal will be placed at the last accessible floor tile.

Upon reaching the maze exit, the game either progresses to the next maze or ends, displaying a win message in the console.

##📊 Flowchart
Here's a visual representation of the flow in The Maze project:


##🎥 Demo
Check out the gameplay demo:

The Maze Demo

##👨‍💻 Author
Jimmy Maina

GitHub
LinkedIn
##📝 License
This project is licensed under the MIT License. See the LICENSE file for details.

##🙏 Acknowledgements
ALX-Africa: This project is part of the ALX-Africa Full-Stack Software Engineering curriculum.
ALX Staff: For the guidance, support, and resources throughout the journey.
Cohort 22: For the camaraderie, collaboration, and shared insights over the past year.
You: For taking the time to play the game and explore the code. Your interest and feedback are greatly appreciated!
##🌟 Support
If you found this project interesting or useful, please consider giving it a ⭐️ on GitHub! You can also follow me for more exciting projects and updates.

