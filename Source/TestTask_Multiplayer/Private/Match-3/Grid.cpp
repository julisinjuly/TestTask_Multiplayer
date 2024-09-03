// Fill out your copyright notice in the Description page of Project Settings.


#include "Match-3/Grid.h"

// Sets default values
AGrid::AGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGrid::CreateGrid(AActor* WorldActor, UStaticMesh* GridCellMesh, float GridSize, int32 NumCellsX, int32 NumCellsY)
{

	float CellSize = GridSize / NumCellsX; 

	for (int i = 0; i < NumCellsX; i++)
	{
		for (int j = 0; j < NumCellsY; j++)
		{
			UStaticMeshComponent* GridCell = NewObject<UStaticMeshComponent>(WorldActor, UStaticMeshComponent::StaticClass()); 
			GridCell->SetStaticMesh(GridCellMesh);
			GridCell->AttachToComponent(WorldActor->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform); 
			GridCell->SetRelativeLocation(FVector(GridSize * i, GridSize * j, 0.0f)); 
			GridCell->RegisterComponent();
		
		
		
		}
		
	}



}

// Called every frame
void AGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

