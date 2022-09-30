import java.util.Scanner;

class Elevator {
    public double pesoMax;

    Scanner entrada = new Scanner(System.in);
    public int originFloor;
    public int currentFloor;
    public int maxLevels;
    public int lastFloor;

    Elevator() {
        maxLevels = 17;
        currentFloor = originFloor = 0;
        pesoMax = 480;
    }

    public void inicio() throws InterruptedException {
        System.out.println("Programa elevador del TEC");
        System.out.println("Pisos del 1 al 17");
        do {
            
            System.out.println("Piso Actual: " + currentFloor);
            System.out.println("A que piso desea ir?");

            int destino = entrada.nextInt();
            if (destino > 0 && destino <= 17) {
                if (destino > currentFloor) {
                    subir(destino);
                } else {
                    bajar(destino);
                }
            } else {
                System.out.println("El piso no existe");
            }
        } while (true);

    }

    public void subir(int destino) throws InterruptedException {
        while (currentFloor < destino) {
            currentFloor++;
            System.out.println("Estamos en el piso " + currentFloor);
            Thread.sleep(1000);
        }
        System.out.println("Llegamos al destino");
    }

    public void bajar(int destino) throws InterruptedException {
        while (currentFloor > destino) {
            currentFloor--;
            System.out.println("Estamos en el piso " + currentFloor);
            Thread.sleep(1000);
        }
        System.out.println("Llegamos al destino");
    }

    public static void main(String args[]) throws InterruptedException {
        Elevator object = new Elevator();
        object.inicio();
    }
}