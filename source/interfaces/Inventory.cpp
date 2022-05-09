#include "Inventory.hpp"


#if defined(_stick_steam_emu_interface_inventory_)


#	include "../common.hpp"


namespace emu {


	EResult Inventory::GetResultStatus(SteamInventoryResult_t resultHandle) {
		TRACE_FUNCTION_CALL();
		return k_EResultFail;
	}

	bool Inventory::GetResultItems(SteamInventoryResult_t resultHandle,
	                               SteamItemDetails_t *pOutItemsArray,
	                               uint32 *punOutItemsArraySize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GetResultItemProperty(SteamInventoryResult_t resultHandle,
	                                      uint32 unItemIndex,
	                                      const char *pchPropertyName,
	                                      char *pchValueBuffer,
	                                      uint32 *punValueBufferSizeOut) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint32 Inventory::GetResultTimestamp(SteamInventoryResult_t resultHandle) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool Inventory::CheckResultSteamID(SteamInventoryResult_t resultHandle,
	                                   CSteamID steamIDExpected) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Inventory::DestroyResult(SteamInventoryResult_t resultHandle) { }

	bool Inventory::GetAllItems(SteamInventoryResult_t *pResultHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GetItemsByID(SteamInventoryResult_t *pResultHandle,
	                             const SteamItemInstanceID_t *pInstanceIDs,
	                             uint32 unCountInstanceIDs) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::SerializeResult(SteamInventoryResult_t resultHandle,
	                                void *pOutBuffer,
	                                uint32 *punOutBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::DeserializeResult(SteamInventoryResult_t *pOutResultHandle,
	                                  const void *pBuffer, uint32 unBufferSize,
	                                  bool bRESERVED_MUST_BE_FALSE) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GenerateItems(SteamInventoryResult_t *pResultHandle,
	                              const SteamItemDef_t *pArrayItemDefs,
	                              const uint32 *punArrayQuantity,
	                              uint32 unArrayLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GrantPromoItems(SteamInventoryResult_t *pResultHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::AddPromoItem(SteamInventoryResult_t *pResultHandle,
	                             SteamItemDef_t itemDef) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::AddPromoItems(SteamInventoryResult_t *pResultHandle,
	                              const SteamItemDef_t *pArrayItemDefs,
	                              uint32 unArrayLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::ConsumeItem(SteamInventoryResult_t *pResultHandle,
	                            SteamItemInstanceID_t itemConsume,
	                            uint32 unQuantity) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::ExchangeItems(SteamInventoryResult_t *pResultHandle,
	                              const SteamItemDef_t *pArrayGenerate,
	                              const uint32 *punArrayGenerateQuantity,
	                              uint32 unArrayGenerateLength,
	                              const SteamItemInstanceID_t *pArrayDestroy,
	                              const uint32 *punArrayDestroyQuantity,
	                              uint32 unArrayDestroyLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::TransferItemQuantity(SteamInventoryResult_t *pResultHandle,
	                                     SteamItemInstanceID_t itemIdSource,
	                                     uint32 unQuantity,
	                                     SteamItemInstanceID_t itemIdDest) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Inventory::SendItemDropHeartbeat() {
		TRACE_FUNCTION_CALL();
	}

	bool Inventory::TriggerItemDrop(SteamInventoryResult_t *pResultHandle,
	                                SteamItemDef_t dropListDefinition) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::TradeItems(SteamInventoryResult_t *pResultHandle,
	                           CSteamID steamIDTradePartner,
	                           const SteamItemInstanceID_t *pArrayGive,
	                           const uint32 *pArrayGiveQuantity,
	                           uint32 nArrayGiveLength,
	                           const SteamItemInstanceID_t *pArrayGet,
	                           const uint32 *pArrayGetQuantity,
	                           uint32 nArrayGetLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::LoadItemDefinitions() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs,
	                                     uint32 *punItemDefIDsArraySize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GetItemDefinitionProperty(SteamItemDef_t iDefinition,
	                                          const char *pchPropertyName,
	                                          char *pchValueBuffer,
	                                          uint32 *punValueBufferSizeOut) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t
	Inventory::RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Inventory::GetEligiblePromoItemDefinitionIDs(
	    CSteamID steamID, SteamItemDef_t *pItemDefIDs,
	    uint32 *punItemDefIDsArraySize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t
	Inventory::StartPurchase(const SteamItemDef_t *pArrayItemDefs,
	                         const uint32 *punArrayQuantity,
	                         uint32 unArrayLength) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t Inventory::RequestPrices() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	uint32 Inventory::GetNumItemsWithPrices() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool Inventory::GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs,
	                                   uint64 *pCurrentPrices,
	                                   uint64 *pBasePrices,
	                                   uint32 unArrayLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::GetItemPrice(SteamItemDef_t iDefinition,
	                             uint64 *pCurrentPrice, uint64 *pBasePrice) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamInventoryUpdateHandle_t Inventory::StartUpdateProperties() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Inventory::RemoveProperty(SteamInventoryUpdateHandle_t handle,
	                               SteamItemInstanceID_t nItemID,
	                               const char *pchPropertyName) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::SetProperty(SteamInventoryUpdateHandle_t handle,
	                            SteamItemInstanceID_t nItemID,
	                            const char *pchPropertyName,
	                            const char *pchPropertyValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::SetProperty(SteamInventoryUpdateHandle_t handle,
	                            SteamItemInstanceID_t nItemID,
	                            const char *pchPropertyName, bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::SetProperty(SteamInventoryUpdateHandle_t handle,
	                            SteamItemInstanceID_t nItemID,
	                            const char *pchPropertyName, int64 nValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::SetProperty(SteamInventoryUpdateHandle_t handle,
	                            SteamItemInstanceID_t nItemID,
	                            const char *pchPropertyName, float flValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool
	Inventory::SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle,
	                                  SteamInventoryResult_t *pResultHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Inventory::InspectItem(SteamInventoryResult_t *pResultHandle,
	                            const char *pchItemToken) {
		TRACE_FUNCTION_CALL();
		return false;
	}



}   // namespace emu


#endif   //_stick_steam_emu_interface_inventory_
