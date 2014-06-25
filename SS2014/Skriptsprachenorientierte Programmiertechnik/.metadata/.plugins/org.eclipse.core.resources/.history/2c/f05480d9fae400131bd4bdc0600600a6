<?php

$dir = "C:\\Arbeit\\Studium\\xampp portable\\htdocs";
$dir_content = GetContent($dir);

function GetContent($dir)
{
	$content = scandir($dir);
	for ($i = 0; $i < count($content); $i++)
	{
		if($content[$i] != "." && $content[$i] != "..")
		{
			print($dir ."\\". $content[$i] ."\r\n");
			if(is_dir($dir ."\\". $content[$i]))
			{
				GetContent($dir ."\\". $content[$i]);
			}
		}
	}
}

?>