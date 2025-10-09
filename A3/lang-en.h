#ifndef LANG_EN
#define LANG_EN

#include <string>

using std::string;

const string FARE_HEADER_DESCRIPTION = "Fare Description";
const string FARE_HEADER_TICKET_USD = "Ticket $";

const string FARE_SPACER_DESCRIPTION = "--------------------------------------";
const string FARE_SPACER_TICKET = "--------";

const string FARE_VEHICLE_WITH_DRIVER_DESCRIPTION = "Vehicle Under 14' (less than 168\") & Driver";
const string FARE_ADULT_DESCRIPTION = "Adult (age 19 - 64)";
const string FARE_SENIOR_DESCRIPTION = "Senior (age 65 & over) / Disability";
const string FARE_YOUTH_DESCRIPTION = "Youth (age 6 - 18)";
const string FARE_BIKE_DESCRIPTION = "Bicycle Surcharge (included with Vehicle)";

const string MESSAGE_WELCOME = "Welcome to the Washington State Ferries Fare Calculator!";
const string MESSAGE_THANK_YOU = "Thank you for using Washington State Ferries Fare Calculator!";

const string PROMPT_VEHICLE_YES_NO = "Are you riding a vehicle on the Ferry (Y/N): ";
const string PROMPT_ADULTS_COUNT = "How many adults? ";
const string PROMPT_SENIORS_COUNT = "How many seniors? ";
const string PROMPT_YOUTHS_COUNT = "How many youths? ";
const string PROMPT_BIKES_COUNT = "How many bikes? ";

const string LABEL_CHARGE_USD = "Your total charge is $";

const string MESSAGE_EARN_FREE_TRIP_1 = "If you spend $";
const string MESSAGE_EARN_FREE_TRIP_2 = " more, you are eligible for a free adult ticket for the next trip.";
const string MESSAGE_CONGRATULATIONS_FREE_TICKET = "Congratulations you earn 1 FREE TICKET!";
const string ERROR_INVALID_INPUT = "Error!! Invalid answer!! Please try again later!!!";

const string MESSAGE_MAX_PASSENGERS_EXCEEDED = "Uh oh!! Too many people in your group. Split into 2 groups and try again!";

#endif