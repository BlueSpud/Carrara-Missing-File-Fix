# Carrara Missing File Fix
This repository contains the required binaries and source code to patch an issue with Carrara 8.5 that causes missing file dialogs to be displayed with no indication of which file to locate. The repository contains the complete modified source in complienece with the Qt Open Source license as well as the compiled binaries.

# Installation Instructions
To intsall the fix, first create a folder on your desktop and name it something like "Carrara Framework Backup."

Then locate your Carrara.app, this is the application that you click on to launch Carrara.

Next, right click it and select the option that says "Show Package Contents." A new Finder window should pop up with a single folder named "Contents" in it.

Open the Contents folder and then open the "Frameworks" folder. 

In this folder you should see several files, copy the three that are called "QtGui.framework", "QtCore.framework" and "QtOpenGL.framework" to the folder you created in the first step.

Next open where ever you downloaded the reposity and open up the "binaries" folder. Copy the "QtGui.framework", "QtCore.framework" and "QtOpenGL.framework" from the "binaries" folder to the "Frameworks" folder in the Carrara.app, replacing the ones that are already there.

Launch Carrara and the issue should be resolved. If you need to revert the patch, simply take the three files from the folder you created and paste them back into the Frameworks folder, replacing the patched ones.

# Known Issues
It would appear that Daz has modified Qt slightly and scrolling with the scroll wheel has become broken after the patch is applied. Scrolling by pulling the scroll nub still works as expected.
