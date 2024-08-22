// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYCATEGORYICONVIEWCONTROLLER_H
#define SBHLIBRARYCATEGORYICONVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, NSString, _UILegibilitySettings;
@protocol SBFolderObserver, SBHLibraryCategoryObserver, SBIconViewQuerying, SBIconViewCustomImageViewControlling, SBHLegibility, BSInvalidatable, SBIconViewProviding, SBIconListLayoutProvider, SBLeafIconDataSource;


#import "SBHLibraryCategoryPodBackgroundView.h"
#import "SBIconListView.h"
#import "SBHLibraryCategory.h"
#import "SBFolder.h"
#import "SBFolderIconImageCache.h"
#import "SBIcon.h"
#import "SBHIconImageCache.h"

@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBHLibraryCategoryObserver, SBIconViewQuerying, SBIconViewCustomImageViewControlling, SBHLegibility>

 {
    SBHLibraryCategoryPodBackgroundView *_backgroundView;
    SBIconListView *_iconListView;
    id<BSInvalidatable> *_preventFolderUpdateAssertion;
}


@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (readonly, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id *backgroundViewConfigurator;
@property (copy, nonatomic) id *backgroundViewProvider;
@property (nonatomic) CGFloat brightness;
@property (readonly, nonatomic) SBHLibraryCategory *category; // ivar: _category
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) SBFolder *folder; // ivar: _folder
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *icon;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (nonatomic) NSUInteger imageViewAlignment;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (readonly, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic) UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic) NSUInteger pauseReasons; // ivar: _pauseReasons
@property (nonatomic) NSUInteger presentationMode;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) BOOL showsSquareCorners; // ivar: _showsSquareCorners
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) CGPoint snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) NSUInteger userVisibilityStatus;
@property (readonly, nonatomic) CGRect visibleBounds;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *visiblyActiveDataSource;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (readonly, nonatomic) BOOL wantsLabelHidden;


-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)presentedIconLocations;
-(id)sourceView;
-(void)categoryDidUpdate:(id)arg0 ;
-(void)categoryWillUpdate:(id)arg0 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)folder:(id)arg0 didRemoveLists:(id)arg1 atIndexes:(id)arg2 ;
-(void)updateCategory:(id)arg0 location:(id)arg1 ;
-(void)updateFolder:(id)arg0 location:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif