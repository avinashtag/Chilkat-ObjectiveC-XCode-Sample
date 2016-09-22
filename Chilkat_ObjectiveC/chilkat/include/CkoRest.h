// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.59

// Generic/internal class name =  Rest
// Wrapped Chilkat C++ class name =  CkRest

@class CkoTask;
@class CkoStream;
@class CkoUrl;
@class CkoAuthAws;
@class CkoAuthAzureAD;
@class CkoAuthAzureStorage;
@class CkoAuthGoogle;
@class CkoOAuth1;
@class CkoOAuth2;
@class CkoSocket;


@class CkoBaseProgress;

@interface CkoRest : NSObject {

	@private
		void *m_eventCallback;
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj;

@property (nonatomic) BOOL AllowHeaderQB;
@property (nonatomic, copy) NSString *Authorization;
@property (nonatomic, readonly, copy) NSNumber *ConnectFailReason;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, copy) NSString *Host;
@property (nonatomic, copy) NSNumber *IdleTimeoutMs;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSString *LastRequestHeader;
@property (nonatomic, readonly, copy) NSString *LastRequestStartLine;
@property (nonatomic, readonly, copy) NSNumber *NumResponseHeaders;
@property (nonatomic, copy) NSString *PartSelector;
@property (nonatomic) BOOL PercentDoneOnSend;
@property (nonatomic, readonly, copy) NSString *ResponseHeader;
@property (nonatomic, readonly, copy) NSNumber *ResponseStatusCode;
@property (nonatomic, readonly, copy) NSString *ResponseStatusText;
@property (nonatomic) BOOL StreamNonChunked;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddHeader
- (BOOL)AddHeader: (NSString *)name 
	value: (NSString *)value;
// method: AddQueryParam
- (BOOL)AddQueryParam: (NSString *)name 
	value: (NSString *)value;
// method: AddQueryParams
- (BOOL)AddQueryParams: (NSString *)queryString;
// method: ClearAllHeaders
- (BOOL)ClearAllHeaders;
// method: ClearAllQueryParams
- (BOOL)ClearAllQueryParams;
// method: ClearResponseBodyStream
- (void)ClearResponseBodyStream;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port 
	tls: (BOOL)tls 
	autoReconnect: (BOOL)autoReconnect;
// method: ConnectAsync
- (CkoTask *)ConnectAsync: (NSString *)hostname 
	port: (NSNumber *)port 
	tls: (BOOL)tls 
	autoReconnect: (BOOL)autoReconnect;
// method: Disconnect
- (BOOL)Disconnect: (NSNumber *)maxWaitMs;
// method: DisconnectAsync
- (CkoTask *)DisconnectAsync: (NSNumber *)maxWaitMs;
// method: FullRequestBinary
- (NSString *)FullRequestBinary: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	bodyBytes: (NSData *)bodyBytes;
// method: FullRequestBinaryAsync
- (CkoTask *)FullRequestBinaryAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	bodyBytes: (NSData *)bodyBytes;
// method: FullRequestFormUrlEncoded
- (NSString *)FullRequestFormUrlEncoded: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: FullRequestFormUrlEncodedAsync
- (CkoTask *)FullRequestFormUrlEncodedAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: FullRequestMultipart
- (NSString *)FullRequestMultipart: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: FullRequestMultipartAsync
- (CkoTask *)FullRequestMultipartAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: FullRequestNoBody
- (NSString *)FullRequestNoBody: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: FullRequestNoBodyAsync
- (CkoTask *)FullRequestNoBodyAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: FullRequestStream
- (NSString *)FullRequestStream: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	stream: (CkoStream *)stream;
// method: FullRequestStreamAsync
- (CkoTask *)FullRequestStreamAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	stream: (CkoStream *)stream;
// method: FullRequestString
- (NSString *)FullRequestString: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	bodyText: (NSString *)bodyText;
// method: FullRequestStringAsync
- (CkoTask *)FullRequestStringAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	bodyText: (NSString *)bodyText;
// method: ReadRespBodyBinary
- (NSData *)ReadRespBodyBinary;
// method: ReadRespBodyBinaryAsync
- (CkoTask *)ReadRespBodyBinaryAsync;
// method: ReadRespBodyStream
- (BOOL)ReadRespBodyStream: (CkoStream *)stream 
	autoSetStreamCharset: (BOOL)autoSetStreamCharset;
// method: ReadRespBodyStreamAsync
- (CkoTask *)ReadRespBodyStreamAsync: (CkoStream *)stream 
	autoSetStreamCharset: (BOOL)autoSetStreamCharset;
// method: ReadRespBodyString
- (NSString *)ReadRespBodyString;
// method: ReadRespBodyStringAsync
- (CkoTask *)ReadRespBodyStringAsync;
// method: ReadResponseHeader
- (NSNumber *)ReadResponseHeader;
// method: ReadResponseHeaderAsync
- (CkoTask *)ReadResponseHeaderAsync;
// method: RedirectUrl
- (CkoUrl *)RedirectUrl;
// method: RemoveHeader
- (BOOL)RemoveHeader: (NSString *)name;
// method: RemoveQueryParam
- (BOOL)RemoveQueryParam: (NSString *)name;
// method: ResponseHdrByName
- (NSString *)ResponseHdrByName: (NSString *)name;
// method: ResponseHdrName
- (NSString *)ResponseHdrName: (NSNumber *)index;
// method: ResponseHdrValue
- (NSString *)ResponseHdrValue: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendReqBinaryBody
- (BOOL)SendReqBinaryBody: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	body: (NSData *)body;
// method: SendReqBinaryBodyAsync
- (CkoTask *)SendReqBinaryBodyAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	body: (NSData *)body;
// method: SendReqFormUrlEncoded
- (BOOL)SendReqFormUrlEncoded: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: SendReqFormUrlEncodedAsync
- (CkoTask *)SendReqFormUrlEncodedAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: SendReqMultipart
- (BOOL)SendReqMultipart: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: SendReqMultipartAsync
- (CkoTask *)SendReqMultipartAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: SendReqNoBody
- (BOOL)SendReqNoBody: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: SendReqNoBodyAsync
- (CkoTask *)SendReqNoBodyAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath;
// method: SendReqStreamBody
- (BOOL)SendReqStreamBody: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	stream: (CkoStream *)stream;
// method: SendReqStreamBodyAsync
- (CkoTask *)SendReqStreamBodyAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	stream: (CkoStream *)stream;
// method: SendReqStringBody
- (BOOL)SendReqStringBody: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	bodyText: (NSString *)bodyText;
// method: SendReqStringBodyAsync
- (CkoTask *)SendReqStringBodyAsync: (NSString *)httpVerb 
	uriPath: (NSString *)uriPath 
	bodyText: (NSString *)bodyText;
// method: SetAuthAws
- (BOOL)SetAuthAws: (CkoAuthAws *)authProvider;
// method: SetAuthAzureAD
- (BOOL)SetAuthAzureAD: (CkoAuthAzureAD *)authProvider;
// method: SetAuthAzureStorage
- (BOOL)SetAuthAzureStorage: (CkoAuthAzureStorage *)authProvider;
// method: SetAuthBasic
- (BOOL)SetAuthBasic: (NSString *)username 
	password: (NSString *)password;
// method: SetAuthGoogle
- (BOOL)SetAuthGoogle: (CkoAuthGoogle *)authProvider;
// method: SetAuthOAuth1
- (BOOL)SetAuthOAuth1: (CkoOAuth1 *)authProvider 
	useQueryParams: (BOOL)useQueryParams;
// method: SetAuthOAuth2
- (BOOL)SetAuthOAuth2: (CkoOAuth2 *)authProvider;
// method: SetMultipartBodyBinary
- (BOOL)SetMultipartBodyBinary: (NSData *)bodyData;
// method: SetMultipartBodyStream
- (BOOL)SetMultipartBodyStream: (CkoStream *)stream;
// method: SetMultipartBodyString
- (BOOL)SetMultipartBodyString: (NSString *)bodyText;
// method: SetResponseBodyStream
- (BOOL)SetResponseBodyStream: (NSNumber *)expectedStatus 
	autoSetStreamCharset: (BOOL)autoSetStreamCharset 
	responseStream: (CkoStream *)responseStream;
// method: UseConnection
- (BOOL)UseConnection: (CkoSocket *)connection 
	autoReconnect: (BOOL)autoReconnect;

@end
