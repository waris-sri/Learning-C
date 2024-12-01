#include <stdio.h>
#include <string.h>

struct Monster {
  char m_name[21];
  char m_element;
  float m_hp;
  int m_speed;
  int m_attack;
  int m_defense;
};
typedef struct Monster MONSTER;

struct Tamer {
  char t_name[21];
  int t_age;
  int t_win;
  int t_lose;
  MONSTER partner_monster;
};
typedef struct Tamer TAMER;

float elementFactor(char m_element1, char m_element2) {
  float elm_fac = 1.0;
  if (m_element1 == 'F') {
    if (m_element2 == 'P')
      elm_fac = 2.0;
    else if (m_element2 == 'W')
      elm_fac = 0.5;
  } else if (m_element1 == 'W') {
    if (m_element2 == 'F')
      elm_fac = 2.0;
    else if (m_element2 == 'P')
      elm_fac = 0.5;
  } else if (m_element1 == 'P') {
    if (m_element2 == 'W')
      elm_fac = 2.0;
    else if (m_element2 == 'F')
      elm_fac = 0.5;
  }
  return elm_fac;
}

float calcDmg(float attack, float elm_fac, int defense) {
  float dmg = (attack * elm_fac) - defense;
  if (dmg < 0)
    dmg = 0;
  return dmg;
}

int main() {
  int character_cnt;
  scanf("%d", &character_cnt);
  struct Tamer tamers[character_cnt];
  for (int i = 0; i < character_cnt; i++) {
    scanf("%s", tamers[i].t_name);
    scanf(" %d", &tamers[i].t_age);
    scanf(" %d", &tamers[i].t_win);
    scanf(" %d", &tamers[i].t_lose);
    scanf(" %s", tamers[i].partner_monster.m_name);
    scanf(" %c", &tamers[i].partner_monster.m_element);
    scanf(" %f", &tamers[i].partner_monster.m_hp);
    scanf(" %d", &tamers[i].partner_monster.m_speed);
    scanf(" %d", &tamers[i].partner_monster.m_attack);
    scanf(" %d", &tamers[i].partner_monster.m_defense);
  }

  int max_turns;
  scanf("%d", &max_turns);

  // Scan for a tamer pair that's going to fight against each other
  int tamer1_idx, tamer2_idx;
  scanf("%d", &tamer1_idx);
  scanf("%d", &tamer2_idx);

  // Input preview in table format
  /*
  printf("\n\t\t\t\t\tTotal Number of Characters: %d\n", character_cnt);
  printf("\t\t\t\t\tTAMERS AND MONSTERS INFORMATION\n");
  printf("====================================================================="
         "===============================================\n");
  printf("%-20s %-6s %-6s %-6s %-20s %-10s %-8s %-8s %-8s %-8s\n", "Tamer Name",
         "Age", "Wins", "Loses", "Monster Name", "Element", "HP", "Speed",
         "Attack", "Defense");
  printf("====================================================================="
         "===============================================\n");
  for (int i = 0; i < character_cnt; i++) {
    printf("%-20s %-6d %-6d %-6d %-20s %-10c %-8.1f %-8d %-8d %-8d\n",
           tamers[i].t_name, tamers[i].t_age, tamers[i].t_win,
           tamers[i].t_lose, tamers[i].partner_monster.m_name,
           tamers[i].partner_monster.m_element,
           tamers[i].partner_monster.m_hp, tamers[i].partner_monster.m_speed,
           tamers[i].partner_monster.m_attack,
           tamers[i].partner_monster.m_defense);
  }
  printf("====================================================================="
         "===============================================\n");

  printf("Maximum Turns: %d\n", max_turns);
  printf("Selected Tamers for Battle: %d vs %d\n\n", tamer1_idx, tamer2_idx);
  */

  // Start of battle log
  // printf("\t\t\t\t\t\tTHE BATTLE LOG\n");
  // printf("====================================================================="
  //        "===============================================\n");

  // Determine who goes first (higher speed OR order priority from input)
  int first_idx, second_idx;
  if (tamers[tamer1_idx].partner_monster.m_speed >
      tamers[tamer2_idx].partner_monster.m_speed) {
    printf("The first start is %s\'s %s\n", tamers[tamer1_idx].t_name,
           tamers[tamer1_idx].partner_monster.m_name);
    first_idx = tamer1_idx;
    second_idx = tamer2_idx;
  } else if (tamers[tamer2_idx].partner_monster.m_speed >
             tamers[tamer1_idx].partner_monster.m_speed) {
    printf("The first start is %s\'s %s\n", tamers[tamer2_idx].t_name,
           tamers[tamer2_idx].partner_monster.m_name);
    first_idx = tamer2_idx;
    second_idx = tamer1_idx;
  } else {
    // Speeds are equal, use order priority from input
    printf("The first start is %s\'s %s\n", tamers[tamer1_idx].t_name,
           tamers[tamer1_idx].partner_monster.m_name);
    first_idx = tamer1_idx;
    second_idx = tamer2_idx;
  }

  // Battle session
  for (int i = 0; i < max_turns; i++) {
    printf("Turn %d: ", i + 1);

    // Check if either monster has been knocked out
    if (tamers[first_idx].partner_monster.m_hp <= 0 ||
        tamers[second_idx].partner_monster.m_hp <= 0) {
      printf("Knockout! Game Over!\n");
      break;
    }

    // Determine attacker and defender based on turn
    int attacker_idx = (i % 2 == 0) ? first_idx : second_idx;
    int defender_idx = (i % 2 == 0) ? second_idx : first_idx;

    // Calculate element factor and damage
    float elm_fac =
        elementFactor(tamers[attacker_idx].partner_monster.m_element,
                      tamers[defender_idx].partner_monster.m_element);
    float dmg = calcDmg(tamers[attacker_idx].partner_monster.m_attack, elm_fac,
                        tamers[defender_idx].partner_monster.m_defense);

    // Update defender's HP
    float defender_old_hp = tamers[defender_idx].partner_monster.m_hp;
    float defender_new_hp = defender_old_hp - dmg;
    if (defender_new_hp < 0)
      defender_new_hp = 0; // HP cannot drop below zero
    tamers[defender_idx].partner_monster.m_hp = defender_new_hp;

    // Display attack result
    printf(
        "%s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n",
        tamers[attacker_idx].partner_monster.m_name, dmg,
        tamers[defender_idx].partner_monster.m_name,
        tamers[defender_idx].partner_monster.m_name, defender_old_hp,
        defender_new_hp);

    // Check if defender has been knocked out after the attack
    if (tamers[defender_idx].partner_monster.m_hp <= 0) {
      printf("Knockout! Game Over!\n");
      break;
    }
  }

  // Determine the winner
  char winner_name[21], winner_monster[21];
  int winner_age, winner_n_wins, winner_n_loses;
  if (tamers[first_idx].partner_monster.m_hp >
      tamers[second_idx].partner_monster.m_hp) {
    strcpy(winner_name, tamers[first_idx].t_name);
    winner_age = tamers[first_idx].t_age;
    strcpy(winner_monster, tamers[first_idx].partner_monster.m_name);
    winner_n_wins = tamers[first_idx].t_win + 1;
    winner_n_loses = tamers[first_idx].t_lose;
  } else {
    strcpy(winner_name, tamers[second_idx].t_name);
    winner_age = tamers[second_idx].t_age;
    strcpy(winner_monster, tamers[second_idx].partner_monster.m_name);
    winner_n_wins = tamers[second_idx].t_win + 1;
    winner_n_loses = tamers[second_idx].t_lose;
  }
  printf("The winner is %s (%d) using %s (win: %d lose: %d)\n", winner_name,
         winner_age, winner_monster, winner_n_wins, winner_n_loses);

  return 0;
}
