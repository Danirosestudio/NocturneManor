/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2023 Audiokinetic Inc.
*******************************************************************************/

/*=============================================================================
AkPortalObstructionAndOcclusionService.h:
=============================================================================*/

#pragma once

#include "AkInclude.h"
#include "WorldCollision.h"
#include "HAL/ThreadSafeBool.h"
#include "Wwise/AkObstructionAndOcclusionService.h"

class WWISEOBSTRUCTIONOCCLUSION_API AkPortalObstructionAndOcclusionService : public AkObstructionAndOcclusionService
{
public:
	void Init(const AkPortalID InPortalID, UWorld* InWorld, float InRefreshInterval);
	
	virtual void SetObstructionAndOcclusion(const AkGameObjectID InListenerID, const float InValue) {}
	virtual void SetPortalObstruction(const AkPortalID InPortalID, const float InValue);

	virtual ~AkPortalObstructionAndOcclusionService() {}

private:
	AkPortalID AssociatedPortalID;
};
