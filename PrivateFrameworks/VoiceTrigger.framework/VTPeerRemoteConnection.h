/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPeerRemoteConnection : NSObject <IDSServiceDelegate> {
    NSMutableDictionary * _completions;
    <VTPeerRemoteConnectionDelegate> * _delegate;
    NSString * _identifier;
    IDSService * _idsService;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _requireNearbyPeer;
    NSMutableDictionary * _responseClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_account;
- (id)_destination;
- (BOOL)_hasNearbyPeer;
- (void)_invokeCompletionForIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)_pairedDevice;
- (void)_sendResponse:(id)arg1 forRequestId:(id)arg2;
- (id)_service;
- (id)_wrappedSendFailureError:(id)arg1;
- (BOOL)hasPeer;
- (id)initWithServiceIdentifier:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 requireNearbyPeer:(BOOL)arg2;
- (void)sendRequestType:(unsigned int)arg1 nonWaking:(BOOL)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)serviceIdentifier;
- (void)setDelegate:(id)arg1;

@end
