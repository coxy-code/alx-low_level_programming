int _isupper(int c)
{
    // Check if c is within the ASCII range of uppercase characters
    // ASCII codes for uppercase letters range from 65 ('A') to 90 ('Z')
    return (c >= 65 && c <= 90) ? 1 : 0;
}

