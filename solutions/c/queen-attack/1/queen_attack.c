#include "queen_attack.h"


attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  
  int row_diff, col_diff;
  row_diff = queen_1.row - queen_2.row; 
  col_diff = queen_1.column - queen_2.column; 
  if (row_diff < 0) row_diff *= -1;
  if (col_diff < 0) col_diff *= -1;

  if (queen_1.row > 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7
    || ((queen_1.row == queen_2.row) && (queen_1.column == queen_2.column))) return INVALID_POSITION;
  else if (row_diff == 0 || col_diff == 0) return CAN_ATTACK;  
  else if (row_diff - col_diff == 0) return CAN_ATTACK;
  else return CAN_NOT_ATTACK;
}
