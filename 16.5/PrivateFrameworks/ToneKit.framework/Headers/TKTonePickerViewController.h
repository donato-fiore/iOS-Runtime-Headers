// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTONEPICKERVIEWCONTROLLER_H
#define TKTONEPICKERVIEWCONTROLLER_H

@class UITableViewController, UIImage, UIBarButtonItem, NSMutableDictionary, MPMediaPickerController, NSMutableArray, MPMusicPlayerController, NSNumber, NSString;
@protocol TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerTableViewControllerHelper, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver, MPMediaPickerControllerDelegate, TKTonePickerViewControllerDelegate, TKTonePickerStyleProvider;


#import "TKTonePickerController.h"
#import "TKTonePickerTableViewCellLayoutManager.h"
#import "TKToneClassicsTableViewController.h"
#import "TKVibrationPickerViewController.h"

@interface TKTonePickerViewController : UITableViewController <TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerTableViewControllerHelper, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver, MPMediaPickerControllerDelegate>

 {
    TKTonePickerController *_tonePickerController;
    UIImage *_checkmarkImage;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManagerForIndentedRows;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManagerForUnindentedRows;
    NSInteger _tonePickerTableViewStyle;
    BOOL _showsToneStoreWasSetExplicitly;
    BOOL _allowsAutoScrollingToSelectedTone;
    BOOL _allowsAutoScrollingToSelectedToneWasSetExplicitly;
    BOOL _needsScrollPositionReset;
    UIBarButtonItem *_storeBarButtonItem;
    NSMutableDictionary *_toneSectionHeaderViews;
    MPMediaPickerController *_mediaPickerController;
    NSMutableArray *_mediaItems;
    MPMusicPlayerController *_musicPlayer;
    NSNumber *_playingMediaItemIdentifier;
    TKToneClassicsTableViewController *_toneClassicsTableViewController;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    BOOL _isHandlingSwitchControlValueChanged;
    NSMutableArray *_switchControlsBeingObserved;
}


@property (nonatomic, setter=_setAllowsAutoScrollingToSelectedTone:) BOOL _allowsAutoScrollingToSelectedTone;
@property (copy, nonatomic, setter=_setOverrideFirstToneSectionTitle:) NSString *_overrideFirstToneSectionTitle;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSInteger alertType;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultToneIdentifier;
@property (weak, nonatomic) NSObject<TKTonePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreMute;
@property (nonatomic, getter=isMediaAtTop) BOOL mediaAtTop;
@property (nonatomic, getter=isNoneAtTop) BOOL noneAtTop;
@property (copy, nonatomic) NSString *noneString;
@property (copy, nonatomic) NSNumber *selectedMediaIdentifier;
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (copy, nonatomic) NSString *selectedVibrationIdentifier;
@property (nonatomic) BOOL showsDefault;
@property (nonatomic) BOOL showsIgnoreMute; // ivar: _showsIgnoreMute
@property (nonatomic) BOOL showsMedia; // ivar: _showsMedia
@property (nonatomic) BOOL showsNone;
@property (nonatomic) BOOL showsNothingSelected;
@property (nonatomic) BOOL showsStoreButtonInNavigationBar;
@property (nonatomic) BOOL showsToneStore; // ivar: _showsToneStore
@property (nonatomic) BOOL showsVibrations;
@property (retain, nonatomic) NSObject<TKTonePickerStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topic;


+(id)_checkmarkImage;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldShowCheckmarkOnTrailingEdge;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tonePickerControllerShouldShowMedia:(id)arg0 ;
-(CGFloat)_minimumTextIndentationForTableView:(id)arg0 withCheckmarkImage:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_addMediaIdentifierToList:(id)arg0 ;
-(NSUInteger)numberOfMediaItemsInTonePickerController:(id)arg0 ;
-(NSUInteger)tonePickerController:(id)arg0 indexOfMediaItemWithIdentifier:(id)arg1 ;
-(id)_customHeaderViewForHeaderInSection:(NSInteger)arg0 ;
-(id)_initWithAlertType:(NSInteger)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)_mediaItemForIdentifier:(id)arg0 ;
-(id)_musicPlayer;
-(id)_pickerRowItemForIndexPath:(id)arg0 ;
-(id)initWithAlertType:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)selectedIdentifier:(*BOOL)arg0 ;
-(id)selectedTonePickerItem;
-(id)tableView:(id)arg0 cellForPickerRowItem:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tonePickerController:(id)arg0 identifierOfMediaItemAtIndex:(NSUInteger)arg1 ;
-(id)tonePickerController:(id)arg0 titleOfMediaItemAtIndex:(NSUInteger)arg1 ;
-(void)_configureTextColorOfLabelInCell:(id)arg0 shouldTintText:(BOOL)arg1 checked:(BOOL)arg2 ;
-(void)_didFinishPreparingToPlayMediaItemWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)_didSelectMediaItemWithIdentifier:(id)arg0 ;
-(void)_didSelectToneWithIdentifier:(id)arg0 ;
-(void)_handleMediaLibraryDidChangeNotification;
-(void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_handleSwitchControlValueChanged:(id)arg0 ;
-(void)_playMediaItemWithIdentifier:(id)arg0 ;
-(void)_reloadData;
-(void)_resetScrollingPosition;
-(void)_stopMediaItemPlaybackWithFadeOutDuration:(CGFloat)arg0 ;
-(void)_togglePlayMediaItemWithIdentifier:(id)arg0 ;
-(void)_updateCell:(id)arg0 withDownloadProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)_updateMinimumTextIndentation;
-(void)_updateStyleOfTableView:(id)arg0 forStyleProvider:(id)arg1 ;
-(void)addMediaItems:(id)arg0 ;
-(void)applicationWillSuspend;
-(void)dealloc;
-(void)layoutMarginsDidChangeInTonePickerTableView:(id)arg0 ;
-(void)loadView;
-(void)loadViewForTonePickerTableViewController:(id)arg0 ;
-(void)mediaPicker:(id)arg0 didPickMediaItems:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)removeMediaItems:(id)arg0 ;
-(void)separatorColorDidChangeInTonePickerTableView:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 forPickerRowItem:(id)arg2 ;
-(void)tableView:(id)arg0 updateCell:(id)arg1 withSeparatorForPickerRowItem:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forPickerRowItem:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tonePickerController:(id)arg0 didDeletePickerRowItems:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didDeleteTonePickerSectionItems:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didInsertPickerRowItems:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didInsertTonePickerSectionItems:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didSelectMediaItemAtIndex:(NSUInteger)arg1 selectionDidChange:(BOOL)arg2 ;
-(void)tonePickerController:(id)arg0 didUpdateCheckedStatus:(BOOL)arg1 ofTonePickerItem:(id)arg2 ;
-(void)tonePickerController:(id)arg0 didUpdateDetailText:(id)arg1 ofTonePickerItem:(id)arg2 ;
-(void)tonePickerController:(id)arg0 didUpdateDownloadProgressOfTonePickerItem:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didUpdateFooterTextOfTonePickerSectionItems:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didUpdateHeaderTextOfTonePickerSectionItems:(id)arg1 ;
-(void)tonePickerController:(id)arg0 didUpdateIgnoreMute:(BOOL)arg1 forTonePickerItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)tonePickerController:(id)arg0 didUpdateTonePickerItem:(id)arg1 ;
// -(void)tonePickerController:(id)arg0 requestsPerformingBatchUpdates:(id)arg1 completion:(unk)arg2  ;
-(void)tonePickerController:(id)arg0 requestsPresentingAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)tonePickerController:(id)arg0 requestsPresentingToneClassicsPickerForItem:(id)arg1 ;
-(void)tonePickerController:(id)arg0 selectedMediaItemWithIdentifier:(id)arg1 ;
-(void)tonePickerController:(id)arg0 selectedToneWithIdentifier:(id)arg1 ;
-(void)tonePickerController:(id)arg0 willBeginPlaybackOfToneWithIdentifier:(id)arg1 ;
-(void)tonePickerControllerDidReloadTones:(id)arg0 ;
-(void)tonePickerControllerDidStopPlaying:(id)arg0 withFadeOutDuration:(CGFloat)arg1 ;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg0 ;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg0 ;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg0 ;
-(void)tonePickerTableViewControllerWillBeDeallocated:(id)arg0 ;
-(void)tonePickerTableViewWillDisappear:(BOOL)arg0 ;
-(void)updateCell:(id)arg0 withCheckedStatus:(BOOL)arg1 forTonePickerItem:(id)arg2 ;
-(void)updateCell:(id)arg0 withDetailText:(id)arg1 ;
-(void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg0 ;
-(void)vibrationPickerViewController:(id)arg0 selectedVibrationWithIdentifier:(id)arg1 ;
-(void)vibrationPickerViewControllerWasDismissed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif