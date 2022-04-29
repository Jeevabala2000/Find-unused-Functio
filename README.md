# Find-unused-Function

#Using Linux

Step 1:Install the build essential packages

           $ sudo apt get install build-essential
          
Above command is used to install the essential packages on your system.
           
 Step 2:Create the Directory for write a C file
 
           $ mkdir directoryname
           
  Before create the directory you need to set the path of the file folder.For using ls command, will show the available drive folder and then you need to choose the path of your working directory.
  
           $ ls
           
Step 3:Then Write a C Program.
  Then write a C Program and save a file with .c extension.Alternatively write the C Program through the terminal in gedit as follows:

           $ gedit filename.c
           
  This will create a .c file and you can write and save a c program. 
  
  Step 4:Compile the C program with gcc compiler
  
           $ gcc filename.c -o filename
           
  Step 5:Then detect unused function present or not in the program file through the following command.
  
           $ gcc filename.c -o filename -Wunused-function
         
   Finally, It will shows the unused function present in the created .c file.
