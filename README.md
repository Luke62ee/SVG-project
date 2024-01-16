# svg

Convert a text file to an html file with SVG graphics

Starter code has "Circle" defined.
Define additional objects to create your own piece of geometric abstract artwork.


runit.sh - Easy way to compile and run program

create-output.sh - Compile, run and check code quality

code-coverage.sh - Check for code coverage

3. Clang-Tidy Warnings

Warning Addressed: A significant number of warnings (totaling 53,924) were generated during the build process. However, it is important to note that 99,530 of these warnings were identified in non-user code.

How It Was Addressed: The warnings in non-user code are related to libraries, frameworks, or system components that are not part of the project's direct codebase. As such, these warnings are outside the scope of our project and cannot be acted upon.

Warning Addressed: The warning was related to parameter name 'in' in the 'Circle::read', 'Rect::read', and 'Ellipse::read' functions being too short. Clang-tidy expected at least 3 characters as per the rule '[readability-idenitfer-length,-warnings-as-errors]'

How It Was Addressed: The parameter name 'in' in the 'Circle::read', 'Rect::read', and 'Ellipse::read' methods can be rename to a more descriptive and longer name that aligns with clang-tidy's readability standards. This change can resolve the warning without altering the functionality of the method. 


