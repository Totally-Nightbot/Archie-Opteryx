// Fill out your copyright notice in the Description page of Project Settings.


#include "Tutorial_character.h"
#include "Camera\CameraComponent.h"

// Sets default values (called when unreal opens) 
ATutorial_character::ATutorial_character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	camera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned (game or objects starts)
void ATutorial_character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATutorial_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input (To bind a function to an input) 
void ATutorial_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

}

