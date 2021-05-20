/*
 * Copyright (c) 2018-2021 Confetti Interactive Inc.
 *
 * This is a part of Aura.
 *
 * This file(code) is licensed under a
 * Creative Commons Attribution-NonCommercial 4.0 International License
 *
 *   (https://creativecommons.org/licenses/by-nc/4.0/legalcode)
 *
 * Based on a work at https://github.com/ConfettiFX/The-Forge.
 * You may not use the material for commercial purposes.
*/

#ifndef LIGHT_CULL_RESOURCES_H
#define LIGHT_CULL_RESOURCES_H

RES(Buffer(LightData),     lights,             UPDATE_FREQ_NONE,      t0, binding = 0);
RES(RWBuffer(atomic_uint), lightClustersCount, UPDATE_FREQ_PER_FRAME, u0, binding = 1);
RES(RWBuffer(atomic_uint), lightClusters,      UPDATE_FREQ_PER_FRAME, u1, binding = 2);

#endif // LIGHT_CULL_RESOURCES_H