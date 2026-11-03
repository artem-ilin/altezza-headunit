# altezza-headunit

Оригинальная магнитола Toyota (например, 86120-53010) в Toyota Altezza RS200 (SXE10, 1998) в роли физической панели управления для современной начинки:

- **ATOTO P8** (беспроводной Android Auto) — основной экран и источник звука;
- **ESP32-S3** внутри корпуса магнитолы — читает родные кнопки и крутилки, управляет P8 (имитирует BLE-пульт AC-44F6), регулирует яркость P8, в будущем выводит информацию на родной LCD.

Цель — удобная физическая крутилка громкости и штатный вид салона 90-х вместо сенсорной aftermarket-магнитолы (Nakamichi), которой неудобно пользоваться на ходу.

## Документы

| Файл | Что внутри |
|---|---|
| [docs/roadmap.md](docs/roadmap.md) | Этапы, гипотезы, статус |
| [docs/decisions.md](docs/decisions.md) | Журнал решений: что выбрали и почему |
| [docs/architecture.md](docs/architecture.md) | Общая схема системы и раскладка управления |
| [docs/atoto-p8.md](docs/atoto-p8.md) | Всё про P8: пульт, датчик света, ночной режим |
| [docs/toyota-unit.md](docs/toyota-unit.md) | Родная магнитола: кнопки, энкодеры, LCD (реверс) |
| [docs/shopping.md](docs/shopping.md) | Что купить на каждом этапе |

## Структура

```
docs/       документация и результаты исследований
firmware/   прошивка ESP32 (PlatformIO, Arduino, C++)
hardware/   схемы, позже — KiCad
tools/      вспомогательные скрипты
```

## Вдохновение

- [Garage Tinkering — I Built a Retro Head Unit Because I Hate Touchscreens](https://www.youtube.com/watch?v=lvJEEXZzOyw)
