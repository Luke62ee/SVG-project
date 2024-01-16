# svg

Convert a text file to an html file with SVG graphics

Starter code has "Circle" defined.
Define additional objects to create your own piece of geometric abstract artwork.


runit.sh - Easy way to compile and run program

create-output.sh - Compile, run and check code quality

code-coverage.sh - Check for code coverage

3. Clang-Tidy Warnings

Warning Addressed: A significant number of warnings (totaling 99,534) were generated during the build process. However, it is important to note that 99,530 of these warnings were identified in non-user code.

How It Was Addressed: The warnings in non-user code are related to libraries, frameworks, or system components that are not part of the project's direct codebase. As such, these warnings are outside the scope of our project and cannot be acted upon.

Warning Addressed: The warning was related to parameter name 'in' in the 'Circle::read', 'Rect::read', and 'Ellipse::read' functions being too short. Clang-tidy expected at least 3 characters as per the rule '[readability-idenitfer-length,-warnings-as-errors]'

How It Was Addressed: The parameter name 'in' in the 'Circle::read', 'Rect::read', and 'Ellipse::read' methods can be rename to a more descriptive and longer name that aligns with clang-tidy's readability standards. This change can resolve the warning without altering the functionality of the method. 

Warning Addressed: The warning was related to an exception that may be thrown in the main function in main.cpp, which should not throw exceptions as per the rule[bugprone-exception-escape,-warnings-as-errors]

How It Was Addressed: In the writeSVGFile function in main.cpp, it was observed that fout.close(); was explicitly called to close the ofstream. This call can be removed as the ofstream's destructor automatically handles the closure of the file. This change embraces the RAII (Resource Acquisition Is Initialization) principle, making the code more robust and concise without affecting its functionality

How to create a rabbit:
circle 400 300 150 grey
circle 350 250 20 white
circle 450 250 20 white
circle 350 250 10 black
circle 450 250 10 black
ellipse 400 320 15 10 pink
ellipse 330 150 40 80 grey
ellipse 470 150 40 80 grey
ellipse 330 150 20 40 pink
ellipse 470 150 20 40 pink