// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageActorStatic.h"
#include "DamageActorStaticSparrowSP.generated.h"

/**
 * 
 */
UCLASS()
class PARAGONROYAL_API ADamageActorStaticSparrowSP : public ADamageActorStatic
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;

public:
	virtual float Damage(AActor* Who, float DeltaTime) override;

private:
	bool Disabled = false;
};
