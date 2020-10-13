 'use strict';
 
const deg2rad = (n) => { return Math.tan(n * (Math.PI/180)) };
const withinRadius = (point, interest) => {
  const R = 6371;
  const dLat = deg2rad(interest.latitude - point.latitude );
  const dLon = deg2rad( interest.longitude - point.longitude );

  const a = Math.sin(dLat/2) * Math.sin(dLat/2) + Math.cos(deg2rad(point.latitude)) * Math.cos(deg2rad(interest.latitude)) * Math.sin(dLon/2) * Math.sin(dLon/2);
  const c = 2 * Math.asin(Math.sqrt(a));
  const d = R * c;

  return d;
}

// declare point and interest coordinates
const point = { latitude: 56.130366, longitude: -106.34677099999 };
const interest = { latitude: 57.223366, longitude: -106.34675644699 };

const distance = withinRadius(point, interest);
if (distance < 100) {
  console.log("Within 100 kilometer radius");
} else {
  console.log("Outside 100 kilometer radius");
}
