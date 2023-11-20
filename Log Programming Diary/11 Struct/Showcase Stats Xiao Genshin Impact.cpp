#include <iostream>
using namespace std;

struct Character
{
    // baic stats
    int hp_max;
    int atk;
    int def;
    int em;
    // advanced stats
    float crit_rate;
    float crit_dmg;
    float healing_bonus;
    float incoming_healing_bonus;
    float energy_recharge;
    float reduce_cd;
    float shield_power;
    // Element Type
    float pyro_dmg_bonus;
    float pyro_res;
    float hydro_dmg_bonus;
    float hydro_res;
    float dendro_dmg_bonus;
    float dendro_res;
    float electro_dmg_bonus;
    float electro_res;
    float anemo_dmg_bonus;
    float anemo_res;
    float cryo_dmg_bonus;
    float cryo_res;
    float geo_dmg_bonus;
    float geo_res;
    float physical_dmg_bonus;
    float physical_res;
};

int main()
{
    Character Xiao;
    Xiao.hp_max = 12736 + 6237;
    Xiao.atk = 1024 + 1522;
    Xiao.def = 799;
    Xiao.em = 240;
    Xiao.crit_rate = 0.708;
    Xiao.crit_dmg = 1.619;
    Xiao.healing_bonus = 0.0;
    Xiao.incoming_healing_bonus = 0.0;
    Xiao.energy_recharge = 109.7;
    Xiao.reduce_cd = 0.05;
    Xiao.shield_power = 0.0;
    Xiao.pyro_dmg_bonus = 0.0;
    Xiao.pyro_res = 0.0;
    Xiao.hydro_dmg_bonus = 0.0;
    Xiao.hydro_res = 0.0;
    Xiao.dendro_dmg_bonus = 0.0;
    Xiao.dendro_res = 0.0;
    Xiao.electro_dmg_bonus = 0.0;
    Xiao.electro_res = 0.0;
    Xiao.anemo_dmg_bonus = 0.466;
    Xiao.anemo_res = 0.0;
    Xiao.cryo_dmg_bonus = 0.0;
    Xiao.cryo_res = 0.0;
    Xiao.geo_dmg_bonus = 0.0;
    Xiao.geo_res = 0.0;
    Xiao.physical_dmg_bonus = 0.0;
    Xiao.physical_res = 0.0;
    cout << "Stats Dasar" << endl;
    cout << "HP Max                : " << Xiao.hp_max << endl;
    cout << "ATK                   : " << Xiao.atk << endl;
    cout << "DEF                   : " << Xiao.def << endl;
    cout << "EM                    : " << Xiao.em << endl;
    cout << "Stats Advanced" << endl;
    cout << "Crit Rate             : " << Xiao.crit_rate << endl;
    cout << "Crit Dmg              : " << Xiao.crit_dmg << endl;
    cout << "Healing Bonus         : " << Xiao.healing_bonus << endl;
    cout << "Incoming Healing Bonus: " << Xiao.incoming_healing_bonus << endl;
    cout << "Energy Recharge       : " << Xiao.energy_recharge << endl;
    cout << "Reduce CD             : " << Xiao.reduce_cd << endl;
    cout << "Shield Power          : " << Xiao.shield_power << endl;
    cout << "Tipe Element" << endl;
    cout << "Pyro Dmg Bonus        : " << Xiao.pyro_dmg_bonus << endl;
    cout << "Pyro Res              : " << Xiao.pyro_res << endl;
    cout << "Hydro Dmg Bonus       : " << Xiao.hydro_dmg_bonus << endl;
    cout << "Hydro Res             : " << Xiao.hydro_res << endl;
    cout << "Dendro Dmg Bonus      : " << Xiao.dendro_dmg_bonus << endl;
    cout << "Dendro Res            : " << Xiao.dendro_res << endl;
    cout << "Electro Dmg Bonus     : " << Xiao.electro_dmg_bonus << endl;
    cout << "Electro Res           : " << Xiao.electro_res << endl;
    cout << "Anemo Dmg Bonus       : " << Xiao.anemo_dmg_bonus << endl;
    cout << "Anemo Res             : " << Xiao.anemo_res << endl;
    cout << "Cryo Dmg Bonus        : " << Xiao.cryo_dmg_bonus << endl;
    cout << "Cryo Res              : " << Xiao.cryo_res << endl;
    cout << "Geo Dmg Bonus         : " << Xiao.geo_dmg_bonus << endl;
    cout << "Geo Res               : " << Xiao.geo_res << endl;
    cout << "Physical Dmg Bonus    : " << Xiao.physical_dmg_bonus << endl;
    cout << "Physical Res          : " << Xiao.physical_res << endl;
    return 0;
}