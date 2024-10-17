# Mini_Talk

## Komunikacja
- Klient i serwer komunikują się za pomocą sygnałów `SIGUSR1` i `SIGUSR2`.

## Klient (`client.c`)

### Funkcja `main()`
1. **Argumenty**:
   - Oczekuje 2 argumentów: PID serwera i łańcuch znaków do wysłania.

2. **Sprawdzanie argumentów**:
   - Używa `ft_exit_failure()` do zakończenia działania w przypadku niepoprawnych argumentów.

3. **Obliczanie długości łańcucha**:
   - Oblicza długość łańcucha za pomocą `ft_strlen()`.

4. **Wyświetlanie informacji**:
   - Informuje o liczbie bajtów wysłanych i oczekuje na odpowiedzi.

5. **Rejestracja sygnałów**:
   - Używa `signal(SIGUSR1, action)` i `signal(SIGUSR2, action)` do rejestracji funkcji obsługi sygnałów.

6. **Wysyłanie danych**:
   - Wywołuje `send_signal(pid, str)` do wysłania danych do serwera.

7. **Czekanie na sygnały**:
   - Używa `pause()` w nieskończonej pętli, aby czekać na sygnały.

## Serwer (`server.c`)

### Funkcja `main()`
1. **Inicjalizacja**:
   - Używa `sigaction()` do rejestracji funkcji obsługi sygnałów `SIGUSR1` i `SIGUSR2`.

2. **Wyświetlanie PID**:
   - Wyświetla swój PID, co jest potrzebne klientowi do komunikacji.

3. **Obsługa sygnałów**:
   - Używa `pause()` w nieskończonej pętli, aby czekać na sygnały od klientów.

## Kluczowe elementy
- **Sygnały**: `SIGUSR1` i `SIGUSR2` służą do komunikacji między klientem a serwerem.
- **`STDOUT_FILENO`**: Deskryptor pliku dla standardowego wyjścia.
- **`EXIT_FAILURE`**: Kod błędu używany do wskazania, że program zakończył się niepowodzeniem.
