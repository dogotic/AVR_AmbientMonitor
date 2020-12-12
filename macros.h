/**
 * @file macros.h
 * @author Domagoj Gotic (domagoj.gotic@protonmail.com)
 * @brief helper macros to set and clear bits in a register
 * @version 0.1
 * @date 2020-12-12
 * 
 * @copyright MIT LICENSE
 * 
 */

#ifndef MACROS_H
#define MACROS_H

/**
 * @brief set bit in register <reg> at position <pos>
 * @param reg - register in which the bit will be set
 * @param pos - position of bit to be set
 */
set_bit(reg,pos)   (reg |= (1 << pos))

/**
 * @brief clear bit in register <reg> at position <pos>
 * @param reg - register in which the bit will be cleared 
 * @param pos - position of the bit to be cleared
 */
clr_bit(reg,pos)   (reg &= ~(1 << pos))

#endif // MACROS_H