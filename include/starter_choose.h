#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

extern const u16 gBirchBagGrass_Pal[];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchBagGrass_Gfx[];
extern const u32 gPokeballSelection_Gfx[];

// Weighted selection option for Birch's bag
struct BirchBagWeightedChoice
{
    u16 species;
    u16 weight;  // probability weight (higher = more likely)
};

u16 GetStarterPokemon(u16 chosenStarterId);
void CB2_ChooseStarter(void);
void SetBirchBagWeightedChoices(const struct BirchBagWeightedChoice *choices, u8 count);
void ResetBirchBagWeightedPool(void);
void ChooseBirchBagPokemonWeighted(void);

#endif // GUARD_STARTER_CHOOSE_H
