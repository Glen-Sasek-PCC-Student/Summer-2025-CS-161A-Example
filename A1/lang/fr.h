#ifndef FR_H
#define FR_H

#include <string>

using std::string;

const string MESSAGE_WELCOME = "Bienvenue dans mon programme de paie hebdomadaire !";
const string MESSAGE_PAYROLL_SUMMARY = "Votre résumé de paie :";
const string MESSAGE_GOODBYE = "Merci d'avoir utilisé mon programme de paie hebdomadaire !";

const string PROMPT_EMPLOYEE_ID = "Entrez votre numéro d'identification d'employé (chiffres uniquement) : ";
const string PROMPT_HOURS_WORKED = "Entrez le nombre d'heures travaillées (nombres entiers) : ";
const string PROMPT_HOURLY_RATE = "Entrez le taux horaire : ";
const string PROMPT_FEDERAL_WITHOLDING_RATE = "Entrez le taux de retenue fédérale : ";

const string LABEL_GROSS_PAY = "Salaire brut total : $";
const string LABEL_FEDERAL_TAX_WITHOLDING = "Retenue d'impôt fédéral : $";
const string LABEL_NET_PAY = "Salaire net : $";

#endif
