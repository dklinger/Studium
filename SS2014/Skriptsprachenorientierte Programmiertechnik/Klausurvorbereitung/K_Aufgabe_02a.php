<?php

$n = trim(fgets(STDIN));

for($i = 1; $i<=$n; $i++)
{
	$teilenMoeglich = false;
	for($t=2;$t<=($i/2);$t++)
	{
		if($i % $t == 0)
		{
			$teilenMoeglich = true;
			break;
		}
	}
	
	if(!$teilenMoeglich)
	{
		echo $i."\r\n";
	}
} 

?>