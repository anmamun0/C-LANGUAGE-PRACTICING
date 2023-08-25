#include <stdio.h>
#include <conio.h> // কিছু সিস্টেমে getch() এর জন্য এটি একটি হেডার ফাইল

int main() {
    int a[10];      // একটি একটি সংখ্যা সংরক্ষণের জন্য একটি একটি সংখ্যা এরে ডিক্লেয়ার করা হয়
    int i;          // একটি প্রমাণসহ চলমান ইন্ডেক্সের জন্য একটি পুরোপুরি পূর্ণ সংখ্যা ডিক্লেয়ার করা হয়
    int greatest;   // সর্বোচ্চ মান সংরক্ষণের জন্য একটি পূরোপুরি পূর্ণ সংখ্যা ডিক্লেয়ার করা হয়

    printf("Enter ten values: "); // ইউজারকে দশটি সংখ্যা ইনপুট দেওয়ার জন্য ইনস্ট্রাকশন প্রদান করে
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);     // এই লুপে ইউজার দ্বারা ইনপুট দেওয়া দশটি সংখ্যা পড়ে এবং সংখ্যা গুলি একটি সংখ্যা এরে তে সংরক্ষণ করে
    }

    greatest = a[0]; // প্রথম সংখ্যাটি সর্বোচ্চ সংখ্যা হিসেবে ধরা হয়
    
    for (i = 0; i < 10; i++) {
        if (a[i] > greatest) { // এই লুপে প্রতিটি সংখ্যা সর্বোচ্চ সংখ্যার সাথে তুলনা করে
            greatest = a[i];   // যদি সংখ্যাটি সর্বোচ্চ সংখ্যার থাকে, তাহলে সংখ্যাটি সর্বোচ্চ হবে
        }
    }
    
    printf("Greatest of ten numbers: %d", greatest); // সর্বোচ্চ সংখ্যাটি প্রিন্ট করা হয়
    
    return 0; // প্রোগ্রাম সফলভাবে সমাপ্ত হয়
}
/---------------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    int greatest = 0; // Initialize the greatest variable with a starting value

    printf("Enter ten values:\n");
    
    for (i = 0; i < 10; i++) {
        int inputValue;
        scanf("%d", &inputValue);
        
        if (inputValue > greatest) {
            greatest = inputValue;
        }
    }
    
    printf("Greatest of ten numbers: %d", greatest);
    
    return 0;
}
