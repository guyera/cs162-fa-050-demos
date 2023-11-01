Task summary: Create classes to represent schools, rosters, and students. Read data from school.txt and roster.txt to populate objects representing the school, and implement a feature to search for students who are taking a number of credit hours that exceeds some specified value, and add a new student to the roster. When new students are added to the roster, roster.txt should be updated.

Disclaimer: the contents of school.txt and roster.txt are fake. These files do not claim to reflect real or accurate data.

Feature requirements:
* Create objects and populate their data from the contents of school.txt and roster.txt
* Print out an introductory message displaying the information about the school and all of its students
* Expose a search feature to search for students with at least X credit hours, where X is specified by the user
* Expose a feature to allow new students to be added to the roster. As new students are added, roster.txt should be rewritten / updated accordingly.

Composition ideas:
* A school HAS-A name, city, and state
* A school HAS-A roster
* A roster HAS-A list of students, initially allocated to fit the number of students specified in roster.txt
* A roster CAN update one of its students to match some specified data
* A student HAS-A first name, last name, and credit hour count
* A roster CAN report its students with at least X credit hours (for some specified X)
* A school CAN report its studenst with at least X credit hours (it can do this by asking the roster to do it)
* A roster CAN add a student to its list of students
* A school CAN add a student to its roster (it can do this by asking the roster to add the student to its list of students)
