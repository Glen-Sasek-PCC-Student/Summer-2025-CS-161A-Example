#ifndef LANG_ES
#define LANG_ES

#include <string>

using std::string;

const string FARE_HEADER_DESCRIPTION = "Descripción de la tarifa";
const string FARE_HEADER_TICKET_USD = "Boleto $";

const string FARE_SPACER_DESCRIPTION = "--------------------------------------";
const string FARE_SPACER_TICKET = "--------";

const string FARE_VEHICLE_WITH_DRIVER_DESCRIPTION = "Vehículo de menos de 14' (menos de 168\") y conductor";
const string FARE_ADULT_DESCRIPTION = "Adulto (edad 19 - 64)";
const string FARE_SENIOR_DESCRIPTION = "Persona mayor (65 años o más) / Discapacidad";
const string FARE_YOUTH_DESCRIPTION = "Joven (edad 6 - 18)";
const string FARE_BIKE_DESCRIPTION = "Recargo por bicicleta (incluido con el vehículo)";

const string MESSAGE_WELCOME = "¡Bienvenido al Calculador de Tarifas de los Transbordadores del Estado de Washington!";
const string MESSAGE_THANK_YOU = "¡Gracias por usar el Calculador de Tarifas de los Transbordadores del Estado de Washington!";

const string PROMPT_VEHICLE_YES_NO = "¿Viaja con un vehículo en el ferry (S/N)?: ";
const string PROMPT_ADULTS_COUNT = "¿Cuántos adultos? ";
const string PROMPT_SENIORS_COUNT = "¿Cuántos mayores? ";
const string PROMPT_YOUTHS_COUNT = "¿Cuántos jóvenes? ";
const string PROMPT_BIKES_COUNT = "¿Cuántas bicicletas? ";

const string LABEL_CHARGE_USD = "Su cargo total es $";

const string MESSAGE_EARN_FREE_TRIP_1 = "Si gasta $";
const string MESSAGE_EARN_FREE_TRIP_2 = " más, puede obtener un boleto de adulto gratis para el próximo viaje.";
const string MESSAGE_CONGRATULATIONS_FREE_TICKET = "¡Felicidades! ¡Ha ganado 1 BOLETO GRATIS!";
const string ERROR_INVALID_INPUT = "¡Error! ¡Respuesta no válida! ¡Por favor, inténtelo de nuevo más tarde!";

const string MESSAGE_MAX_PASSENGERS_EXCEEDED = "¡Ups! Demasiadas personas en su grupo. ¡Divídalo en 2 grupos e inténtelo nuevamente!";

#endif
