# Auto_plant_watering
Monitoring and managing humidity levels on arduino IDE by Arkalion2680   

COMPONENTS REQUIRED: 
-- Arduino UNO   
-- 5V relay   
-- 5V water pump   
-- jump wires   
-- power supply  

USEFUL NOTES: 
-- you need 2 different circuits: one for powering the arduino+sensor+relay and another one to power the pump only   
-- DO NOT USE PIN 13 on the arduino to trigger the pump - it's used by the bootloader and will cause the pump firing on and off at power ON/reboot   
-- make sure to callibrate the pump by changing the following line with your own sensor readings analogRead(A0) where 490=YOUR_WET_VALUE and 1023=YOUR_DRY_VALUE   
-- adjust the delay if needed - giving it 1min(60000ms) seems to be the enough for letting the dirt absorb the water and read stable water levels   
-- you might want to use non-mineral water as it can cause long term corrosion depending on your pump

ENJOY HAVING AN ARDUINO TAKING CARE OF YOUR GREEN FRIENDS FOR YOU
