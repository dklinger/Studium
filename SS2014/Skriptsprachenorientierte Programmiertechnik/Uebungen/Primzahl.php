<?php

print_r(find_primes(23));

function find_primes($finish) {
 
  // Initialise the range of numbers.
  $number = 2;
  $range = range(2, $finish);
  $primes = array_combine($range, $range);
 
  // Loop through the numbers and remove the multiples from the primes array.
  while ($number*$number < $finish) {
    for ($i = $number; $i <= $finish; $i += $number) {
      if ($i == $number) {
        continue;
      }
      unset($primes[$i]);
    }
    $number = next($primes);
  }
  return $primes;
}


//---Frank's L�sung
function SiebDesEratosthenes($limit)
{
 $primeList = array();

 for($i = 2; $i < round(sqrt($limit)); $i++)
 {
 foreach($primeList as $num)
 if($i % $num == 0) 
 continue 2;

 $primeList[] = $i; 
 }

 $prime = array();
 for($i = 2; $i <= $limit; $i++)
 {
 foreach($primeList as $num) 
 if(($i != $num) && ($i % $num == 0))
 continue 2;

 $prime[] = $i;
 }

 echo "Anzahl Primzahlen: ", count($prime), "\n";
 print_r($prime);
}

SiebDesEratosthenes(20);
SiebDesEratosthenes(100);

/*
for($n = 2; $n <= $limit - $n; $n++)
{
echo "\nn: $n - ";
if ($meinArray[$n] != "false")
{
for($k = $n *2 ; $k <= $limit; $k += $n)
{
echo "k = $k ";
$meinArray[$k] = "false";
 }
}
}*/	

?>