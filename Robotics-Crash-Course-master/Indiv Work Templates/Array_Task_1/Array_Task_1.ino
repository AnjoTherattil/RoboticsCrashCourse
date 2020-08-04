// Array Task 1

void setup() {
  Serial.begin(9600);

  // Creat an array of type int and size 10:
 int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
 arr1[10];
 arr1[0]=1;
 arr1[1]=2;
 arr1[2]=3;
 arr1[3]=4;
 arr1[4]=5;
 arr1[5]=6;
 arr1[6]=7;
 arr1[7]=8;
 arr1[8]=9; 
 arr1[9]=10;

  // Using a while loop, fill the array with multiples of 3 between 3 and 30 (inclusive):
               
                int i = 3;
                while (i<=30) {
                     Serial.println (*arr1[0]*3);
                     Serial.println (*arr1[1]*3);
                
                 }



  // Rewrite the code above with a for loop:
                // Remember the syntax?
                // for (initialization; condition; update variable) {
                //       code...
                // }



  // Write a loop that will go through the array 
  //     and print any values that are a multiple of 9:
                // Hint: Use the % (modulus) operator.


}

void loop() {
  // put your main code here, to run repeatedly:

}
