#pragma once

#include <cstdint>

namespace FAWorld
{
    enum class ItemEquipType : uint8_t
    {
        none,
        oneHanded,
        twoHanded,
        chest,
        head,
        ring,
        amulet,
        unequipable,
        belt,
        invalid,
    };

    enum class ItemType : uint8_t
    {
        misc = 0,
        sword,
        axe,
        bow,
        mace,
        shield,
        lightArmor,
        helm,
        mediumArmor,
        heavyArmor,
        staff,
        gold,
        ring,
        amulet,
    };

    enum class ItemClass : uint8_t
    {
        none = 0,
        weapon,
        armor,
        jewelryAndConsumable,
        gold,
        quest,
    };

    // TODO: synchronize names with:
    // https://github.com/sanctuary/notes/blob/72a0772e0d187d29117c4ddd6e6265cafc774a50/enums.h#L128
    enum class ItemEffectType : uint8_t
    {
        IncPercentChanceToHit,
        DecPercentChanceToHit,
        IncPercentDamageDone,
        DecPercentDamageDone,
        IncPercentDamageDoneChanceToHit,
        DecPercentDamageDoneChanceToHit,
        IncPercentArmourClass,
        DecPercentArmourClass,
        IncPercentResistFire,
        IncPercentResistLightning,
        IncPercentResistMagic,
        IncPercentResistAll,
        Unknown6,
        Unknown7,
        ModSpellLevel,
        IncCharges,
        IncFireDamage,
        IncLightningDamage,
        Unknown8,
        IncStrength,
        DecStrength,
        IncMagic,
        DecMagic,
        IncDexterity,
        DecDexterity,
        IncVitality,
        DecVitality,
        IncAllBasicStats,
        DecAllBasicStats,
        IncDamageTaken,
        DecDamageTaken,
        IncHP,
        DecHP,
        IncMana,
        DecMana,
        IncPercentDurability,
        DecPercentDurability,
        Indestructible,
        IncLightRadius,
        DecLightRadius,
        Unknown0,
        MultipleArrows,
        IncPercentFireArrowDamage,
        IncPercentLightningArrowDamage,
        UniquePicture,
        Thorns,
        AllMana,
        PlayerNoHeal,
        Unknown1,
        Unknown2,
        Unknown3,
        Unknown4,
        HalfTrapDamage,
        Knockback,
        MonsterNoHeal,
        PercentManaSteal,
        PercentLifeSteal,
        ArmourPenetration,
        AttackSpeed0,
        HitRecovery,
        FastBlock,
        IncDamageDone,
        RandomArrowSpeed,
        UnusualDamage,
        AlteredDurability,
        NoStrengthRequirment,
        Spell,
        AttackSpeed1,
        OneHanded,
        AntiDemon,
        ZeroAllResist,
        Unknown5,
        ConstantLifeDrain,
        PercentFixedLifeSteal,
        Infravision,
        SpecifiedArmourClass,
        IncHPWithArmourClass,
        IncArmourClassWithMana,
        IncFireResistWithLevel,
        DecArmourClass
    };
}
