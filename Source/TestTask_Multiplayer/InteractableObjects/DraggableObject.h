// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DraggableObject.generated.h"

UCLASS()
class TESTTASK_MULTIPLAYER_API ADraggableObject : public AActor
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* DragMesh;

	UPROPERTY(EditInstanceOnly, Category = "Drag Properties")
	bool bIsDraggable = true; 

	
	ADraggableObject();

	//functions
	//─── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.───
	virtual void Tick(float DeltaTime) override;



	//properties
	//─── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.────── · 。ﾟ☆ : *.☽ .* : ☆ﾟ.───
	bool bIsCurrentlyAttached = false; 


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
