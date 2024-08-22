// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHPROXIEDAPPLICATIONPLACEHOLDER_H
#define SBHPROXIEDAPPLICATIONPLACEHOLDER_H

@class NSMutableDictionary, NSMutableSet, NSString, NSNumber, FBSApplicationPlaceholder;
@protocol FBSApplicationPlaceholderObserver, SBHApplicationPlaceholder, BSInvalidatable, BSDescriptionProviding, SBHProxiedApplicationPlaceholderDelegate;

#import <Foundation/Foundation.h>


@interface SBHProxiedApplicationPlaceholder : NSObject <FBSApplicationPlaceholderObserver, SBHApplicationPlaceholder, BSInvalidatable, BSDescriptionProviding>

 {
    BOOL _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip; // ivar: _appClip
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;
@property (readonly, copy, nonatomic) NSNumber *applicationItemID; // ivar: _applicationItemID
@property (readonly, nonatomic) BOOL canBeShared;
@property (readonly, nonatomic, getter=isCancelable) BOOL cancelable;
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHProxiedApplicationPlaceholderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isFailed) BOOL failed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;
@property (readonly, nonatomic, getter=isNewAppInstallFromStore) BOOL newAppInstallFromStore;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) FBSApplicationPlaceholder *placeholderProxy; // ivar: _placeholderProxy
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic, getter=isWaiting) BOOL waiting;


+(id)backgroundQueue;
-(BOOL)cancel;
-(BOOL)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(BOOL)iconCanTightenLabel:(id)arg0 ;
-(BOOL)iconCanTruncateLabel:(id)arg0 ;
-(BOOL)iconCompleteUninstall:(id)arg0 ;
-(BOOL)iconSupportsUninstall:(id)arg0 ;
-(BOOL)isDone;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isProgressPausedForIcon:(id)arg0 ;
-(BOOL)isStoreDownload;
-(BOOL)pause;
-(BOOL)prioritize;
-(BOOL)resume;
-(CGFloat)progressPercentForIcon:(id)arg0 ;
-(NSInteger)accessoryTypeForIcon:(id)arg0 ;
-(NSInteger)labelAccessoryTypeForIcon:(id)arg0 ;
-(NSInteger)progressStateForIcon:(id)arg0 ;
-(NSUInteger)_expectedFinalInstallPhase;
-(NSUInteger)installType;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)_getOrGenerateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)_iconImageKeyForBundleID:(id)arg0 info:(struct SBIconImageInfo )arg1 ;
-(id)badgeNumberOrStringForIcon:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)formattedAccessoryStringForIcon:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 statusDescriptionForLocation:(id)arg1 ;
-(id)initWithPlaceholderProxy:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(void)_generatePendingIconFormats;
-(void)_progressChanged;
-(void)_reloadThumbnailImage;
-(void)dealloc;
-(void)invalidate;
-(void)placeholderDidChangeSignificantly:(id)arg0 ;
-(void)placeholderProgressDidUpdate:(id)arg0 ;


@end


#endif