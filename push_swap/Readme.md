# Push_swap

## Opis
"Push_swap" to zadanie polegające na posortowaniu stosu liczb przy użyciu ograniczonego zestawu operacji. Główne operacje obejmują przenoszenie elementów między dwoma stosami oraz rotacje stosów.

## Główne operacje
- **pa**: przenosi górny element stosu `b` na szczyt stosu `a`.
- **pb**: przenosi górny element stosu `a` na szczyt stosu `b`.
- **ra**: rotuje stos `a` w górę (pierwszy element staje się ostatnim).
- **rra**: rotuje stos `a` w dół (ostatni element staje się pierwszym).
- **sa**: zamienia miejscami dwa pierwsze elementy na szczycie stosu `a`.

## Funkcje i algorytmy

### 1. `short_push_swap`
- Sortuje stosy o długości 3-5 elementów.
- **Kroki**:
  1. Jeśli długość jest większa niż 3, przesuwa najmniejszy element na stos `b`.
  2. W przypadku 5 elementów, przenosi również element o indeksie 1 na `b`.
  3. Sortuje trzy pozostałe elementy przy użyciu funkcji `three_numbers`.
  4. Przenosi elementy z powrotem na stos `a`, aby zakończyć sortowanie.

### 2. `three_numbers`
- Sortuje trzy pierwsze elementy stosu `a`.
- **Kroki**:
  1. Sprawdza, czy elementy są już posortowane rosnąco.
  2. W zależności od relacji między elementami wywołuje funkcje `pos_0_greater_pos_1` lub `pos_0_lower_pos_1` do sortowania.

### 3. `find_limit`
- Oblicza liczbę podziałów na pół, które można wykonać na liczbie `len`, aż wynik stanie się mniejszy lub równy 1.
- **Przykład**: Dla `len = 16`, funkcja zwróci 4 (bo 16 → 8 → 4 → 2 → 1).

### 4. `cpy_vector`
- Tworzy kopię tablicy liczb całkowitych.
- Rezerwuje pamięć dla nowej tablicy i przepisuje wartości z oryginalnej tablicy.

### 5. `quick_sort`
- Mimo nazwy, implementuje sortowanie bąbelkowe, a nie prawdziwy algorytm quicksort.
- Sortuje tablicę poprzez wielokrotne zamienianie miejscami sąsiednich elementów, aż wszystkie będą uporządkowane.

## Uwagi
- Algorytmy używane w zadaniu "push_swap" są dostosowane do specyficznych przypadków (np. małych ilości elementów).
- Kluczową rolę odgrywa ograniczona liczba operacji oraz możliwość korzystania z dwóch stosów.

## Flagi kompilacji
- **`-g`**: Dodaje informacje do debugowania do skompilowanego pliku.
- **`-fsanitize=address`**: Włącza wykrywanie błędów związanych z dostępem do pamięci (np. przepełnienia bufora, odczyt/zapis do nieprzydzielonej pamięci).
