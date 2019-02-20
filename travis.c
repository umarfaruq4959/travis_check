/******************************************************************************
* File Name: DLittle to big endian conversion
* Description:  This file contains functions of converting the littele endian to corresponding big endian value
* Tool-Chain: AVR gcc
*
*  Modification History:
*  Created by:      UMAR    V1.0      19/Feb/2019
*  Description:     V2.0
******************************************************************************/

/******************************************************************************
*                      Includes
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/******************************************************************************
*                      Defines and data types
******************************************************************************/

/******************************************************************************
*                      Defines and data types
******************************************************************************/

    unsigned int LitToBigEndian(unsigned int x);

/******************************************************************************
*                      Static variables
******************************************************************************/


/******************************************************************************
*                      Global functions
******************************************************************************/

/******************************************************************************
* NAME: unsigned int LitToBigEndian(unsigned int x)
* DESCRIPTIONS: This function takes the little endian number and convert it into its corresponding big endian value.
* ARGUMENTS: unsigned int x - little endian value
* RETURN VALUE: big endian value
******************************************************************************/
unsigned int LitToBigEndian(unsigned int x)
{
    return (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00) | ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000));
}

/******************************************************************************
*                      Main Function
******************************************************************************/

/******************************************************************************
* NAME: int main()
* DESCRIPTION: This function passes the little endian value to a function and gets the corresponding ig endian value
* ARGUMENTS: no arguments
******************************************************************************/

int main()
{
    int Little_Endian = 0xAABBCCDD;
    printf("\n Little_Endian = 0x%X\n",Little_Endian);
    printf("\n Big_Endian = 0x%X\n",LitToBigEndian(Little_Endian));
    return 0;
}

/******************************************************************************
*                      End of Function
******************************************************************************/

