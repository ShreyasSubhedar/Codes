
<?php
 class Car{
    static $chiku="kuchikuchi";
    public function Cool(){
        echo " yo yo ";
    }
} 
class BaseClass  {
      public function test() {
         echo "BaseClass::test() called<br>";
      }
      
      final public function moreTesting() {
         echo "BaseClass::moreTesting() called<br>";
      }
   }
   
   class ChildClass extends BaseClass {
    public function test() {
         echo "ChildClass::moreTesting() called<br>";
      }
   }
   $merecedies = new Car;
   $merecedies->Cool(); 
   echo $merecedies->chiku;
   $ohk = new ChildClass;
   echo $ohk->test();