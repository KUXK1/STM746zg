# STM746 - PWM & Przetwarzanie Sygnałów

## Konfiguracja PWM  
PWM zostało ustawione pod **timer 3**, który znajduje się pod zegarem magistrali **APB1**.  

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
  Zapobiega wydłużeniu lub skróceniu okresu w trakcie zmiany parametrów podczas trwania bieżącego okresu, poprzez zresetowanie licznika.  

### Obliczenia:  
Zegar wyjściowy PWM można obliczyć ze wzoru:  
```
Częstotliwość PWM = Zegar APB1 / ((Prescaler + 1) * (Counter + 1))
```
Podstawiając:  
```
Częstotliwość PWM = 72 MHz / ((71 + 1) * (999 + 1)) = 1 kHz
```

## Przetwarzanie sygnałów z czujników  
Aktualnie pracuje nad **przetwarzaniem sygnałów z wielu czujników i urządzeń**, skupiając się na ich **filtracji oraz eliminacji szumów**. Celem tego zadania jest uzyskanie **czystych i precyzyjnych danych** wejściowych, które będą podstawą dalszej analizy i sterowania.  

### Kluczowe aspekty realizowanego zadania:  
- **Odbiór danych z wielu źródeł**, w tym czujników analogowych i cyfrowych.  
- **Zastosowanie filtracji**, w tym filtrów dolnoprzepustowych i algorytmów redukcji szumów.  
- **Analiza i optymalizacja przetwarzania sygnałów** w czasie rzeczywistym.  
- **Integracja z systemem mikrokontrolera STM746** w celu efektywnego przetwarzania danych.  

Zadanie jest w **toku**, a jego rozwój pozwoli na uzyskanie wysokiej jakości sygnałów, które będą wykorzystywane w dalszych etapach projektu.
