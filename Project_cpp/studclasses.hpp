namespace space {
    struct records
    {
        std::string student_name;
         char *subjects[5] = {
            "English","Math","Science"
            ,"Kannada","CS"
         }; 
         int marks[5]; //! 50 to 100! marks
         short int rollnumber;
         char grade;
         size_t size;
    };
    
} //Completed
using space::records;
