using System;
class Program
{
    static void Main()
    {
        int[] arr = { 29, 5, 12, 7, 1, 30, 18, 3, 25, 10 }; 
        int n = arr.Length;

        Console.Write("Lista original: ");
        for (int i = 0; i < n; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();

        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        Console.Write("Lista ordenada: ");
        for (int i = 0; i < n; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
    }
}
