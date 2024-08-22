// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSADOCUMENTROOT_H
#define TSADOCUMENTROOT_H

@class NSMutableDictionary, NSMutableSet, NSString, TSADrawableFactory, NSSet;
@protocol TSKImportExportDelegate, TSADocumentRootDelegate;


#import "TSKDocumentRoot.h"
#import "TSTCustomFormatList.h"

@interface TSADocumentRoot : TSKDocumentRoot <TSKImportExportDelegate>

 {
    int _needsToCaptureViewState;
    NSMutableDictionary *_upgradeState;
    NSMutableSet *_warnings;
    NSString *_creationLanguage;
    NSUInteger _creationLanguageWritingDirection;
    TSTCustomFormatList *_tablesCustomFormatList;
    BOOL _needsMovieCompatibilityUpgrade;
    BOOL _isClosed;
    NSString *_templateIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (nonatomic) NSObject<TSADocumentRootDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDocumentEditedSinceLastSave) BOOL documentEditedSinceLastSave;
@property (readonly, nonatomic) TSADrawableFactory *drawableFactory;
@property (nonatomic) BOOL hasPreUFFVersion; // ivar: _hasPreUFFVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL importingDesignDemoDoc;
@property (readonly, nonatomic) BOOL isBrowsingVersions;
@property (readonly, nonatomic) NSSet *missingFontWarningMessages;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL needsMovieCompatibilityUpgrade;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *templateIdentifier;


+(id)persistenceWarningsForData:(id)arg0 isReadable:(BOOL)arg1 isExternal:(BOOL)arg2 ;
-(BOOL)exportToPath:(id)arg0 exporter:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)exportToPath:(id)arg0 exporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasICloudConflict;
-(BOOL)isMultiPageForQuickLook;
-(BOOL)shouldAllowDrawableInGroups:(id)arg0 forImport:(BOOL)arg1 ;
-(BOOL)writeData:(id)arg0 atDocumentCachePath:(id)arg1 ;
-(NSInteger)addObserverForICloudTeardownWithBlock:(id)arg0 ;
-(NSUInteger)writingDirection;
-(id)additionalDocumentPropertiesForWrite;
-(id)commandForPropagatingPresetChangeCommand:(id)arg0 alwaysPreserveAppearance:(BOOL)arg1 ;
-(id)creationLanguage;
-(id)customFormatList;
-(id)dataFromDocumentCachePath:(id)arg0 ;
-(id)documentCachePath;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)newExporterForType:(id)arg0 options:(id)arg1 preferredType:(*id)arg2 ;
-(id)p_characterStyleWithProperties:(id)arg0 stylesheet:(id)arg1 override:(id)arg2 ;
-(id)p_parseNumberOutOfBasename:(id)arg0 hasNumber:(*BOOL)arg1 number:(*NSUInteger)arg2 ;
-(id)packageDataForWrite;
-(id)protected_defaultTextPresetOrdering;
-(id)referencedStylesOfClass:(Class)arg0 ;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg0 ;
-(id)upgradeState;
-(id)warnings;
-(struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg0 ;
-(void)addWarning:(id)arg0 ;
-(void)changeDocumentCacheFileProtection:(id)arg0 ;
-(void)dealloc;
-(void)didDownloadDocumentResources:(id)arg0 failedOrCancelledDocumentResources:(id)arg1 error:(id)arg2 ;
-(void)didEnterBackground;
-(void)didSaveWithEncryptionChange;
-(void)documentDidLoad;
-(void)documentDidSave;
-(void)fulfillPasteboardPromises;
-(void)importerDidFinish:(id)arg0 ;
-(void)initializeForImport;
-(void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg0 insertAtBeginningOfGroup:(BOOL)arg1 ;
-(void)pUpgradeHyperlinks;
-(void)pUpgradeHyperlinksInStorage:(id)arg0 ;
-(void)p_registerAllFormulasAfterImport;
-(void)p_removeStyles:(id)arg0 ;
-(void)p_replaceStyle:(id)arg0 andChildrenWithVariationOfStyle:(id)arg1 ;
-(void)p_replaceStyles:(id)arg0 andChildrenWithVariationOfStyle:(id)arg1 ;
-(void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg0 ;
-(void)p_updateCreationLanguage;
-(void)performHyperlinkUpgradesIfNecessaryForVersion:(NSUInteger)arg0 ;
-(void)performStylesheetUpdatesIfNecessaryForVersion:(NSUInteger)arg0 ;
-(void)prepareForSavingAsTemplate;
-(void)prepareNewDocumentWithTemplateBundle:(id)arg0 ;
-(void)removeWarning:(id)arg0 ;
-(void)resumeBackgroundActivities;
-(void)resumeThumbnailing;
-(void)setCreationLanguage:(id)arg0 ;
-(void)setCustomFormatList:(id)arg0 ;
-(void)suspendBackgroundActivities;
-(void)suspendThumbnailing;
-(void)updateWritingDirection:(NSUInteger)arg0 ;
-(void)willClose;
-(void)willEnterForeground;


@end


#endif