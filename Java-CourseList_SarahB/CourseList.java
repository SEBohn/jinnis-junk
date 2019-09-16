public class CourseList {
    public Course[] CourseArray =
            {
                    new Course ("CIS 400", "OO Analysis & Design", 4, "Important class", "CIS 110") ,
                    new Course ("CIS 150A" , "VB.NET Programming", 4, "Good Introduction to programming", "CIS 100") ,
                    new Course ("CIS 150B", "C# Programming with labs", 4, "Follow-up to CIS 100", "CIS 100")
            };


    public Course GetCourseByCourseID(String id){
        for (Course course : CourseArray){
            if (course.CourseID.equals(id)){
                return course;
            }
        }
        return null;
    }


    public static class CourseListTest {
        public static void main(String[] args)
        {
            GetCourseByCourseIDTestWhenCourseExists();
            GetCourseByCourseIDTestWhenCourseDoesNotExist();
        }


        public static void GetCourseByCourseIDTestWhenCourseExists()
        {

            CourseList myCourseList = new CourseList();
            Course myCourse = myCourseList.GetCourseByCourseID("CIS 400");
            if (!myCourse.CourseID.equals("CIS 400"))
                System.out.println("ERROR - GetCourseByCourseIDTestWhenCourseExists(): Returned CourseID Not equal (CIS 400)");
        }

        public static void GetCourseByCourseIDTestWhenCourseDoesNotExist()
        {

            CourseList myCourseList = new CourseList();
            Course myCourse = myCourseList.GetCourseByCourseID("CIS 101");
            if (myCourse != null)
                System.out.println("ERROR - GetCourseByCourseIDTestWhenCourseDoesNotExist(): should have returned null");
        }
    }
}
