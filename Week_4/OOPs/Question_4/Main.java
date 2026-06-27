package Question_4;

public class Main {
    public static void main(String[] args) {
        Box3D box = new Box3D(2,3, 4);

        System.err.println("Area ="+ box.area());
        System.err.println("Volume ="+box.volume());
    }
}
