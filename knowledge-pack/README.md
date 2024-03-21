# Knowledge Pack Integration

## Library Format
Follow the steps below to integrate a library object into an MPLAB X project.

1. Add the contents of the firmware folder from the downloaded `.zip` file into the folder
   structure of the target MPLAB X project.

2. Open the target project within MPLAB X IDE.

3. In the *Projects* pane, right click on the *Header Files* folder, and then select
   *Add Existing Items from Folders* from the options.

4. In the resulting window that opens, click the *Add Folder* button.

5. In the new dialog, first select *Header Files* from the *Files of Type* dropdown,
   and then select the `inc` folder from the files that were added to the project's
   folder structure. Click the *Select* button to add the directory.

6. In the *Projects* pane, right click on the *Libraries* folder, and then select
   *Add Library / Object File* from the options.

7. In the resulting window that opens, select the archive file (`libmplabml.a`), and add
   it to the project.

8. Add the path to the `inc` folder (e.g., `../mplabml/inc`) into your XC compiler
   include path in the *Project Properties* menu.

## Source Format
Follow the steps below to directly integrate the source code into an MPLAB X project.

1. Add the contents of the `firmware` folder from the downloaded `.zip` file into the folder
   structure of the target MPLAB X project.

2. Open the target project within MPLAB X IDE.

3. In the *Projects* pane, right click on the *Header Files* folder, and then select
   *Add Existing Items from Folders* from the options.

4. In the resulting window that opens, click the *Add Folder* button.

5. In the new dialog, first select *Header Files* from the *Files of Type* dropdown,
   and then select the `inc` folder from the files that were added to the project's
   folder structure. Click the *Select* button to add the directory.

6. Back in the *Add Files* window, click the *Add* button to finish adding the
   necessary header files and close the dialog.

7. In the *Projects* pane, right click the *Source Files* folder, and then select *Add
   Existing Items from Folders* from the options. Repeat steps 4-6 to add all
   source files (`.c files`) from the files that were added to the project's folder structure.

8. Add the path to the `inc` folder (e.g., `../mplabml/inc`) into your XC compiler
   include path in the *Project Properties* menu.