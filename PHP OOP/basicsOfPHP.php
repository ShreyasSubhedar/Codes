<?php
define("AWESOME", "SHREYAS");

function keep_track()
{
    static $count = 0;
    $count++;
    print $count;
    print "\n";
    print AWESOME;
}

keep_track();
keep_track();
keep_track();
// Simple conditional statements
$d = date("M");

if ($d == "Jun")
    echo "Have a nice weekend!\n";

else
    echo "Have a nice day!\n";

// Using ForEach loop :
$array = array(1, 2, 3, 4, 5);

foreach ($array as $value) {
    echo "Value is $value \n";
}
// Numeric Array: where the index is a number start from 0
$numbers = array( 1, 2, 3, 4, 5);
         
foreach( $numbers as $value ) {
   echo "Value is $value \n";
}

/* Second method to create array. */
$numbers[0] = "one";
$numbers[1] = "two";
$numbers[2] = "three";
$numbers[3] = "four";
$numbers[4] = "five";

foreach( $numbers as $value ) {
   echo "Value is $value  \n";
}
  /* First method to associate create array. */
  $salaries = array("Shaym" => 2000, "Raam" => 1000, "Ravi" => 500);
         
  echo "Salary of Shaym is ". $salaries['Shaym'] . "\n";
  echo "Salary of Raam is ".  $salaries['Raam']. "\n";
  echo "Salary of Ravi is ".  $salaries['Ravi']. "\n";
  
  /* Second method to create array. */
  $salaries['Shaym'] = "high";
  $salaries['Raam'] = "medium";
  $salaries['Ravi'] = "low";
  
  echo "Salary of Shaym is ". $salaries['Shaym'] . "\n";
  echo "Salary of Raam is ".  $salaries['Raam']. "\n";
  echo "Salary of Ravi is ".  $salaries['Ravi']. "\n";


  print "Multi Dimensional array\n\n";
  $marks = array( 
    "Shyam" => array (
       "physics" => 35,
       "maths" => 30,	
       "chemistry" => 39
    ),
    
    "Raju" => array (
       "physics" => 30,
       "maths" => 32,
       "chemistry" => 29
    ),
    
    "Baburao" => array (
       "physics" => 31,
       "maths" => 22,
       "chemistry" => 39
    )
 );
 
 /* Accessing multi-dimensional array values */
 echo "Marks for Shyam in physics : " ;
 echo $marks['Shyam']['physics'] . "\n"; 
 
 echo "Marks for Raju in maths : ";
 echo $marks['Raju']['maths'] . "\n"; 
 
 echo "Marks for Baburao in chemistry : " ;
 echo $marks['Baburao']['chemistry'] . "\n"; 



 // File handling operation
 $filename = "PHP OOP/temp.txt";
 $file = fopen($filename,'w+');
 fwrite($file, "This is  a simple test\n" );
 fclose( $file );
 $file = fopen($filename,'r');
 if($file==false){
     print('error in file');
 }
 else{
     $size = filesize($filename);
     $filetext = fread( $file, $size );
     print($filetext);
 }
 /* Defining a PHP Function */
 function writeMessage() {
    echo "You are really a nice person, Have a nice time!";
 }
 /* PHP function with parameters */
 function addFunction($num1, $num2) {
    $sum = $num1 + $num2;
    echo "Sum of the two numbers is : $sum";
 }
 
 addFunction(10, 20);

 // Setting Cookie
 setcookie("name", "YO Yo bantai Rapper", time()+3600, "/","", 0);
 setcookie("age", "36", time()+3600, "/", "",  0);
 print($_COOKIE['name']);

 // Using session
 session_start();

 if( isset( $_SESSION['counter'] ) ) {
   $_SESSION['counter'] += 1;
}else {
   $_SESSION['counter'] = 1;
}

$msg = "You have visited this page ".  $_SESSION['counter'];
$msg .= "in this session.";
print($msg);
session_destroy();
$to = "kashmirabhale98@gmail.com";
$subject = "Tesiting mail ";

$message = "<b>This is HTML message.</b>";
$message .= "<h1>This is headline.</h1>";

$header = "From:shreyassubedar@gmail.com \r\n";
$header .= "Cc:kashmirabhale98@gmail.com \r\n";
$header .= "MIME-Version: 1.0\r\n";
$header .= "Content-type: text/html\r\n";

$retval = mail ($to,$subject,$message,$header);

if( $retval == true ) {
   
   echo "Message sent successfully...";
}else {
   echo "Message could not be sent...";
}


// Date and time in PHP
$date_array = getdate();
   
foreach ( $date_array as $key => $val ){
   print "$key = $val<br />";
}

$formatted_date  = "Today's date: ";
$formatted_date .= $date_array['mday'] . "\n";
$formatted_date .= $date_array['mon'] . "\n";
$formatted_date .= $date_array['year'];

print $formated_date;