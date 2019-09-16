class Course
{
    public Course(String id, String title, int creditHours, String description, String prerequisiteCourse)
    {
        this.CourseID = id;
        this.CourseTitle = title;
        this.CreditHours = creditHours;
        this.Description = description;
        this.PrerequisiteCourse = prerequisiteCourse;
    }


    public String CourseID;
    public String CourseTitle;
    public int CreditHours;
    public String Description;
    public String PrerequisiteCourse;
}