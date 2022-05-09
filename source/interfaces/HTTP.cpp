#include "HTTP.hpp"


#if defined(_stick_steam_emu_interface_http_)


#	include "../common.hpp"


namespace emu {


	HTTPRequestHandle HTTP::CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod,
	                                          const char *pchAbsoluteURL) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool HTTP::SetHTTPRequestContextValue(HTTPRequestHandle hRequest,
	                                      uint64 ulContextValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest,
	                                                uint32 unTimeoutSeconds) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest,
	                                     const char *pchHeaderName,
	                                     const char *pchHeaderValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest,
	                                            const char *pchParamName,
	                                            const char *pchParamValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SendHTTPRequest(HTTPRequestHandle hRequest,
	                           SteamAPICall_t *pCallHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest,
	                                            SteamAPICall_t *pCallHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::DeferHTTPRequest(HTTPRequestHandle hRequest) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::PrioritizeHTTPRequest(HTTPRequestHandle hRequest) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest,
	                                     const char *pchHeaderName,
	                                     uint32 *unResponseHeaderSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest,
	                                      const char *pchHeaderName,
	                                      uint8 *pHeaderValueBuffer,
	                                      uint32 unBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPResponseBodySize(HTTPRequestHandle hRequest,
	                                   uint32 *unBodySize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPResponseBodyData(HTTPRequestHandle hRequest,
	                                   uint8 *pBodyDataBuffer,
	                                   uint32 unBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest,
	                                            uint32 cOffset,
	                                            uint8 *pBodyDataBuffer,
	                                            uint32 unBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::ReleaseHTTPRequest(HTTPRequestHandle hRequest) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest,
	                                      float *pflPercentOut) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest,
	                                     const char *pchContentType,
	                                     uint8 *pubBody, uint32 unBodyLen) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	HTTPCookieContainerHandle
	HTTP::CreateCookieContainer(bool bAllowResponsesToModify) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool
	HTTP::ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetCookie(HTTPCookieContainerHandle hCookieContainer,
	                     const char *pchHost, const char *pchUrl,
	                     const char *pchCookie) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestCookieContainer(
	    HTTPRequestHandle hRequest,
	    HTTPCookieContainerHandle hCookieContainer) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest,
	                                       const char *pchUserAgentInfo) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestRequiresVerifiedCertificate(
	    HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest,
	                                           uint32 unMilliseconds) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool HTTP::GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest,
	                                     bool *pbWasTimedOut) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_http_
