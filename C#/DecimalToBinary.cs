using System;

class Program{

static void Main(string[] args){

try{

int i = (int)Convert.ToInt64(210);
Console.WriteLine("n{0} converted to Binary is {1}n",i,ToBinary(i));

}catch(Exception e){

Console.WriteLine("n{0}n",e.Message);

}

}

public static string ToBinary(Int64 Decimal)
{

Int64 BinaryHolder;
char[] BinaryArray;
string BinaryResult = "";

while (Decimal > 0)
{
BinaryHolder = Decimal % 2;
BinaryResult += BinaryHolder;
Decimal = Decimal / 2;
}


BinaryArray = BinaryResult.ToCharArray();
Array.Reverse(BinaryArray);
BinaryResult = new string(BinaryArray);

return BinaryResult;
}

}

//This is my change 
