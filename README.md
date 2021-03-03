# ESP32-CAM_blink
ESP32-CAM, blinking both led1 and Flash_LED  
5 fast blinking, 2 slow blinking, repeating, click image below to see video and effect,

source code is here ![ESP32-CAM_blink.ino](ESP32-CAM_blink.ino)  
firmware for chip burning, ![https://github.com/xiaolaba/ESP32-CAM_blink/releases/tag/2.0](https://github.com/xiaolaba/ESP32-CAM_blink/releases/tag/2.0)


https://www.youtube.com/watch?v=--tuzdXo720  
[![ESP32-CAM, blinking both led1 and Flash_LED](https://img.youtube.com/vi/--tuzdXo720/0.jpg)](https://www.youtube.com/watch?v=--tuzdXo720)




ref: how to embedding youtube with github page,  
```  
[![ your_text ](https://img.youtube.com/vi/ VIDEO_ID /0.jpg)](https://www.youtube.com/watch?v= VIDEO_ID )
```  
  
  
schematic, clone from AI-Thinker, http://wiki.ai-thinker.com/esp32-cam
![ESP32-CAM_SCHEMATIC.jpg](ESP32-CAM_SCHEMATIC.jpg)  
.  
.  
.  
PCB & component placement, by reversed engineering,  
![ESP32-CAM_COMPONENT.JPG](ESP32-CAM_COMPONENT.JPG)  


extra test for camera in action, no code available, click image below to see video and result,  
https://www.youtube.com/watch?v=CalkROL9-4w  
![ESP32-CAM, camera streaming testing](https://img.youtube.com/vi/CalkROL9-4w/0.jpg) 




### 2021-FEB-27, test different hardward, NodeMCU-32S, metal can printed ESP-WROOM-32 (or a clone ??), no PSRAM. LED1 connected to IO2.  
![NodeMCU-32_LED1_IO2.JPG](NodeMCU-32_LED1_IO2.JPG)  

schematic, [nodemcu-32s_product_specification.pdf](nodemcu-32s_product_specification.pdf)  

![nodemcu-32s_schematic.jpg](nodemcu-32s_schematic.jpg)

