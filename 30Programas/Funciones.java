import java.util.ArrayList;
import java.util.Scanner;

class Funciones {

    public static Scanner input =  new Scanner(System.in);

    // 16.- FUNCION QUE RESIVA DOS STRING Y LOS COMPARE DOS STRINGS Y RETORNE UN BOLEANO SI COINCIDEN Y SON IGUALES
    public static boolean areTheSame(String word1, String word2)
    {
        boolean isTheSame = false; 
        int value = word1.compareTo(word2);
        if(value == 0)
        {
            isTheSame = true;
        }
        return isTheSame;
    }

    // 17.- FUNCION QUE CREE UN ARREGLO, EL USUARIO LO PUEDA CREAR Y LO RETORNE 
    public static int[] generateArray()
    {
        int size;
        System.out.println("Type size: ");
        size = input.nextInt();
        int[] array = new int[size];
        for(int i = 0; i < array.length; i++)
        {
            System.out.print("["+i+"]: " );
            array[i] = input.nextInt();
        }
        return array;
    }

    // 18.- FUNCION QUE IMPRIMA UN ARRAY DE CUALQUIER TIPO DE DATO
    public void printArray(int[] array)
    {
        System.out.println("IMPRIMIENDO...");
        for(int i = 0; i < array.length; i++)
        {
            System.out.println("["+i+"]: " + array[i]);
        }
    }

    // 19.- FUNCION QUE CREE UNA LISTA 
    public static ArrayList<String> getArrayList(){
        ArrayList<String> names = new ArrayList<String>();
        return names;
    }
    
    // 20.- FUNCION QUE IMPRIMA UNA LISTA DE JAVA
    public static void printListJava(ArrayList<String> names)
    {
        System.out.println("IMPRIMIENDO...");
        for(int i = 0; i < names.size(); i++)
        {
            System.out.println(names.get(i));
        }
    }

    // 21.- FUNCION QUE INGRESE UN NUEVO NODO A UNA LISTA DE JAVA 
    public static void insertNode(ArrayList<String> names)
    {
        String nuevoNodo;
        System.out.println("Ingresa el valor del nuevo nodo: ");
        nuevoNodo = input.next();
        names.add(nuevoNodo);
    }
    
    // 22.- FUNCION QUE ELIMINA UN NODO DE UNA LISTA DE JAVA
    public static void removeNodoByindex(ArrayList<String> names)
    {
        int index;
        System.out.println("Ingresa el index a eliminar: ");
        index = input.nextInt();
        names.remove(index);
    }

    // 23.- FUCION QUE ELIMINE UN NDO MEDIANTE EL VALOR DEL NODO
    public static void removeNodoByValue(ArrayList<String> names)
    {
        String value;
        System.out.println("Ingresa el valor a eliminar: ");
        value = input.next();
        names.remove(value);
    }

    // 24.- FUCION QUE RETORNE UN BOLEANO EVALUANDO SI UNA LISTA ESTA VACIA O NO
    public static boolean isArrayListEmpty(ArrayList<String> names)
    {
        return names.isEmpty();
    }

    // 25.- FUNCION QUE VERIFIQUE SI UN STRING ESTA CONTENIDO EN UNA LISTA Y RETORNAR UN TIPO DE DATO BOLEANO
    public static boolean isWordInArrayList(ArrayList<String> words){
        System.out.println("Palabra para buscar: ");
        String value = input.next();
        return words.contains(value);
    }
    
    // 26.- FUNCION QUE RESIVA UN LISTA DE NUMEROS FLOTANTES Y RETORNE UN ENTERO CON LA LONGITUD DE LA LISTA
    public static int getLength(ArrayList<Float> numeros){
        return numeros.size();
    }
    // 27.- FUNCION QUE DIVIDA DOS ENTEROS Y RETORNE UN TIPO DE DATO FLOTANTE
    public static float divison(int n1, int n2){
        return n1 / n2;
    } 

    // 28.- FUNCION QUE RESIVA UNA LISTA DE BOOLEANOS Y ME RETORNE UNA LISTA CON TODOS LOS TIPOS DE DATOS CONTRARIOS
    //  ES DECIR LO QUE ERA TRUE DEBE DE SER FALSE Y VISREVERSA.
    public static ArrayList<Boolean> modifyArrayList(ArrayList<Boolean> boleanos){
        ArrayList<Boolean> newList = new ArrayList<Boolean>();
        for (int i = 0; i < boleanos.size(); i++)
        {
            if(boleanos.get(i))
            {
                newList.set(i, false);
            }
            else
            {
                newList.set(i, true);
            }
        }
        return newList;
    }
    // 29.- FUNCION QUE RESIVA UN ARRAY DE FLOATS Y RETORNE LA SUMA DE TODOS LOS INDICES
    public static float sumaFloats(float[] numerosFlotantes)
    {
        float suma = 0;
        for(int i = 0; i < numerosFlotantes.length; i++)
        {
            suma += numerosFlotantes[i];
        }
        return suma;
    }
    // 30.-FUNCION DONDE SE CREE UN OBJETO DE ESTA MISMA CLASE Y MANDE A IMPRIMIR UN ARRAY
    public static void mainTwo()
    {
        int[] array = {1, 2, 3, 4, 5};
        Funciones objeto = new Funciones();
        objeto.printArray(array);
    }

    public static void main(String[] args){}
};