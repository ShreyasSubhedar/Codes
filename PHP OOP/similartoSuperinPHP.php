<?php 
class Name {
   var $_firstName;
   var $_lastName;
   
   function __construct($first_name, $last_name) {
      $this->_firstName = $first_name;
      $this->_lastName = $last_name;
   }
   
   function toString() {
      return($this->_lastName .", " .$this->_firstName);
   }
}
class NameSub1 extends Name {
   var $_middleInitial;
   
   function __construct($first_name, $middle_initial, $last_name) {
      Name::__construct($first_name, $last_name);
      $this->_middleInitial = $middle_initial;
   }
   
   function toString() {
      return(Name::toString() . " " . $this->_middleInitial);
   }
}
$obj = new NameSub1('Shreyas','Balwant','Subhedar');
echo $obj->_middleInitial;

