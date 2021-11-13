#pragma once
using namespace std;
#include "tinyxml2.h"

#include "../../skse64/src/skse64/skse64/BSModelDB.h"
#include "../../skse64/src/skse64/skse64/Colors.h"
#include "../../skse64/src/skse64/skse64/CustomMenu.h"
#include "../../skse64/src/skse64/skse64/GameAPI.h"
#include "../../skse64/src/skse64/skse64/GameBSExtraData.h"
#include "../../skse64/src/skse64/skse64/GameCamera.h"
#include "../../skse64/src/skse64/skse64/GameData.h"
#include "../../skse64/src/skse64/skse64/GameEvents.h"
#include "../../skse64/src/skse64/skse64/GameExtraData.h"
#include "../../skse64/src/skse64/skse64/GameFormComponents.h"
#include "../../skse64/src/skse64/skse64/GameForms.h"
#include "../../skse64/src/skse64/skse64/GameHandlers.h"
#include "../../skse64/src/skse64/skse64/GameInput.h"
#include "../../skse64/src/skse64/skse64/GameMenus.h"
#include "../../skse64/src/skse64/skse64/GameObjects.h"
#include "../../skse64/src/skse64/skse64/GamePathing.h"
#include "../../skse64/src/skse64/skse64/GameReferences.h"
#include "../../skse64/src/skse64/skse64/GameResources.h"
#include "../../skse64/src/skse64/skse64/GameRTTI.h"
#include "../../skse64/src/skse64/skse64/GameSettings.h"
#include "../../skse64/src/skse64/skse64/GameStreams.h"
#include "../../skse64/src/skse64/skse64/gamethreads.h"
#include "../../skse64/src/skse64/skse64/GameTypes.h"
#include "../../skse64/src/skse64/skse64/GameUtilities.h"
#include "../../skse64/src/skse64/skse64/GlobalLocks.h"
#include "../../skse64/src/skse64/skse64/HashUtil.h"
#include "../../skse64/src/skse64/skse64/Hooks_Camera.h"
#include "../../skse64/src/skse64/skse64/Hooks_Data.h"
#include "../../skse64/src/skse64/skse64/Hooks_Debug.h"
#include "../../skse64/src/skse64/skse64/Hooks_Diagnostics.h"
#include "../../skse64/src/skse64/skse64/Hooks_DirectInput8Create.h"
#include "../../skse64/src/skse64/skse64/Hooks_Event.h"
#include "../../skse64/src/skse64/skse64/Hooks_Gameplay.h"
#include "../../skse64/src/skse64/skse64/Hooks_Handlers.h"
#include "../../skse64/src/skse64/skse64/Hooks_Memory.h"
#include "../../skse64/src/skse64/skse64/Hooks_NetImmerse.h"
#include "../../skse64/src/skse64/skse64/Hooks_ObScript.h"
#include "../../skse64/src/skse64/skse64/Hooks_Papyrus.h"
#include "../../skse64/src/skse64/skse64/Hooks_SaveLoad.h"
#include "../../skse64/src/skse64/skse64/Hooks_Scaleform.h"
#include "../../skse64/src/skse64/skse64/Hooks_Threads.h"
#include "../../skse64/src/skse64/skse64/Hooks_UI.h"
#include "../../skse64/src/skse64/skse64/InputMap.h"
#include "../../skse64/src/skse64/skse64/InternalSerialization.h"
#include "../../skse64/src/skse64/skse64/InternalTasks.h"
#include "../../skse64/src/skse64/skse64/NiAdditionalGeometryData.h"
#include "../../skse64/src/skse64/skse64/NiControllers.h"
#include "../../skse64/src/skse64/skse64/NiExtraData.h"
#include "../../skse64/src/skse64/skse64/NiGeometry.h"
#include "../../skse64/src/skse64/skse64/NiInterpolators.h"
#include "../../skse64/src/skse64/skse64/NiLight.h"
#include "../../skse64/src/skse64/skse64/NiMaterial.h"
#include "../../skse64/src/skse64/skse64/NiNodes.h"
#include "../../skse64/src/skse64/skse64/NiObjects.h"
#include "../../skse64/src/skse64/skse64/NiProperties.h"
#include "../../skse64/src/skse64/skse64/NiRenderer.h"
#include "../../skse64/src/skse64/skse64/NiRTTI.h"
#include "../../skse64/src/skse64/skse64/NiSerialization.h"
#include "../../skse64/src/skse64/skse64/NiTextures.h"
#include "../../skse64/src/skse64/skse64/NiTypes.h"
#include "../../skse64/src/skse64/skse64/ObScript.h"
#include "../../skse64/src/skse64/skse64/PapyrusActiveMagicEffect.h"
#include "../../skse64/src/skse64/skse64/PapyrusActor.h"
#include "../../skse64/src/skse64/skse64/PapyrusActorBase.h"
#include "../../skse64/src/skse64/skse64/PapyrusActorValueInfo.h"
#include "../../skse64/src/skse64/skse64/PapyrusAlias.h"
#include "../../skse64/src/skse64/skse64/PapyrusAmmo.h"
#include "../../skse64/src/skse64/skse64/PapyrusArgs.h"
#include "../../skse64/src/skse64/skse64/PapyrusArmor.h"
#include "../../skse64/src/skse64/skse64/PapyrusArmorAddon.h"
#include "../../skse64/src/skse64/skse64/PapyrusArt.h"
#include "../../skse64/src/skse64/skse64/PapyrusBook.h"
#include "../../skse64/src/skse64/skse64/PapyrusCamera.h"
#include "../../skse64/src/skse64/skse64/PapyrusCell.h"
#include "../../skse64/src/skse64/skse64/PapyrusClass.h"
#include "../../skse64/src/skse64/skse64/PapyrusColorForm.h"
#include "../../skse64/src/skse64/skse64/PapyrusCombatStyle.h"
#include "../../skse64/src/skse64/skse64/PapyrusConstructibleObject.h"
#include "../../skse64/src/skse64/skse64/PapyrusDefaultObjectManager.h"
#include "../../skse64/src/skse64/skse64/PapyrusDelayFunctors.h"
#include "../../skse64/src/skse64/skse64/PapyrusEnchantment.h"
#include "../../skse64/src/skse64/skse64/PapyrusEquipSlot.h"
#include "../../skse64/src/skse64/skse64/PapyrusEventFunctor.h"
#include "../../skse64/src/skse64/skse64/PapyrusEvents.h"
#include "../../skse64/src/skse64/skse64/PapyrusFaction.h"
#include "../../skse64/src/skse64/skse64/PapyrusFlora.h"
#include "../../skse64/src/skse64/skse64/PapyrusForm.h"
#include "../../skse64/src/skse64/skse64/PapyrusFormList.h"
#include "../../skse64/src/skse64/skse64/PapyrusGame.h"
#include "../../skse64/src/skse64/skse64/PapyrusGameData.h"
#include "../../skse64/src/skse64/skse64/PapyrusHeadPart.h"
#include "../../skse64/src/skse64/skse64/PapyrusIngredient.h"
#include "../../skse64/src/skse64/skse64/PapyrusInput.h"
#include "../../skse64/src/skse64/skse64/PapyrusInterfaces.h"
#include "../../skse64/src/skse64/skse64/PapyrusKeyword.h"
#include "../../skse64/src/skse64/skse64/PapyrusLeveledActor.h"
#include "../../skse64/src/skse64/skse64/PapyrusLeveledItem.h"
#include "../../skse64/src/skse64/skse64/PapyrusLeveledSpell.h"
#include "../../skse64/src/skse64/skse64/PapyrusLocation.h"
#include "../../skse64/src/skse64/skse64/PapyrusMagicEffect.h"
#include "../../skse64/src/skse64/skse64/PapyrusMath.h"
#include "../../skse64/src/skse64/skse64/PapyrusMisc.h"
#include "../../skse64/src/skse64/skse64/PapyrusModEvent.h"
#include "../../skse64/src/skse64/skse64/PapyrusNativeFunctions.h"
#include "../../skse64/src/skse64/skse64/PapyrusNetImmerse.h"
#include "../../skse64/src/skse64/skse64/PapyrusObjectReference.h"
#include "../../skse64/src/skse64/skse64/PapyrusObjects.h"
#include "../../skse64/src/skse64/skse64/PapyrusPerk.h"
#include "../../skse64/src/skse64/skse64/PapyrusPotion.h"
#include "../../skse64/src/skse64/skse64/PapyrusQuest.h"
#include "../../skse64/src/skse64/skse64/PapyrusRace.h"
#include "../../skse64/src/skse64/skse64/PapyrusReferenceAlias.h"
#include "../../skse64/src/skse64/skse64/PapyrusScroll.h"
#include "../../skse64/src/skse64/skse64/PapyrusShout.h"
#include "../../skse64/src/skse64/skse64/PapyrusSKSE.h"
#include "../../skse64/src/skse64/skse64/PapyrusSound.h"
#include "../../skse64/src/skse64/skse64/PapyrusSoundDescriptor.h"
#include "../../skse64/src/skse64/skse64/PapyrusSpawnerTask.h"
#include "../../skse64/src/skse64/skse64/PapyrusSpell.h"
#include "../../skse64/src/skse64/skse64/PapyrusStringUtil.h"
#include "../../skse64/src/skse64/skse64/PapyrusTextureSet.h"
#include "../../skse64/src/skse64/skse64/PapyrusTree.h"
#include "../../skse64/src/skse64/skse64/PapyrusUI.h"
#include "../../skse64/src/skse64/skse64/PapyrusUICallback.h"
#include "../../skse64/src/skse64/skse64/PapyrusUtility.h"
#include "../../skse64/src/skse64/skse64/PapyrusValue.h"
#include "../../skse64/src/skse64/skse64/PapyrusVM.h"
#include "../../skse64/src/skse64/skse64/PapyrusWeapon.h"
#include "../../skse64/src/skse64/skse64/PapyrusWeather.h"
#include "../../skse64/src/skse64/skse64/PapyrusWornObject.h"
#include "../../skse64/src/skse64/skse64/PluginAPI.h"
#include "../../skse64/src/skse64/skse64/PluginManager.h"
#include "../../skse64/src/skse64/skse64/ScaleformAPI.h"
#include "../../skse64/src/skse64/skse64/ScaleformCallbacks.h"
#include "../../skse64/src/skse64/skse64/ScaleformExtendedData.h"
#include "../../skse64/src/skse64/skse64/ScaleformLoader.h"
#include "../../skse64/src/skse64/skse64/ScaleformMovie.h"
#include "../../skse64/src/skse64/skse64/ScaleformState.h"
#include "../../skse64/src/skse64/skse64/ScaleformTypes.h"
#include "../../skse64/src/skse64/skse64/ScaleformValue.h"
#include "../../skse64/src/skse64/skse64/ScaleformVM.h"
#include "../../skse64/src/skse64/skse64/Serialization.h"
#include "../../skse64/src/skse64/skse64/Translation.h"

#include "../../skse64/src/skse64/skse64_common/BranchTrampoline.h"
#include "../../skse64/src/skse64/skse64_common/Relocation.h"
#include "../../skse64/src/skse64/skse64_common/SafeWrite.h"
#include "../../skse64/src/skse64/skse64_common/skse_version.h"
#include "../../skse64/src/skse64/skse64_common/Utilities.h"

#include "../../skse64/src/common/IArchive.h"
#include "../../skse64/src/common/IBufferStream.h"
#include "../../skse64/src/common/IConsole.h"
#include "../../skse64/src/common/ICriticalSection.h"
#include "../../skse64/src/common/IDatabase.h"
#include "../../skse64/src/common/IDataStream.h"
#include "../../skse64/src/common/IDebugLog.h"
#include "../../skse64/src/common/IDirectoryIterator.h"
#include "../../skse64/src/common/IDynamicCreate.h"
#include "../../skse64/src/common/IErrors.h"
#include "../../skse64/src/common/IEvent.h"
#include "../../skse64/src/common/IFIFO.h"
#include "../../skse64/src/common/IFileStream.h"
#include "../../skse64/src/common/IInterlockedLong.h"
#include "../../skse64/src/common/ILinkedList.h"
#include "../../skse64/src/common/IMemPool.h"
#include "../../skse64/src/common/IMutex.h"
#include "../../skse64/src/common/IPipeClient.h"
#include "../../skse64/src/common/IPipeServer.h"
#include "../../skse64/src/common/IPrefix.h"
#include "../../skse64/src/common/IRangeMap.h"
#include "../../skse64/src/common/IReadWriteLock.h"
#include "../../skse64/src/common/ISegmentStream.h"
#include "../../skse64/src/common/ISingleton.h"
#include "../../skse64/src/common/ITextParser.h"
#include "../../skse64/src/common/IThread.h"
#include "../../skse64/src/common/ITimer.h"
#include "../../skse64/src/common/ITypes.h"
#include "../../skse64/src/skse64/xbyak/xbyak.h"
#include "../../skse64/src/skse64/xbyak/xbyak_util.h"
#include "../../skse64/src/skse64/xbyak/xbyak_bin2hex.h"
#include "../../skse64/src/skse64/xbyak/xbyak_mnemonic.h"


#include <locale>
#include <string>
#include <iostream>
#include <sapi.h>
#include <sphelper.h>
#include <thread>
#include <iostream>
#include <atlbase.h>
#include <atlconv.h>
#include <stdlib.h>
#include <time.h>
#include <WinBase.h>
#include <atlstr.h>
#include <string>
#include <regex>
#include <locale>
#include <codecvt>
#include <ctime>

#include "SME_Prefix.h"
#include "INIManager.h"
#include "StringHelpers.h"
#include "MemoryHandler.h"
#include "MiscGunk.h"

#include <thread>
#include <chrono>
#include <string>



extern IDebugLog						gLog;

namespace interfaces
{
	extern PluginHandle					kPluginHandle;
	extern SKSEMessagingInterface*		kMsgInterface;
}


extern SME::INI::INISetting				kWordsPerSecondSilence;
extern SME::INI::INISetting				kSkipEmptyResponses;
extern SME::INI::INISetting				kMsPerWordSilence;
extern SME::INI::INISetting				kPlayPlayerDialogue;
extern SME::INI::INISetting				kPlayNPCDialogue;
extern SME::INI::INISetting				kPlayBookPages;
extern SME::INI::INISetting				kPlayLoadingScreenText;
extern SME::INI::INISetting				kVoicePlayerActions;

extern SME::INI::INISetting				kSpeakParentheses;
extern SME::INI::INISetting				kEnableHotKeys;

extern SME::INI::INISetting				kUseXMLOverrides;

extern SME::INI::INISetting				kPlayerLanguage;
extern SME::INI::INISetting				kFemaleLanguage;
extern SME::INI::INISetting				kMaleLanguage;
extern SME::INI::INISetting				kNarratorLanguage;

extern SME::INI::INISetting				kPlayerVoiceRate;
extern SME::INI::INISetting				kFemaleVoiceRate;
extern SME::INI::INISetting				kMaleVoiceRate;
extern SME::INI::INISetting				kNarratorVoiceRate;

extern SME::INI::INISetting				kPlayerVoiceVolume;
extern SME::INI::INISetting				kFemaleVoiceVolume;
extern SME::INI::INISetting				kMaleVoiceVolume;
extern SME::INI::INISetting				kNarratorVoiceVolume;

extern SME::INI::INISetting				kPlayerVoicePitch;
extern SME::INI::INISetting				kFemaleVoicePitch;
extern SME::INI::INISetting				kMaleVoicePitch;
extern SME::INI::INISetting				kNarratorVoicePitch;

#define MAKE_RVA(addr)		addr - 0x140000000i64

class FuzRoBorkINIManager : public SME::INI::INIManager
{
public:
	void								Initialize(const char* INIPath, void* Paramenter) override;

	static FuzRoBorkINIManager			Instance;
};

class SubtitleHasher
{
	static const double					kPurgeInterval;		// in ms

	using HashT = unsigned long;
	using HashListT = std::list<HashT>;

	mutable ICriticalSection			Lock;
	HashListT							Store;
	SME::MiscGunk::ElapsedTimeCounter	TickCounter;
	double								TickReminder;

	static HashT						CalculateHash(const char* String);

	void								Purge(void);
public:
	SubtitleHasher() : Lock(), Store(), TickCounter(), TickReminder(kPurgeInterval) {}

	void								Add(const char* Subtitle);
	bool								HasMatch(const char* Subtitle);
	void								Tick(void);

	static SubtitleHasher				Instance;
};

// 20
class BSIStream
{
public:
	MEMBER_FN_PREFIX(BSIStream);
	DEFINE_MEMBER_FN(Ctor, BSIStream*, MAKE_RVA(0x0000000140D47C00), const char* FilePath, void* ParentLocation);

	// members
	///*00*/ void**					vtbl;
	/*08*/ BSTSmartPointer<void>	unk04;		// actual file stream
	/*10*/ UInt8					valid;		// set to 1 if the stream's valid
	/*11*/ UInt8					pad09[7];
	/*18*/ StringCache::Ref			filePath;	// relative to the Data directory when no BSResource::Location's passed to the ctor (the game uses a static instance)
												// otherwise, use its location

	virtual void*					Dtor(bool FreeMemory = true);

	static BSIStream*				CreateInstance(const char* FilePath, void* ParentLocation = nullptr);		// BSResource::Location* ParentLocation
};

// 10
template <typename NodeT>
class BSSimpleList
{
public:
	template <typename NodeT>
	struct ListNode
	{
		// members
		/*00*/ NodeT*					Data;
		/*08*/ ListNode<NodeT>*			Next;
	};

	// members
	/*00*/ ListNode<NodeT>				Head;
};

// arbitrary name, final cache that gets passed to the dialog playback subsystem
// 40
class CachedResponseData
{
public:
	// members
	/*00*/ BSString					responseText;
	/*10*/ UInt32					emotionType;
	/*14*/ UInt32					emotionLevel;
	/*18*/ StringCache::Ref			voiceFilePath;		// relative path to the voice file
	/*20*/ UInt64					unk20;				// speaker idle anim?
	/*28*/ UInt64					unk28;				// listener idle anim?
	/*30*/ UInt64					unk30;
	/*38*/ UInt8					useEmotionAnim;
	/*39*/ UInt8					hasLipFile;
	/*3A*/ UInt8					pad22[6];
};

// arbitrary name, used to queue subtitles for gamemode conversations (outside the standard dialog menu; NPC-NPC or NPC-PC)
// 20
class NPCChatterData
{
public:
	// members
	/*00*/ UInt32					speaker;				// the BSHandleRefObject handle to the speaker
	/*08*/ BSString					title;
	/*18*/ float					subtitleDistance;		// init to float::MAX
	/*1C*/ UInt8					forceSubtitles;
	/*1D*/ UInt8					pad11[3];
};

class PlayerDialogData;

using CachedResponseListT = BSSimpleList<CachedResponseData>;
using PlayerTopicListT = BSSimpleList<PlayerDialogData>;
using DialogBranchArrayT = tArray<BGSDialogueBranch>;
using TopicArrayT = tArray<TESTopic>;

// arbitrary name, the actual class is probably a member of MenuTopicManager and not limited to the player
// 58
class PlayerDialogData
{
public:
	// members
	/*00*/ BSString					title;
	/*10*/ UInt8					unk08;
	/*11*/ UInt8					unk09;
	/*12*/ UInt8					unk0A;
	/*13*/ UInt8					pad0B[5];
	/*18*/ CachedResponseListT		responses;
	/*28*/ TESQuest*				parentQuest;
	/*30*/ TESTopicInfo*			parentTopicInfo;
	/*38*/ TESTopic*				parentTopic;
	/*40*/ CachedResponseListT*		unk20;				// seen pointing to this::unk0C
	/*48*/ UInt8					unk24;
	/*49*/ UInt8					pad25;
	/*4A*/ UInt8					unk26;
	/*4B*/ UInt8					pad27[5];
	/*50*/ TESTopic*				unk28;				// seen caching parentTopic
};

namespace override
{
	// E0
	class MenuTopicManager
	{
	public:
		// members
		///*00*/ void**					vtbl;
		/*08*/ BSTEventSink<void*>		unk04;					// BSTEventSink<PositionPlayerEvent>
		/*10*/ UInt64					unk08;
		/*18*/ PlayerTopicListT*		selectedResponseNode;	// points to the ListNode that refers to the PlayerDialogData instance of the selected topicinfo
		/*20*/ PlayerTopicListT*		availableResponses;
		/*28*/ TESTopicInfo*			unk14;
		/*30*/ TESTopicInfo*			rootTopicInfo;
		/*38*/ PlayerDialogData*		lastSelectedResponse;
		/*40*/ CRITICAL_SECTION			topicManagerCS;
		/*68*/ UInt32					speaker;				// a BSHandleRefObject handle to the speaker
		/*6C*/ UInt32					refHandle3C;			// same as above
		/*70*/ UInt64					unk40;
		/*78*/ UInt64					unk44;
		/*80*/ DialogBranchArrayT		unk48;
		/*98*/ DialogBranchArrayT		unk54;
		/*B0*/ UInt8					unk60;
		/*B1*/ UInt8					unk61;
		/*B2*/ UInt8					unk62;
		/*B3*/ UInt8					unk63;
		/*B4*/ UInt8					unk64;
		/*B5*/ UInt8					unk65;
		/*B6*/ UInt8					unk66;
		/*B7*/ UInt8					unk67;
		/*B8*/ UInt8					unk68;
		/*B9*/ UInt8					unk69;
		/*BA*/ UInt8					unk6A;					// init to 1
		/*BB*/ UInt8					unk6B;
		/*C0*/ TopicArrayT				unk6C;
		/*D8*/ UInt64					unkD8;

		// methods
		virtual void*					Dtor(bool FreeMemory = true);

		static MenuTopicManager*		GetSingleton(void);
	};
}

std::string			MakeSillyName();
bool				CanShowDialogSubtitles();
bool				CanShowGeneralSubtitles();

//TTS Additions

namespace FuzRoBorkNamespace {

	class SpeakObj
	{
	public:
		SpeakObj(std::string _speech, std::string _lang, float _rate, float _vol, int _pitch);
		std::string speech;
		std::string lang;
		float rate;
		float vol;
		int pitch;
	};

	class NPCObj
	{
	public:
		NPCObj(string _name, string _race, string _lang, float _rate, float _vol, int _pitch);
		string name;
		string race;
		string lang;
		float rate;
		float vol;
		int pitch;
	};

	void startBookSpeech(string text);
	void startNPCSpeech(string a);
	void startPlayerSpeech(const char * _title);

	boolean isSpeaking();
	void stopSpeaking(void);

	void speakLoadingScreen(string text);

	bool RegisterFuncs(VMClassRegistry* registry);

	void sendLanguages(StaticFunctionTag* t, VMArray<BSFixedString> names);
}