<?php

$users = array("a", "b", "c", "d", "e", "f", "g", "h", "i", "j");
$passwords = array(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

$retryCount = array(2,3,4,5,6,7,8,9,10,11);

for($i = 0; $i < count($users); $i++)
{
	print("User: $users[$i] = $passwords[$i]\r\n");
}

print "User: ";
$user = trim(fgets(STDIN));

$key = array_search($user, $users);

if($key === false)
{
	print "User not found!\r\n";
}
else
{
	$cnt = 0;
	
	while($cnt < $retryCount[$key])
	{
		print "Password: ";
		$password = trim(fgets(STDIN));
		
		$cnt++;
		if($password == $passwords[$key])
		{
			print "Login successful!\r\n";
			break;
		}
		else
		{
			print "Login failed!\r\n";
		}
	}
}

?>