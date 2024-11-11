// Fill out your copyright notice in the Description page of Project Settings.


#include "Prueba.h"
#include "Engine/Engine.h"



#ifdef __EMSCRIPTEN__
#include "emscripten/emscripten.h"
//#include "emscripten/bind.h"
#endif

//#include "emscripten/emscripten.h"


// Sets default values
APrueba::APrueba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrueba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrueba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//static void ReceiveJSON(const FString & JsonString)
//{
//	//APrueba::JsonData = JsonString;
//
//}
//
//#ifdef __EMSCRIPTEN__
//// Vincular la función de recepción JSON
//EMSCRIPTEN_BINDINGS(my_module) {
//	emscripten::function("ReceiveJSON", &ReceiveJSON);
//};
//
//#endif

void APrueba::ejecutarJavascript()
{
	
#ifdef __EMSCRIPTEN__


	emscripten_run_script(R"(
        (async () => {
            console.log('Hello Emscripten C++ JavaScript httpRequest');
            var apiURL = 'https://rickandmortyapi.com/api/character';

            try {
                const response = await fetch(apiURL);
                const characters = await response.json();
                console.log(characters);
                alert('The process to fetch the characters has finished successfully');

                // Convertir el JSON a una cadena y llamar a la función C++
                const jsonString = JSON.stringify(characters);
                Module.ccall('ReceiveJSON', null, ['string'], [jsonString]);
            } catch (error) {
                console.error('Error:', error);
                alert('An error occurred while trying to fetch the characters');
            }
        })();
    )");

#endif

}










//async function GetCharacters()
//{
//	try
//	{
//		const response = await fetch(apiURL);
//		const characters = await response.json();
//		console.log(characters);
//		alert('Tendria terminar el proceso para buscar los characters');

//		// Aquí podrías usar ccall o cwrap para pasar los datos de vuelta a C++
//	}
//	catch (error) 
//	{
//		console.error('Error:', error);
//		alert('Tendria terminar el proceso para buscar los characters');
//		
//	}
//}
