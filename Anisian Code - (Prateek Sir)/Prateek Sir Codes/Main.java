import java.util.regex.Pattern;

class AgeNotWithinRangeException extends Exception {
    public AgeNotWithinRangeException(String message) {
        super(message);
    }
}

class NameNotValidException extends Exception {
    public NameNotValidException(String message) {
        super(message);
    }
}

class Student {
    private int rollNo;
    private String name;
    private int age;
    private String course;

    public Student(int rollNo, String name, int age, String course) throws AgeNotWithinRangeException, NameNotValidException {

        if (!Pattern.matches("^[a-zA-Z\\s]*$", name)) {
            throw new NameNotValidException("Name is not valid.");
        }

        if (age < 15 || age > 21) {
            throw new AgeNotWithinRangeException("Age should be within 15 and 21.");
        }
        
      

        this.rollNo = rollNo;
        this.name = name;
        this.age = age;
        this.course = course;
    }

    public void display() {
        System.out.println("Roll No: " + this.rollNo);
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Course: " + this.course);
    }
}

public class Main {
    public static void main(String[] args) {
    try {
        Student s = new Student(100, "Babu4", 27, "MCA");
        s.display();
    } catch (AgeNotWithinRangeException e) {
        System.out.println(e.getMessage());
    } catch (NameNotValidException e) {
        System.out.println(e.getMessage());
    } catch (Exception e) {
        System.out.println(e.getMessage());
    }
}

}
