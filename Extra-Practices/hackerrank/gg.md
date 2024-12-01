### [Problem Link](https://www.hackerrank.com/contests/ict-c-2024-quiz-v/challenges/g-gg-2021-pokemon-strike-back)

# Battle Rules

- This is the turn-based system, so the Monster will take turns attacking each
  other.
- **The fastest (speed) Monster will attack first.**
- If the speed is equal, **the first in the list (based on the user choice) would
  start the attack first.**

# Element Rules

- **Fire**: stronger than Plant, weaker than Water
- **Water**: stronger than Fire , weaker than Plant
- **Plant**: stronger than Water, weaker than Fire

# Element Factors

- If you hit the monster that's stronger than you, your attack will be reduced
  to 50% (x0.5).
- If you hit the monster that's weaker than you, your attack would be increased
  by 200% (x2.0).
- Otherwise, the factor will be 1

# Damage

The formula of damage from monster A (attacker) to monster B (defender) is

```plaintext
Damage to B = (Attack of A x the element factor) - Defense power of B
                              ↳ either 0.5 or 2.0
```

- If the Defense is higher than Attack, the attack power becomes 0
- If the Attack is higher than Defense, the defense power becomes 0
- The attack won't reduce the HP to less than zero

For example:

- Monster A: atk 120, def 30
- Monster B: atk 50, def 70

- **If they are on the same element:**

  - A attack B = (120 x 1.0) - 70 = 50

- **If A is stronger than B:**
  - A attack B = (120 x 2.0) - 70 = 170
- **If A is weaker than B:**
  - A attack B = (120 x 0.5) - 70 = 0 (since 60-70 is negative)

**_Clip negative values to 0_**

# Sample Input

```plaintext
3 << Number of tamers with their own partner monsters (from user input)
  (also is the `struct Tamer` array size)

t_name:     MasterMarry (#0)
t_age:      15
t_win:      10
t_lose:     2
m_name:     MagesticPlant
m_element:  P
m_hp:       1700
m_speed:    30
m_attack:   50
m_defense:  80

t_name:     FighterKuzari (#1)
t_age:      20
t_win:      20
t_lose:     0
m_name:     DragonDancer
m_element:  F
m_hp:       750
m_speed:    82
m_attack:   105
m_defense:  30

t_name:     SwimmerYoyo (#2)
t_age:      14
t_win:      6
t_lose:     15
m_name:     SeaDivine
m_element:  W
m_hp:       600
m_speed:    65
m_attack:   50
m_defense:  50

10 << Number of turns
1  << The tamer that's going to fight (0-indexed)
2  << The tamer that's going to fight (0-indexed)
```

```plaintext
Number of Turns = min(Max Turns, Turns Until HP of One Monster is Zero)
(automatically determined in runtime)
```

## Input #0

```plaintext
3
MasterMarry
15
10
2
MagesticPlant
P
1700
30
50
80
FighterKuzari
20
20
0
DragonDancer
F
750
82
105
30
SwimmerYoyo
14
6
15
SeaDivine
W
600
65
50
50
10
1
2
```

## Output #0

```plaintext
The first start is FighterKuzari's DragonDancer
Turn 1: DragonDancer causes 2.50 the damage to SeaDivine, HP of SeaDivine drops from 600.00 to 597.50
Turn 2: SeaDivine causes 70.00 the damage to DragonDancer, HP of DragonDancer drops from 750.00 to 680.00
Turn 3: DragonDancer causes 2.50 the damage to SeaDivine, HP of SeaDivine drops from 597.50 to 595.00
Turn 4: SeaDivine causes 70.00 the damage to DragonDancer, HP of DragonDancer drops from 680.00 to 610.00
Turn 5: DragonDancer causes 2.50 the damage to SeaDivine, HP of SeaDivine drops from 595.00 to 592.50
Turn 6: SeaDivine causes 70.00 the damage to DragonDancer, HP of DragonDancer drops from 610.00 to 540.00
Turn 7: DragonDancer causes 2.50 the damage to SeaDivine, HP of SeaDivine drops from 592.50 to 590.00
Turn 8: SeaDivine causes 70.00 the damage to DragonDancer, HP of DragonDancer drops from 540.00 to 470.00
Turn 9: DragonDancer causes 2.50 the damage to SeaDivine, HP of SeaDivine drops from 590.00 to 587.50
Turn 10: SeaDivine causes 70.00 the damage to DragonDancer, HP of DragonDancer drops from 470.00 to 400.00
The winner is SwimmerYoyo (14) using SeaDivine (win: 7 lose: 15)
```

## Input #1

```plaintext
3
MasterMarry
15
10
2
MagesticPlant
P
1700
30
50
80
FighterKuzari
20
20
0
DragonDancer
F
750
82
105
30
SwimmerYoyo
14
6
15
SeaDivine
W
600
65
50
50
20
0
2
```

## Output #1

```plaintext
The first start is SwimmerYoyo's SeaDivine
Turn 1: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 2: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 600.00 to 550.00
Turn 3: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 4: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 550.00 to 500.00
Turn 5: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 6: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 500.00 to 450.00
Turn 7: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 8: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 450.00 to 400.00
Turn 9: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 10: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 400.00 to 350.00
Turn 11: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 12: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 350.00 to 300.00
Turn 13: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 14: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 300.00 to 250.00
Turn 15: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 16: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 250.00 to 200.00
Turn 17: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 18: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 200.00 to 150.00
Turn 19: SeaDivine causes 0.00 the damage to MagesticPlant, HP of MagesticPlant drops from 1700.00 to 1700.00
Turn 20: MagesticPlant causes 50.00 the damage to SeaDivine, HP of SeaDivine drops from 150.00 to 100.00
The winner is MasterMarry (15) using MagesticPlant (win: 11 lose: 2)
```
