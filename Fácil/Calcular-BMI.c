/*    N.B. do not allocate memory,
   instead: return a string literal  */

const char *bmi (int weight, double height)
{
    const double BMI = weight/(height*height);
    if(BMI <= 18.5){
      return "Underweight";
    }
    if(BMI <= 25.0){
      return "Normal";
    }
    if(BMI <= 30.0){
      return "Overweight";
    }
    return "Obese";

    //  <----  hajime!

}