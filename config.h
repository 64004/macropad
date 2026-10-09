#pragma once

// Размерность вашей матрицы (4 строки, 5 столбцов)
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

// Пины для СТРОК (Синие линии по вашей схеме сверху вниз: a1, 2, 6, 10)
#define MATRIX_ROW_PINS { F6, D1, D7, B6 } // Соответствуют подписям на схеме: A1, 2, 6, 10

// Пины для СТОЛБЦОВ (Красные линии по вашей схеме слева направо: 15, a3, a2, 16, 10)
#define MATRIX_COL_PINS { B1, F4, F5, B2, B6 } // Соответствуют подписям на схеме: 15, A3, A2, 16, 10

// Направление диодов: со Столбцов на Строки (диод черной полоской к синей линии)
#define DIODE_DIRECTION COL2ROW

// Настройка энкодеров (Вращение)
#define NUM_ENCODERS 3
#define ENCODERS_PAD_A { D4, D0, C6 } // CLK пины для энкодеров 1, 2, 3 (пины платы: 4, 3, 5)
#define ENCODERS_PAD_B { D0, B4, E6 } // DT пины для энкодеров 1, 2, 3 (пины платы: 5, 8, 7)
#define ENCODER_RESOLUTION 4

// Уникальный ID для Vial
#define VIAL_KEYBOARD_UID {0xBE, 0xEF, 0x33, 0x46, 0xAA, 0xBB, 0xCC, 0xDD}
#define VIAL_UNLOCK_COMBO {0, 0}
