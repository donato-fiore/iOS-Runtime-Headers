// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGEAPP_H
#define STSTORAGEAPP_H

@class NSData, NSString, LSApplicationRecord, NSArray, FPProviderDomain, NSDictionary, NSDate, PSUsageBundleApp;
@protocol STContainer;

#import <Foundation/Foundation.h>

#import "STSizeVector.h"

@interface STStorageApp : NSObject {
    NSData *_lsid;
    BOOL _isDocumentApp;
    BOOL _isAppClip;
    NSInteger _assetPurgeableSize;
    NSInteger _coreMLDataSize;
}


@property (retain) NSObject<STContainer> *appContainer; // ivar: _appContainer
@property NSInteger appContainerSize; // ivar: _appContainerSize
@property (retain) NSString *appIdentifier; // ivar: _appIdentifier
@property int appKind; // ivar: _appKind
@property (retain) LSApplicationRecord *appRecord;
@property (readonly) STSizeVector *appSize;
@property (readonly) STSizeVector *appSizeIfComputed;
@property (retain) STSizeVector *appSizesVar; // ivar: _appSizesVar
@property NSInteger assetPurgeableSize;
@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain) NSArray *childApps; // ivar: _childApps
@property NSInteger coreMLDataSize;
@property NSInteger dataContainerSize; // ivar: _dataContainerSize
@property (retain) NSArray *dataContainers; // ivar: _dataContainers
@property NSInteger dataPurgeableSize; // ivar: _dataPurgeableSize
@property (readonly) NSArray *documents;
@property (retain) STSizeVector *extSizesVar; // ivar: _extSizesVar
@property (retain) STSizeVector *external;
@property (copy) id *externalDataSizeBlock; // ivar: _externalDataSizeBlock
@property NSInteger externalPurgeableSize; // ivar: _externalPurgeableSize
@property NSInteger externalSize; // ivar: _externalSize
@property (retain) STSizeVector *externalSizes;
@property BOOL forceHidden; // ivar: _forceHidden
@property BOOL forceVisible; // ivar: _forceVisible
@property (retain) FPProviderDomain *fpDomain; // ivar: _fpDomain
@property (readonly) NSDictionary *infoDict;
@property (retain) STSizeVector *intSizesVar; // ivar: _intSizesVar
@property (readonly) STSizeVector *internalSizes;
@property (readonly) BOOL isAppClip;
@property (readonly) BOOL isApple;
@property (readonly) BOOL isDeletable;
@property (readonly) BOOL isDeleted;
@property (readonly) BOOL isDemotable;
@property (readonly) BOOL isDemoted;
@property (readonly) BOOL isDocumentApp;
@property (readonly) BOOL isInstalled;
@property BOOL isPseudoApp; // ivar: _isPseudoApp
@property (readonly) BOOL isSystemApp;
@property (readonly) BOOL isUsageApp;
@property (readonly) BOOL isUserApp;
@property (retain) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (retain) NSArray *mediaTypes; // ivar: _mediaTypes
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *parentAppIdentifier; // ivar: _parentAppIdentifier
@property NSInteger sharedContainerSize; // ivar: _sharedContainerSize
@property (retain) NSArray *sharedContainers; // ivar: _sharedContainers
@property NSInteger sharedPurgeableSize; // ivar: _sharedPurgeableSize
@property (readonly, nonatomic) int state;
@property (retain) PSUsageBundleApp *usageBundle; // ivar: _usageBundle
@property (readonly) BOOL userVisible;
@property (retain) NSString *vendorName; // ivar: _vendorName
@property (retain) NSString *versionString; // ivar: _versionString


+(id)sizeOfPluginKitContainers;
-(NSInteger)docAndDataSize;
-(NSInteger)docsAndDataSize;
-(NSInteger)dynamicSize;
-(NSInteger)sharedDataSize;
-(NSInteger)sizeOfMLData;
-(NSInteger)staticSize;
-(NSInteger)totalSize;
-(id)appPath;
-(id)appProxy;
-(id)dataPath;
-(id)initWithAppRecord:(id)arg0 ;
-(id)initWithAppRecord:(id)arg0 usageBundle:(id)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 name:(id)arg1 vendorName:(id)arg2 ;
-(id)updateAppSizes;
-(void)_postNotify:(id)arg0 ;
-(void)addNumber:(NSInteger)arg0 toDict:(id)arg1 forKey:(id)arg2 ;
-(void)notifyAppSizeChanged;
-(void)postNotify:(id)arg0 ;
-(void)refreshAppSizes;
-(void)refreshAppState;


@end


#endif