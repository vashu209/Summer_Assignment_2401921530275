public class LibraryInterfaceDemo{
    public static void main(String[] args){
        System.out.println("Test Case 1:");
        KidUsers kid=new KidUsers();
        kid.setAge(10);
        kid.registerAccount();
        kid.setBookType("Kids");
        kid.requestBook();
        System.out.println("=================");
        kid.setAge(18);
        kid.registerAccount();
        kid.setBookType("Fiction");
        kid.requestBook();

        System.out.println("Test Case 2:");
        AdultUsers adult=new AdultUsers();
        adult.setAge(5);
        adult.registerAccount();
        adult.setBookType("Kids");
        adult.requestBook();
        System.out.println("=================");
        adult.setAge(23);
        adult.registerAccount();
        adult.setBookType("Fiction");
        adult.requestBook();
    }
}