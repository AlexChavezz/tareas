class RandomExample
{
    public static void main(String[] args)
    {

    }

    public static int generateRamndomBetweenTwoNumbers(int max, int min)
    {
        double random = (Math.random() * ((max - min) + 1)) + min;
        int randomInt = (int) Math.round(random);
        return randomInt;
    }


    public static int generateRandomWithLimit(int limit)
    { 
        return (int)(Math.random() * limit);
    }
        
}