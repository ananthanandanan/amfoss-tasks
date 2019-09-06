def isPalindrome(n):
    s = str(n)
    reverseString = ""
    
    for i in range (len(s) - 1, -1, -1):
        reverseString += s[i]

    return reverseString == s

# the above function checks for palindrome nos.
def findLargestPalindrome():
    palindrome = -1
    
    for i in range (999, 99, -1):
        for j in range (i, 99, -1):
            
            # if product is palindrome by checking for larger previous number.
            if isPalindrome(i * j) and i * j > palindrome:
                palindrome = i * j
    return palindrome;

print (findLargestPalindrome())