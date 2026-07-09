enum Traffic_light { red, yellow, green };
enum Warning { green, yellow, orange, red }; // fire alert levels
// error : two definitions of yellow (to the same value)
// error : two definitions of red (to different values)
Warning a1 = 7; // error : no int->War ning conversion
int a2 = green; // OK: green is in scope and converts to int
int a3 = Warning::green; // OK: War ning->int conversion
Warning a4 = Warning::green;