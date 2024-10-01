#include <stdio.h>


// //que-1
//int main (){
// float marks;
//	scanf("%f",&marks);
//    
//    if(marks>=90 && marks<=100){
//    	printf("A-grade");
//    }
//		
//	else if(marks>=80 && marks<=89){
//		printf("B-grade");
//	}
//		
//	else if(marks>=70 && marks<=79){
//		printf("C-grade");
//		}
//		
//	else if(marks>=60 && marks<=69){
//		printf("D-grade");
//	}
//		
//	else
//  	{printf("d-grade");	}
//	}

// //que-2
//int main(){
//	float num;
//	scanf("%f",&num);
//	
//	if(num>0){
//		printf("num is positive");
//	}
//	
//	else if(num>0){
//		printf("num is negative");
//	}
//	
//	else{printf("number is zero");
//	}
//}


// //que-3
//int main() {
//    int side1, side2, side3;
//
//    
//    printf("Enter the three sides of the triangle: ");
//    scanf("%d %d %d", &side1, &side2, &side3);
//
//   
//    if (side1 == side2 && side2 == side3) {
//        printf("The triangle is equilateral.\n");
//    }
//    
//    else if (side1 == side2 || side2 == side3 || side1 == side3) {
//        printf("The triangle is isosceles.\n");
//    }
//    
//    else {
//        printf("The triangle is scalene.\n");
//    }
//
//    return 0;
//}


// //que-4
//int main() {
//    char ch;
//
//    
//    printf("Enter a character: ");
//    scanf("%c", &ch);
//
//   
//    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
//        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//        printf("The character is a vowel.\n");
//    }
//    
//    else {
//        printf("The character is a consonant.\n");
//    }
//
//    return 0;
//}


// //que-5
//int main() {
//    int age;
//
//    
//    printf("Enter your age: ");
//    scanf("%d", &age);
//
//    
//    if (age >= 18) {
//        printf("You are eligible to vote.\n");
//    } else {
//        printf("You are not eligible to vote.\n");
//    }
//
//    return 0;
//}


// //que-6
//int main() {
//    char username[20], password[20];
//
//    
//    printf("Enter username: ");
//    scanf("%s", username);
//    printf("Enter password: ");
//    scanf("%s", password);
//
//   
//    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
//        printf("Login successful.\n");
//    } else {
//        printf("Login failed.\n");
//    }
//
//    return 0;
//}


// //que-7
//int main() {
//    char light[10];
//
//    
//    printf("Enter the traffic light color (red, yellow, green): ");
//    scanf("%s", light);
//
//    
//    if (strcmp(light, "red") == 0) {
//        printf("Stop\n");
//    } else if (strcmp(light, "yellow") == 0) {
//        printf("Slow down\n");
//    } else if (strcmp(light, "green") == 0) {
//        printf("Go\n");
//    } else {
//        printf("Invalid color\n");
//    }
//
//    return 0;
//}


// //que-8
//int main() {
//    int n, i;
//    float sum = 0.0, average;
//
//  
//    printf("Enter the number of elements: ");
//    scanf("%d", &n);
//
//  
//    int arr[n];
//
//   
//    printf("Enter the elements:\n");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//        sum += arr[i]; 
//    }
//
//   
//    average = sum / n;
//
//   
//    printf("The average is: %.2f\n", average);
//
//    return 0;
//}


// //que-9
//int main() {
//    int n, i, j, temp;
//
//    
//    printf("Enter the number of elements: ");
//    scanf("%d", &n);
//
//    
//    int nums[n];
//
//    
//    printf("Enter the elements of the array:\n");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &nums[i]);
//    }
//
//    
//    for (i = 0; i < n-1; i++) {
//        for (j = 0; j < n-i-1; j++) {
//            if (nums[j] > nums[j+1]) {
//               
//                temp = nums[j];
//                nums[j] = nums[j+1];
//                nums[j+1] = temp;
//            }
//        }
//    }
//
//    
//    printf("Sorted array in ascending order:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//
//    return 0;
//}


// //que-10
//int main(){
//	int arr[]={1,2,3,4,5};
//	int i=0;
//	int len=sizeof(arr)/sizeof(arr[0]);
//	int even=0;
//	int odd=0;
//	for(i=0;i<len;i++){
//		if(arr[i]%2==0){
//			even=even+1;
//		}else{odd=odd+1;
//		}
//	}
//	printf("even%d",even);
//	printf("odd%d",odd);
//}


// //que-11
//  int main() {
//    int arr[] = {1, 2, 2, 3, 4, 4, 5,6,5,4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int newArr[n]; 
//    int i, j, isnew, newCount = 0;
//
//   
//    for(i = 0; i < n; i++) {
//        isnew = 1;  
//
//        
//        for(j = 0; j < newCount; j++) {
//            if(arr[i] == newArr[j]) {
//                isnew = 0;  
//                break;
//            }
//        }
//
//        if(isnew) {
//            newArr[newCount] = arr[i];
//            newCount++;
//        }
//    }
//
//   
//    printf("Updated array with unique elements: ");
//    for(i = 0; i < newCount; i++) {
//        printf("%d ", newArr[i]);
//    }
//
//    return 0;
//}



// //que-12
//int main() {
//    int arr[] = {1,2,3,4};
//    arr[4] = 5;
//    int i=0;
//    for( i=0; i<(sizeof(arr)/sizeof(arr[0]))+1; i++){
//        printf("%d\n", arr[i]);
//    }
//}


// //que-13

//int main() {
//    int arr[] = {1, 2, 3, 4, 5}; 
//    int n = sizeof(arr) / sizeof(arr[0]); 
//    int target = 3; 
//    int found = 0; 
//
//    int i=0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] == target) {
//            found = 1; 
//            break; 
//        }
//    }
//
//    
//    if (found) {
//        printf("true\n");
//    } else {
//        printf("false\n");
//    }
//
//    return 0;
//}


// //que-14

//int main() {
//    int n = 4; 
//    int nums[5] = {1, 2, 3, 4}; 
//    int newElement = 0; 
//
//    
//    for (int i = n; i > 0; i--) {
//        nums[i] = nums[i - 1];
//    }
//
//    
//    nums[0] = newElement; 
//
//    
//    printf("Updated array:\n");
//    for (int i = 0; i < n + 1; i++) { 
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//
//    return 0;
//}


// //que-15
//int main() {
//    int n = 5; 
//    int nums[5] = {1, 2, 3, 4, 5}; 
//
//    
//    n--; 
//
//    int i=0;
//    printf("Updated array:\n");
//    for (i = 0; i < n; i++) { 
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//
//    return 0;
//}


// //que-16
//int main() {
//    int arr[] = {3,5,9,1,7};
//    int len= sizeof(arr) / sizeof(arr[0]);
//    int a = 1;
//    int i;
//
//    for (i=0;i<len;i++) {
//        if (arr[i]<=0) {
//            a = 0;
//            break;
//        }
//    }
//
//    if (a) {
//        printf("true\n");
//    } else {
//        printf("false\n");
//    }
//
//    return 0;
//}



// //que-17
//int main(){
//	int arr[]={1,-2,3,-4,5,-6};
//	int i=0;
//	int len=sizeof(arr)/sizeof(arr[0]);
//	int pos=0;
//	int neg=0;
//	for(i=0;i<len;i++){
//		if(arr[i]>0){
//			pos=pos+1;
//		}else{neg=neg+1;
//		}
//	}
//	printf("positive %d\n", pos);
//	printf("negative %d\n", neg);
//}


// //que-18
//int main(){
//	int arr[]={10,20,30,40,50};
//	int i;
//	int len=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<=len;i++){
//		if(i%2 == 0){
//		printf("%d\n",arr[i]);		
//		}
//	}
//	return 0;
//}



// //que-19
//int main(){
//	int arr[]={1,2,3,4,5};
//	int i,count=0;
//	int len=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<len-1;i++){
//		if(arr[i]<arr[i+1]){
//			count++;
//		}
//	}
//	if(count==len-1){
//		printf("array is in ascending order");
//		}else{printf("array is not in ascending order");
//		}
//	return 0;
//}


// //que-20
//int main(){
//	int arr[]={80,30,70,50,20};
//	int min=arr[0];
//	int max=arr[0];
//	int i;
//	int len=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<len;i++){
//		if(min>arr[i]){
//			min=arr[i];
//		}
//		if(max<arr[i]){
//			max=arr[i];
//		}
//	}
//	int a=max-min;
//	printf("%d",a);
//	return 0;
//	
//}


// //que-21
//#include <ctype.h>  
//int main() {
//    char str[100];
//    int i = 0;
//    printf("Enter a string: ");
//    gets(str);  
//    while (str[i] != '\0') {
//        str[i] = toupper(str[i]);
//        i++;
//    }
//    printf("Uppercase string: %s\n", str);
//    return 0;
//}


// //que-22
//int main() {
//    char str[100];
//    int i = 0, length = 0;
//    printf("Enter a string");
//    gets(str); 
//    while (str[i] != '\0') {
//        length++;  
//        i++;       
//    }
//    printf("%d", length);
//    return 0;
//}



// //que-23
//#include <string.h>
//
//int main() {
//    char str1[50] = "hello";
//    char str2[50] = " world";
//
//    strcat(str1, str2);
//    printf("Concatenated String: %s\n", str1);
//    return 0;
//}


// //que-24



// //que-25
//#include <string.h>
//int main(){
//    char str[] = "ridham patel";
//    char *word = strtok(str, " ");
//
//    while (word != NULL) {
//        printf("%s\n", word);
//        word = strtok(NULL, " ");
//    }
//
//    return 0;
//}


// //que-26
//#include <string.h>
//
//int main() {
//    char str[] = "codinggita";
//    char ch = 'a';
//
//    if (str[strlen(str) - 1] == ch) {
//        printf("true\n");
//    } else {
//        printf("false\n");
//    }
//    return 0;
//}


// //que-27
//#include <string.h>
//
//int main(){
//    char filename[] = "document.pdf";
//    char *extension;
//    extension = strrchr(filename, '.');
//
//    if (extension != NULL) {
//        printf("%s\n", extension + 1);
//    } else {
//        printf("\n");
//    }
//    return 0;
//}


// //que-28
//void printLargest(int a, int b) {
//    if (a > b) {
//        printf("%d\n", a);
//    } else {
//        printf("%d\n", b);
//    }
//}
//
//int main() {
//    int num1 = 3;
//    int num2 = 5;
//    printLargest(num1, num2);
//    return 0;
//}


// //que-29
//int main() {
//    int arr[]={2, 7, 11, 15};
//    int target = 9;
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int i;
//    int j;
//
//    for (i = 0; i < len; i++) {
//        for (j = i + 1; j < len; j++) {
//            if (arr[i] + arr[j] == target) {
//                printf("Output: [%d, %d]\n", i, j);
//            }
//        }
//    }
//
//    return 0;
//}


// //que-30
//int main() {
//    int a,b, even=0, odd=0;
//    
//    printf("give integer: ");
//    scanf("%d", &a);
//
//    while (a != 0) {
//        b=a % 10;
//        if (b % 2 == 0) {
//            even += b;
//        } else {
//            odd +=b;
//        }
//        a /= 10;
//    }
//    printf("Sum of even number: %d\n", even);
//    printf("Sum of odd number: %d\n", odd);
//    return 0;
//}


// //que-31
//#include <string.h>
//int main(){
//    char str[]="hello";
//    int n=3;
//    int i;
//    char b[100];
//    b[0] = '\0';
//    for (i = 0; i < n; i++) {
//        strcat(b, str);
//    }
//    printf("answer is: %s\n",b);
//    return 0;
//}


// //que-32
//int main() {
//    int age;
//    printf("give age: ");
//    scanf("%d", &age);
//    
//    if (age < 13) {
//        printf("Category: Child\n");
//    } else if (age >= 13 && age <= 19) {
//        printf("Category: Teenager\n");
//    } else if (age >= 20 && age <= 59) {
//        printf("Category: Adult\n");
//    } else {
//        printf("Category: Senior\n");
//    }
//    return 0;
//}


// //que-33
//int main() {
//    int a;
//    printf("give year:");
//    scanf("%d",&a);
//
//    if (a%100 == 0) {
//        printf("%d is a century year.\n",a);
//    } else {
//        printf("%d is not a century year.\n",a);
//    }
//    return 0;
//}


// //que-34
//int main(){
//    int arr[]={10, 20, 30, 40, 50};
//    int len=sizeof(arr)/sizeof(arr[0]);
//
//    printf("first element: %d\n", arr[0]);
//    printf("last element: %d\n", arr[len-1]);
//    return 0;
//}


// //que-35
//int main(){
//    int n;
//    int i;
//    int j;
//
//    printf("number of rows:");
//    scanf("%d", &n);
//
//    for (i=n;i>=1;i--){
//        for(j=1;j<=i;j++){
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//que-36
//int main(){
//    int n, i, j;
//    printf("number of rows=");
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++) printf(" ");
//        for (j = 1; j <= 2 * i - 1; j++) printf("*");
//        printf("\n");
//    }
//
//    return 0;
//}


//que-37
//int main(){
//	int i;
//    int arr[]={5, 7, 7, 8, 8, 10};
//    int target=8;
//    int start= -1,end= -1;
//
//    for(i=0;i<6;i++) {
//        if(arr[i]==target) {
//            if(start == -1)start = i;
//            end=i;
//        }
//    }
//    printf("[%d, %d]\n", start, end);
//    return 0;
//}


// //que-38
// int main() {
// float cel;
// printf("cel=");
// scanf("%f",& cel);
// printf("fah=%.1f",cel*9/5 + 32);
//     return 0;
// }


// //que-39



// //que-40
//int main() {
//    int start, end,i;
//
//    printf("starting number=");
//    scanf("%d",&start);
//    printf("ending number=");
//    scanf("%d",&end);
//
//    printf("[");
//    for(i=start;i<=end;i++) {
//        printf("%d",i);
//        if (i != end) {
//            printf(", ");
//        }
//    }
//    printf("]");
//    return 0;
//}


// //que-41



// //que-42
//int main(){
//    int event1[2], event2[2];
//    int conflict;
//
//   
//    printf("give start and end times for event 1\n");
//    scanf("%d %d", &event1[0], &event1[1]);
//
//
//    printf("give start and end times for event 2\n");
//    scanf("%d %d", &event2[0], &event2[1]);
//
//    if(event1[1] <= event2[0] || event2[1] <= event1[0]){
//        conflict=0;
//    }else{
//        conflict=1;
//    }
//
//    if (conflict){
//        printf("Output: true\n");
//    }else{
//        printf("Output: false\n");
//    }
//
//    return 0;
//}
//43
//#include <stdio.h>
//
//int findMax(int arr[], int size) {
//    int maxCount = 0, currentCount = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == 1) {
//            currentCount++;
//            if (currentCount > maxCount) {
//                maxCount = currentCount;
//            }
//        } else {
//            currentCount = 0;
//        }
//    }
//
//    return maxCount;
//}
//
//int main() {
//    int arr[] = {1, 1, 0, 1, 1, 1};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("Max Consecutive Ones: %d\n", findMax(arr, size));
//    return 0;
//}

//44

//#include <stdio.h>
//#include <string.h>
//
//void printAll(char* str) {
//    int length = strlen(str);
//
//    for (int i = 0; i < length; i++) {
//        for (int j = i; j < length; j++) {
//            for (int k = i; k <= j; k++) {
//                printf("%c", str[k]);
//            }
//            printf("\n");
//        }
//    }
//}
//
//int main() {
//    char str[] = "abc";
//    printAll(str);
//    return 0;
//}



//45

//#include <stdio.h>
//#include <string.h>
//
//void findLong(char* sentence) {
//    char* word = strtok(sentence, " ");
//    char* longestWord = word;
//
//    while (word != NULL) {
//        if (strlen(word) > strlen(longestWord)) {
//            longestWord = word;
//        }
//        word = strtok(NULL, " ");
//    }
//
//    printf("Longest word: %s\n", longestWord);
//}
//
//int main() {
//    char sentence[] = "I love programming in JavaScript";
//    findLong(sentence);
//    return 0;
//}

//46

//#include <stdio.h>
//
//int firstRepeatingCharacter(char* str) {
//    int seen[256] = {0};
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (seen[(unsigned char)str[i]] > 0) {
//            return i;
//        }
//        seen[(unsigned char)str[i]]++;
//    }
//    return -1;
//}
//
//int main() {
//    printf("%d\n", firstRepeatingCharacter("hello")); 
//    return 0;
//}



//47

//#include <stdio.h>
//
//int firstRepeatingElement(int arr[], int size) {
//    int seen[1000] = {0};
//    for (int i = 0; i < size; i++) {
//        if (seen[arr[i]] > 0) {
//            return arr[i];
//        }
//        seen[arr[i]]++;
//    }
//    return -1;
//}
//
//int main() {
//    int arr[] = {10, 5, 3, 4, 3, 5, 6};
//    printf("%d\n", firstRepeatingElement(arr, 7)); 
//    return 0;
//}


//48

//#include <stdio.h>
//#include <string.h>
//
//void removeVowels(char* str) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
//            printf("%c", str[i]);
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    removeVowels("hello"); 
//    return 0;
//}



//49
//
//#include <stdio.h>
//
//void swapElements(int arr[], int i, int j) {
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
//}
//
//int main() {
//    int arr[] = {1, 2, 3, 4};
//    swapElements(arr, 1, 3);
//    for (int i = 0; i < 4; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//50

//#include <stdio.h>
//
//int countOccurrences(char* str, char ch) {
//    int count = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] == ch) count++;
//    }
//    return count;
//}
//
//int main() {
//    printf("%d\n", countOccurrences("hello world", 'o')); 
//    return 0;
//}


//51

//#include <stdio.h>
//
//struct Person {
//    char* name;
//    int age;
//    char* city;
//};
//
//int main() {
//    char* keys[] = {"name", "age", "city"};
//    char* values[] = {"Alice", "30", "New York"};
//    
//    struct Person person;
//    person.name = values[0];
//    person.age = atoi(values[1]);
//    person.city = values[2];
//
//    printf("{%s: '%s', %s: %d, %s: '%s'}\n", keys[0], person.name, keys[1], person.age, keys[2], person.city);
//    
//
//    return 0;
//}

//52


//#include <stdio.h>
//
//void runningSum(int nums[], int size) {
//    int runningSum = 0;
//    for (int i = 0; i < size; i++) {
//        runningSum += nums[i];
//        printf("%d ", runningSum);
//    }
//    printf("\n");
//}
//
//int main() {
//    int nums[] = {1, 2, 3, 4};
//    runningSum(nums, 4); 
//    return 0;
//}

//53

//54

//#include <stdio.h>
//#include <stdbool.h>
//
//bool isUgly(int n) {
//    if (n <= 0) return false;
//    while (n % 2 == 0) n /= 2;
//    while (n % 3 == 0) n /= 3;
//    while (n % 5 == 0) n /= 5;
//    return n == 1;
//}
//
//int main() {
//    printf("%d\n", isUgly(6));  
//    
//    return 0;
//}







