# Life Dev
## Focus
- **Primary:** time management + skill development
  - Goal setting
- **Secondary:** career development, learning and development tracker, productivity, reminder system
  - Habits and strategies to be more efficient
- **Tertiary:** UX/UI

## Functionality
- Goal setting
- Improving study habits
- Plan out projects
- Skill development

## Inspiration
- What are 2 problems I have in my life and what can I code to solve these problems to incorporate optimization?

## Issues
- Infinite loop
  - Inputting a number works (list of "What would you like to do today?")
  - After, an infinite loop is caused where it repeatedly outputs the list of options
- The preLaunchTask 'C/C++': g++.exe build active file terminated with exit code -1
    - Fix: Ensure that the file paths are correct
    - Run: ./life-dev.exe (in Git Bash) or g++ -o life-dev .
    
## Running life-dev + Setup
- Testing
  - Run 'make'
- When running the files, ensure to keep them within their respective folders
    - Example: general.h should remain in the general folder
    - Reason: the file paths in main.cpp correspond with the folders that some of the files are in

## Technologies
- **Languages:** C++