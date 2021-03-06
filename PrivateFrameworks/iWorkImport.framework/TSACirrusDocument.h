/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate> {
    TSPObjectContext * _context;
    NSString * _documentPasswordHint;
    NSURL * _fileURL;
    BOOL  _isClosed;
    TSUTemporaryDirectory * _tempDirForSupport;
}

@property (nonatomic, readonly) NSDictionary *additionalDocumentPropertiesForWrite;
@property (nonatomic, readonly) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (nonatomic, readonly) BOOL areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *baseUUIDForObjectUUID;
@property (nonatomic, retain) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentCachePath;
@property (nonatomic, readonly) NSString *documentPasswordHint;
@property (nonatomic, readonly) TSADocumentRoot *documentRoot;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (nonatomic, copy) NSURL *fileURL;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL ignoreDocumentSupport;
@property (nonatomic, readonly) BOOL isDocumentSupportTemporary;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TSAUbiquitousRefreshQueue *refreshQueue;
@property (nonatomic, readonly) BOOL skipDocumentUpgrade;
@property (readonly) Class superclass;

- (void)close;
- (id)context;
- (void)dealloc;
- (id)documentCachePath;
- (void)documentDidLoad;
- (id)documentPasswordHint;
- (id)documentPasswordHintForWrite;
- (id)documentRoot;
- (id)fileURL;
- (id)initWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 registry:(id)arg4 error:(id*)arg5 passphrase:(id)arg6;
- (id)name;
- (void)presentPersistenceError:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFileURL:(id)arg1;
- (BOOL)skipDocumentUpgrade;
- (id)supportDirectoryURL;

@end
