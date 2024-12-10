# STM746 - PWM

## Konfiguracja PWM
PWM zostało ustawione pod timer 3, który znajduje się pod zegarem magistrali APB1.

### Szczegóły konfiguracji:
- **Deklaracja:** W pliku `functions.h`
- **Implementacja:** W pliku `functions.c`
- **Zegar APB1:** 72 MHz

### Parametry timera:
- **Prescaler:** 71  
  Prescaler dzieli zegar APB1. Wartość 71 oznacza podział zegara na 72 (ponieważ liczymy od 0).

- **Counter:** 999  
  Counter liczy od 0 do 999, co daje łącznie 1000 cykli na okres.

- **Auto-reload enable:**  
  Zapobiega wydłużeniu lub skróceniu okresu w trakcie zmiany parametrów podczas trwania bieżącego okresu.

### Obliczenia:
Zegar wyjściowy PWM można obliczyć ze wzoru:

\[
\text{Częstotliwość PWM} = \frac{\text{Zegar APB1}}{(\text{Prescaler} + 1) \times (\text{Counter} + 1)}
\]

Podstawiając:
\[
\text{Częstotliwość PWM} = \frac{72\,\text{MHz}}{(71 + 1) \times (999 + 1)} = 1\,\text{kHz}
\]

## Ważne informacje
Timer 3 został skonfigurowany tak, aby generować sygnał PWM o częstotliwości 1 kHz. Implementacja szczegółów znajduje się w odpowiednich plikach kodu, co pozwala na łatwą modyfikację parametrów w razie potrzeby.

