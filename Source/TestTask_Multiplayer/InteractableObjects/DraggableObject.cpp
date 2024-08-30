// Fill out your copyright notice in the Description page of Project Settings.


#include "C:\Users\Julis\Documents\Unreal Projects\TestTask_Multiplayer\Source\TestTask_Multiplayer\InteractableObjects\DraggableObject.h"


// Sets default values
ADraggableObject::ADraggableObject()
{
	 // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DragMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
}

// Called when the game starts or when spawned
void ADraggableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADraggableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

