// Fill out your copyright notice in the Description page of Project Settings.


#include "BoneSpawns.h"

// Sets default values
ABoneSpawns::ABoneSpawns()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoneSpawns::BeginPlay()
{
	Super::BeginPlay();
	bool* mybool = new bool;
	
}

// Called every frame
void ABoneSpawns::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

