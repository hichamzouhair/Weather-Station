# 🌤️ Weather Station — OOP C++ Project

A C++ weather station simulation built using the **Observer Design Pattern**, developed as part of the Object-Oriented Programming course at Université Ibn Zohr Agadir.

## 👨‍💻 Author
- **Hicham Zouhair**

## 📋 Description

This project simulates a weather station that provides **3 real-time displays**, automatically updated whenever new weather data is acquired by the `DonneesMeteo` object:

| Display | Description |
|---|---|
| `AffichageConditions` | Current temperature, humidity, and pressure |
| `AffichageStatistiques` | Min / Max / Average of each measurement |
| `AffichagePrevisions` | Simple forecast based on pressure trend |

## 🏗️ System Architecture

The project follows the **Observer Pattern**:

```
StationMeteo  →  DonneesMeteo  →  AffichageConditions
  (sensors)       (Subject)    →  AffichageStatistiques
                               →  AffichagePrevisions
```

## 📁 Project Structure

```
StationMeteo/
├── Observateur.h               # Abstract Observer interface
├── Sujet.h                     # Abstract Subject interface
├── DonneesMeteo.h / .cpp       # Core data object (Subject)
├── StationMeteo.h / .cpp       # Physical station simulation
├── AffichageConditions.h / .cpp
├── AffichageStatistiques.h / .cpp
├── AffichagePrevisions.h / .cpp
└── main.cpp                    # Entry point
```

## ⚙️ How to Compile & Run

### Windows
```bash
g++ main.cpp DonneesMeteo.cpp StationMeteo.cpp AffichageConditions.cpp AffichageStatistiques.cpp AffichagePrevisions.cpp -o StationMeteo.exe
StationMeteo.exe
```

### Linux / macOS
```bash
g++ main.cpp DonneesMeteo.cpp StationMeteo.cpp AffichageConditions.cpp AffichageStatistiques.cpp AffichagePrevisions.cpp -o StationMeteo
./StationMeteo
```

## 📦 Requirements
- g++ compiler (MinGW on Windows)
- C++11 or later

## 🖥️ OS
Windows
