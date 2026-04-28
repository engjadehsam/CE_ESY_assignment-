# المخزون الدائري
نعرف المخزن الدائري على انه مصفوفة بالاضافة الى 3 متغيرات
1.  الرأس : هو مكان القراءة 
2.  الذيل : هو مكان الكتابة 
3.  العداد : يدل على عدد العناصر ضمن المخزن
 
اما المخزن الخطي فهو يحوي على مصفوفة و مؤشر واحد للكتابة يتحرك للامام فقط اذا امتلأت البداية وتمت القرائة منها لايمكن اعادة استخدامها بسهولة على عكس المخزن الدائري حيث يمكن العودة للبداية ب استخدام  

x = (x+1)% SIZE ;  
كما استخدمناه فس مثالنا على الشكل 
cb->tail = (cb->tail + 1) % SIZE;   
يكون العداد فارغ اذا كان مساويا للصفر      count == 0  .
يكون العداد ممتلئ اذا كان مساويا لحجم المصوفة    ocount == SIZE.

 # Assignment 1 – Circular Buffer (CE-ESY)

This assignment implements a "Circular Buffer" in the C programming language.

# Features
- Circular buffer using a fixed-size array
- Functions: init, isFull, isEmpty, writeBuffer, readBuffer
- Handles overflow and underflow correctly

# Main Program
- Reads user name from input
- Appends "CE-ESY"
- Stores result in buffer
- Reads back and prints
- Verifies buffer is empty at the end

## File Structure
CE-ESY-assignments/
└── Assignment1/
    ├── project.c
    └── README.md
