// ------------------------------------
// (Not a Leetcode question)
// ------------------------------------

/// Solution:

// Just take 2's complement

// choose fixed bits size
// convert absolute value to bin
// pre-pad with zeros
// flip all bits
// add 1

string negDecToBin(int input)
{

    // define fixed bits size

    int BITS = 8;

    // convert to bin
    if (input == 0)
    {
        return string(BITS, '0');
    }

    string Binary = "";
    int temp = abs(input); // Convert input to absolute value
    while (temp > 0)
    {
        Binary = char((temp & 1) + '0') + Binary;
        temp >>= 1;
    }
    // pre-pad with zeros
    while (Binary.length() < BITS)
    {
        Binary = '0' + Binary; // prepending 0s till total length reaches decided bits
    }

    if (input > 0) // Complement for non zero numbers
    {
        return Binary;
    }

    // flip all bits
    for (int i = 0; i < BITS; i++)
    {
        Binary[i] = Binary[i] == '1' ? '0' : '1';
    }
    // add 1

    for (int i = BITS - 1; i >= 0; i--) // Start at LSB
    {

        if (Binary[i] == '0')
        {
            Binary[i] = '1';
            break;
        }
        else
        {
            Binary[i] = '0';
        }
    }

    return Binary;
}
