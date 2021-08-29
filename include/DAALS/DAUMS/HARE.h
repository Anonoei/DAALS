#pragma once

namespace DAALS::DAUMS
{
	class HARE
	{
	public:
		HARE() {}
		~HARE() {}

		//	Runtime

		//	Getters
		_Characteristics& GetCharacteristicsStruct() { return this->Characteristics; }
		_Characteristics::_Health& GetHealthStruct() { return this->Characteristics.Health; }
		uint64_t               GetMaxHealth()   { return this->Characteristics.Health.MaxHealth; }
		uint64_t               GetHealth()      { return this->Characteristics.Health.Health; }
		float                  GetMaxBlood()    { return this->Characteristics.Health.MaxBlood; }
		float                  GetBlood()       { return this->Characteristics.Health.Blood; }
		_Characteristics::_Hunger& GetHungerStruct() { return this->Characteristics.Hunger; }
		uint16_t               GetHunger()      { return this->Characteristics.Hunger.Hunger; }
		uint16_t               GetSaturation()  { return this->Characteristics.Hunger.Saturation; }
		float                  GetMaxCalories() { return this->Characteristics.Hunger.MaxCalories; }
		float                  GetCalories()    { return this->Characteristics.Hunger.Calories; }
		_Characteristics::_Mental& GetMentalStruct() { return this->Characteristics.Mental; }
		_Characteristics::_Mental::_SelfActualization& GetSelfStruct()          { return this->Characteristics.Mental.Self; }
		_Characteristics::_Mental::_Esteem&            GetEsteemStruct()        { return this->Characteristics.Mental.Esteem; }
		_Characteristics::_Mental::_Belonging&         GetBelongingStruct()     { return this->Characteristics.Mental.Belonging; }
		_Characteristics::_Mental::_Safety&            GetSafetyStruct()        { return this->Characteristics.Mental.Safety; }
		_Characteristics::_Mental::_Physiological&     GetPhysiologicalStruct() { return this->Characteristics.Mental.Physiological; }

		//	Setters
	
	private:
		struct _Characteristics
		{
			struct _Health
			{
				uint64_t MaxHealth;
				uint64_t Health;

				float MaxBlood;
				float Blood;

				struct _Body
				{
					struct _Head
					{
						float health = 1.0f;
					} Head;
					struct _Torso
					{
						float health = 1.0f;
					} Torso;
					struct _Extremities
					{
						int TotalCount = 4;		//	Total number
						int TotalFilangees = 20;	//	Total number

						struct _Arms
						{
							int Count = 2;
							int Joints = 1;
							float Health = 1.0f;

							struct _Hands
							{
								int Filangees = 5;
								float Health = 1.0f;
							};
						} Arms;
						struct _Legs
						{
							int Count = 2;
							int Joints = 1;
							float Health = 1.0f;	//	This can be multiplied by movement speed

							struct _Feet
							{
								int Filangees = 5;
								float Health = 1.0f;
							};
						} Legs;

					} Extremities;
				} Body;
			} Health;

			struct _Hunger
			{
				uint16_t Hunger;
				uint16_t Saturation;

				float MaxCalories;
				float Calories;
			} Hunger;

			struct _Mental
			{
				enum struct Level
				{
					Exemplary = 0,
					Satisfactory = 1,
					Undetermined = 2,
					Unsatisfactory = 3
				};

				//  Self-fulfillment  //
				struct _SelfActualization
				{
					_Mental::Level Met = Level::Satisfactory;	//	Needs Met
				} Self;

				//  Psychological Needs  //
				struct _Esteem
				{
					_Mental::Level Met = Level::Satisfactory;	//	Needs Met

					_Mental::Level Respect = Level::Satisfactory;
					_Mental::Level Self = Level::Satisfactory;
					_Mental::Level Status = Level::Satisfactory;
					_Mental::Level Recognition = Level::Satisfactory;
					_Mental::Level Strength = Level::Satisfactory;
					_Mental::Level Freedom = Level::Satisfactory;
				} Esteem;

				struct _Belonging
				{
					_Mental::Level Met = Level::Satisfactory;	//	Needs Met

					_Mental::Level Friendship = Level::Satisfactory;
					_Mental::Level Intimacy = Level::Satisfactory;
					_Mental::Level Family = Level::Satisfactory;
					_Mental::Level Connection = Level::Satisfactory;
				} Belonging;

				//  Basic needs  //
				struct _Safety
				{
					_Mental::Level Met = Level::Satisfactory;	//	Needs Met

					_Mental::Level Personal = Level::Satisfactory;
					_Mental::Level Employment = Level::Satisfactory;
					_Mental::Level Resources = Level::Satisfactory;
					_Mental::Level Health = Level::Satisfactory;
					_Mental::Level Property = Level::Satisfactory;
				} Safety;

				struct _Physiological
				{
					_Mental::Level Met = Level::Satisfactory;	//	Needs Met

					_Mental::Level Air = Level::Satisfactory;
					_Mental::Level Water = Level::Satisfactory;
					_Mental::Level Food = Level::Satisfactory;
					_Mental::Level Shelter = Level::Satisfactory;
					_Mental::Level Sleep = Level::Satisfactory;
					_Mental::Level Clothing = Level::Satisfactory;
					_Mental::Level Reproduction = Level::Satisfactory;
				} Physiological;

			} Mental;

		} Characteristics;
	};

}	//	END namespace DAALS::DAUMS
