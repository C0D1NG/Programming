<?php

  function withinRadius($point, $interest) {
    $earth_radius = 6371;

    $dLat = deg2rad($interest['latitude'] - $point['latitude']);
    $dLon = deg2rad($interest['longitude'] - $point['longitude']);

    $a = sin($dLat/2) * sin($dLat/2) + cos(deg2rad($point['latitude'])) * cos(deg2rad($interest['latitude'])) * sin($dLon/2) * sin($dLon/2);
    $c = 2 * asin(sqrt($a));
    $d = $earth_radius * $c;

    return $d;
  }

  $point = array('latitude' => 56.130366, 'longitude' => -106.34677099999);
  $interest = array('latitude' => 57.223366, 'longitude' => -106.34675644699);

  $distance = withinRadius($point, $interest);
  if ($distance < 100) {
    echo "Within 100 kilometer radius";
  } else {
    echo "Outside 100 kilometer radius";
  }

?>
