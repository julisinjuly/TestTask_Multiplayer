// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

UCLASS()
class TESTTASK_MULTIPLAYER_API AGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrid();

	virtual void Tick(float DeltaTime) override;







protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

private:
	int Grid[4][4]; 

	void CreateGrid(AActor* WorldActor, UStaticMesh* GridCellMesh, float GridSize, int32 NumCellsX, int32 NumCellsY);



};
