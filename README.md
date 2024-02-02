
# Battleship Game

A simple console-based implementation of the classic Battleship game in C++.

## Introduction

This project implements the Battleship game where the player has to guess the locations of hidden enemy ships and sink them. The game features include setting up ships, guessing locations, and determining the outcome based on hits or misses.

## Features

- Random generation of enemy ships on the game board.
- Player input for guessing ship locations.
- Display of hits and misses during the game.
- Simple user interface for interaction.

## How to Play

1. **Setup:**
   - Enter the player's name for registration.
   - Choose an option:
     - **Rules:** View the game rules and instructions.
     - **Play Game:** Start the game.

2. **Gameplay:**
   - The game starts with hidden enemy ships.
   - Enter coordinates to guess the ship location.
   - Each hit reveals a part of the ship, and each miss is counted.
   - Continue guessing until all enemy ships are sunk or choose to surrender.
   - The game ends with a victory message or defeat.

## Rules

- Enemy ships are hidden on specific locations on the board.
- Guess the locations correctly to sink all enemy ships.
- Each turn consists of entering coordinates to hit enemy ships.
- Victory is achieved by sinking all enemy ships within the least number of turns.

## Requirements

- C++ compiler (e.g., g++)
- Standard C++ libraries

## How to Run

1. Compile the code using a C++ compiler.
2. Execute the compiled binary file to start the game.

## Credits

- Developed by Aiman Naqvi
