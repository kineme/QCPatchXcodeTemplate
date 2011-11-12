#!/usr/bin/php
<?php

if(count($argv) == 1)
	die("usage: ".basename($argv[0])." [bundle path]\n");

array_shift($argv);

echo "SkankySDK Plugin Post-Processing.\n";

$home = $_ENV["HOME"];

foreach($argv as $bundle)
{
	echo "\nProcessing ".$bundle."\n";

	if(!is_dir($bundle))
	{
		echo "   not a directory.\n";
		continue;
	}

	echo "   * Stripping...\n";
	$err = `strip -u -r $bundle/Contents/MacOS/*`;

	echo "   * Installing...\n";
	$err = `mkdir -p "$home/Library/Graphics/Quartz Composer Patches/"`;
	$err = `cp -R $bundle "$home/Library/Graphics/Quartz Composer Patches/"`;
}
