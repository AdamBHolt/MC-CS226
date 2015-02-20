#include <string>

class Course

{

public:

     Course();

     ~Course();

     void setCourseName (string);

     string getCourseName ();

     void setCourseDescription (string);

     string getCourseDescription();

     void setCourseID(int);

     int getCourseID();

private:

     string courseName;

     int courseID;

     string courseDescription;

};