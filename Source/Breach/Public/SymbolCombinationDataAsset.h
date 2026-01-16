// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SymbolEffect.h"
#include "SymbolCombinationDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BREACH_API USymbolCombinationDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
	TArray<USymbolEffect*> Effects;
};
