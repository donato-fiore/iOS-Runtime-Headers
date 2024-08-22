// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTONEPICKERCONTROLLER_H
#define TKTONEPICKERCONTROLLER_H

@class TLToneManager, NSMutableDictionary, NSMutableArray, NSArray, NSMutableSet, TLAlert, NSString, NSIndexPath;
@protocol TLToneStoreDownloadObserver, TKTonePickerControllerDelegate, TLToneStoreDownloadController;

#import <Foundation/Foundation.h>

#import "TKTonePickerItem.h"

@interface TKTonePickerController : NSObject <TLToneStoreDownloadObserver>

 {
    TLToneManager *_toneManager;
    NSUInteger _toneTypes;
    BOOL _defaultToneIdentifierWasExplicitlySet;
    BOOL _selectedToneWasExplicitlySetToDefaultTone;
    BOOL _selectedVibrationIdentifierWasExplicitlySet;
    BOOL _showsNoneWasExplicitlySet;
    BOOL _isToneStoreDownloadButtonAllowed;
    NSInteger _toneStoreDownloadButtonState;
    NSMutableDictionary *_activeToneStoreDownloadsByIdentifier;
    NSMutableDictionary *_finishedToneStoreDownloadsByIdentifier;
    BOOL _shouldFreezeContentsOriginatingFromToneManager;
    BOOL _hasLoadedTonesOnce;
    NSMutableArray *_cachedPickerSectionItems;
    NSMutableArray *_cachedPickerRowItems;
    NSArray *_installedTones;
    NSMutableArray *_toneGroupLists;
    NSMutableArray *_toneGroupNames;
    NSMutableArray *_toneGroupBucketIdentifiers;
    NSMutableSet *_identifiersOfRemovableTones;
    TLAlert *_playingAlert;
}


@property (readonly, nonatomic) NSString *_alertTonesPlistName;
@property (nonatomic, setter=_setBehavesAsRingtonePicker:) BOOL _behavesAsRingtonePicker; // ivar: __behavesAsRingtonePicker
@property (retain, nonatomic, setter=_setClassicAlertToneIdentifiers:) NSArray *_classicAlertToneIdentifiers; // ivar: __classicAlertToneIdentifiers
@property (retain, nonatomic, setter=_setClassicRingtoneIdentifiers:) NSArray *_classicRingtoneIdentifiers; // ivar: __classicRingtoneIdentifiers
@property (readonly, nonatomic) NSIndexPath *_indexPathForDefaultGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForFirstToneGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForMediaGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForNone;
@property (readonly, nonatomic) NSIndexPath *_indexPathForToneStoreGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForVibrationGroup;
@property (readonly, nonatomic) NSString *_ringtonesPlistName;
@property (nonatomic, setter=_setSelectedClassicAlertToneIndex:) NSUInteger _selectedClassicAlertToneIndex; // ivar: __selectedClassicAlertToneIndex
@property (nonatomic, setter=_setSelectedClassicRingtoneIndex:) NSUInteger _selectedClassicRingtoneIndex; // ivar: __selectedClassicRingtoneIndex
@property (retain, nonatomic, setter=_setSelectedToneIndexPath:) NSIndexPath *_selectedToneIndexPath; // ivar: __selectedToneIndexPath
@property (retain, nonatomic, setter=_setToneManager:) TLToneManager *_toneManager;
@property (readonly, nonatomic) TKTonePickerItem *_topLevelSelectedTonePickerItem;
@property (readonly, nonatomic) NSInteger alertType; // ivar: _alertType
@property (readonly, nonatomic) BOOL canShowStore;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultToneIdentifier; // ivar: _defaultToneIdentifier
@property (weak, nonatomic) NSObject<TKTonePickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreMute; // ivar: _ignoreMute
@property (readonly, nonatomic) NSIndexPath *indexPathForSelectedTone;
@property (nonatomic, getter=isMediaAtTop) BOOL mediaAtTop; // ivar: _mediaAtTop
@property (nonatomic, getter=isNoneAtTop) BOOL noneAtTop; // ivar: _noneAtTop
@property (copy, nonatomic) NSString *noneString; // ivar: _noneString
@property (copy, nonatomic) NSString *overrideFirstToneSectionTitle; // ivar: _overrideFirstToneSectionTitle
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (readonly, nonatomic) TKTonePickerItem *selectedTonePickerItem;
@property (copy, nonatomic) NSString *selectedVibrationIdentifier; // ivar: _selectedVibrationIdentifier
@property (nonatomic) BOOL showsDefault; // ivar: _showsDefault
@property (nonatomic) BOOL showsIgnoreMute; // ivar: _showsIgnoreMute
@property (nonatomic) BOOL showsNone; // ivar: _showsNone
@property (nonatomic) BOOL showsNothingSelected; // ivar: _showsNothingSelected
@property (nonatomic) BOOL showsToneStore; // ivar: _showsToneStore
@property (nonatomic) BOOL showsVibrations; // ivar: _showsVibrations
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<TLToneStoreDownloadController> *toneStoreDownloadController; // ivar: _toneStoreDownloadController
@property (copy, nonatomic) NSString *topic; // ivar: _topic


+(id)_latestRedownloadAllTonesDate;
+(void)_updateLatestRedownloadAllTonesDate;
-(BOOL)_didSelectToneClassicsPickerItem:(id)arg0 ;
-(BOOL)_enableToneStoreDownloadItemIfAppropriate;
-(BOOL)_isDefaultGroupAtIndexPath:(id)arg0 ;
-(BOOL)_isDividerAtIndexPath:(id)arg0 ;
-(BOOL)_isIgnoreMuteGroupAtIndexPath:(id)arg0 ;
-(BOOL)_isMediaGroupAtIndexPath:(id)arg0 ;
-(BOOL)_isNoneGroupAtIndexPath:(id)arg0 ;
-(BOOL)_isToneStoreGroupAtIndexPath:(id)arg0 ;
-(BOOL)_isVibrationGroupAtIndexPath:(id)arg0 ;
-(BOOL)_showsMedia;
-(BOOL)canDeleteTonePickerItem:(id)arg0 ;
-(BOOL)didSelectTonePickerItem:(id)arg0 ;
-(NSInteger)numberOfSections;
-(NSUInteger)_indexOfMediaItemWithIdentifier:(id)arg0 ;
-(NSUInteger)_mediaItemsCount;
-(id)_annotatedNameForToneIdentifier:(id)arg0 ;
-(id)_cachedPickerItemForSection:(NSInteger)arg0 ;
-(id)_cachedPickerRowItemAtIndex:(NSInteger)arg0 inSectionForItem:(id)arg1 ;
-(id)_footerTextForToneStoreGroup;
-(id)_identifierAtIndexPath:(id)arg0 isMediaItem:(*BOOL)arg1 ;
-(id)_identifierOfMediaItemAtIndex:(NSUInteger)arg0 ;
-(id)_identifierOfSelectedClassicAlertTone;
-(id)_identifierOfSelectedClassicRingtone;
-(id)_identifierOfToneAtIndexPath:(id)arg0 ;
-(id)_indexPathForIgnoreMuteGroup;
-(id)_indexPathForToneStoreDownloadItem;
-(id)_indexPathForToneWithIdentifier:(id)arg0 ;
-(id)_loadAlertTonesFromPlist;
-(id)_loadRingtonesFromPlist;
-(id)_loadTonesFromPlistNamed:(id)arg0 ;
-(id)_nameForToneIdentifier:(id)arg0 ;
-(id)_nameOfSelectedVibrationIdentifier;
-(id)_pickerRowItemAtIndex:(NSInteger)arg0 inSectionForItem:(id)arg1 ;
-(id)_sanitizedSelectedVibrationIdentifierAllowingNilForDefault:(BOOL)arg0 ;
-(id)_selectedIdentifier:(*BOOL)arg0 ;
-(id)_toneClassicsPickerItemAtIndex:(NSInteger)arg0 withToneIdentifier:(id)arg1 belowTonePickerItem:(id)arg2 ;
-(id)initWithAlertType:(NSInteger)arg0 ;
-(id)pickerItemForSection:(NSInteger)arg0 ;
-(void)_applyBatchUpdatesWithDeletedPickerRowItems:(id)arg0 deletedTonePickerSectionItems:(id)arg1 insertedPickerRowItems:(id)arg2 insertedTonePickerSectionItems:(id)arg3 tonePickerSectionItemsWithUpdatedHeaderText:(id)arg4 tonePickerSectionItemsWithUpdatedFooterText:(id)arg5 ;
-(void)_cachePickerRowItem:(id)arg0 atIndex:(NSInteger)arg1 inSectionForItem:(id)arg2 ;
-(void)_cachePickerSectionItem:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)_didFinishPlayingAlert:(id)arg0 ;
-(void)_didReloadTones;
-(void)_didSelectMediaItemWithIdentifier:(id)arg0 ;
-(void)_didSelectToneWithIdentifier:(id)arg0 ;
-(void)_didUpdateCheckedStatus:(BOOL)arg0 ofPickerItemForRowAtIndexPath:(id)arg1 ;
-(void)_didUpdateCheckedStatus:(BOOL)arg0 ofToneClassicsPickerItem:(id)arg1 ;
-(void)_didUpdateDetailText:(id)arg0 ofPickerItemForRowAtIndexPath:(id)arg1 ;
-(void)_didUpdateFooterTextForToneStoreGroup;
-(void)_didUpdateToneStoreDownloadItem;
-(void)_disableToneStoreDownloadItem;
-(void)_goToStore;
-(void)_handleAlertOverridePolicyDidChangeNotification:(id)arg0 ;
-(void)_invalidatePickerItemCaches;
// -(void)_performBatchUpdates:(id)arg0 completion:(unk)arg1  ;
-(void)_playToneWithIdentifier:(id)arg0 ;
-(void)_redownloadAllTones;
-(void)_registerForUserGeneratedVibrationsDidChangeNotification;
-(void)_reloadMediaItems;
-(void)_reloadStateForBasicBehavior;
-(void)_reloadTones;
-(void)_reloadTonesForExternalChange:(BOOL)arg0 shouldSkipDelegateFullReload:(BOOL)arg1 ;
-(void)_resetSelectedClassicAlertToneIndex;
-(void)_resetSelectedClassicRingtoneIndex;
-(void)_sortToneIdentifiersArray:(id)arg0 ;
-(void)_togglePlayForToneWithIdentifier:(id)arg0 ;
-(void)_toneManagerContentsChanged:(id)arg0 ;
-(void)_uncachePickerRowItemAtIndex:(NSInteger)arg0 inSectionForItem:(id)arg1 ;
-(void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
-(void)_updateDetailTextOfVibrationItem;
-(void)dealloc;
-(void)deleteTonePickerItem:(id)arg0 ;
-(void)didFinishCheckingForAvailableToneStoreDownloads:(BOOL)arg0 ;
-(void)finishedWithPicker;
-(void)stopPlayingWithFadeOut:(BOOL)arg0 ;
-(void)storeAccountNameDidChange:(id)arg0 ;
-(void)toneStoreDownloadsDidFinish:(id)arg0 ;
-(void)toneStoreDownloadsDidProgress:(id)arg0 ;
-(void)toneStoreDownloadsDidStart:(id)arg0 ;


@end


#endif