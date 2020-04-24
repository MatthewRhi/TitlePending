#include "TitlePending.h"


class Card
{
	FName cardName;
	FString cardType;
	int32 cardSuccessValue;
	int32 cardPartialValue;
	int32 cardMissValue;

	public:void createCard (FName name, FString type, int32 successValue, int32 partialValue, int32 missValue)
	{
		cardName = name;
		cardType = type;
		cardSuccessValue = successValue;
		cardPartialValue = partialValue;
		cardMissValue = missValue;
	}

	public:FName getName()
	{
		return cardName;
	}

	public:FString getType()
	{
		return cardType;
	}

	public:int32 getSuccessValue()
	{
		return cardSuccessValue;
	}

	public:int32 getPartialValue()
	{
		return cardPartialValue;
	}

	public:int32 getMissValue()
	{
		return cardMissValue;
	}
};