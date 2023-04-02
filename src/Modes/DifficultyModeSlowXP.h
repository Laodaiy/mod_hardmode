#ifndef MODULE_HARDMODE_MODE_SLOWXP_H
#define MODULE_HARDMODE_MODE_SLOWXP_H

#include "DifficultyMode.h"

#include <vector>

class DifficultyModeSlowXP : public DifficultyMode
{
public:
    DifficultyModeSlowXP();

public:
    void OnGiveXP(Player* player, uint32& amount, Unit* victim) override;
    void OnQuestComputeXP(Player* player, Quest const* quest, uint32& xpValue) override;
};

#endif // MODULE_HARDMODE_MODE_SLOWXP_H