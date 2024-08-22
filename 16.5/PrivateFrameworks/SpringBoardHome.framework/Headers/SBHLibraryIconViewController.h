// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYICONVIEWCONTROLLER_H
#define SBHLIBRARYICONVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UIView, _UILegibilitySettings;
@protocol SBHLibraryCategoriesFolderDataSourceObserver, BSDescriptionProviding, SBIconViewCustomImageViewControlling, SBIconListLayoutProvider, SBLeafIconDataSource;


#import "SBHLibraryCategoryStackView.h"
#import "SBHLibraryDismissalView.h"
#import "SBIcon.h"
#import "SBHLibraryCategoriesFolderDataSource.h"

@interface SBHLibraryIconViewController : UIViewController <SBHLibraryCategoriesFolderDataSourceObserver, BSDescriptionProviding, SBIconViewCustomImageViewControlling>

 {
    id<SBIconListLayoutProvider> *_listLayoutProvider;
    SBHLibraryCategoryStackView *_categoryStackView;
    SBHLibraryDismissalView *_dismissalView;
}


@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (copy, nonatomic) id *backgroundViewConfigurator;
@property (copy, nonatomic) id *backgroundViewProvider;
@property (nonatomic) CGFloat brightness; // ivar: _brightness
@property (readonly, nonatomic) SBHLibraryCategoryStackView *categoryStackView;
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *dismissalView;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *icon;
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (nonatomic) NSUInteger imageViewAlignment;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) SBHLibraryCategoriesFolderDataSource *libraryDataSource; // ivar: _libraryDataSource
@property (readonly, nonatomic) UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping; // ivar: _overlapping
@property (nonatomic) NSUInteger pauseReasons;
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


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListLayoutProvider:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)sourceView;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )focusEffectCenter;
-(struct CGRect )focusEffectBounds;
-(void)_reloadCategoryViewsForDataSourceChangeAnimated:(BOOL)arg0 ;
-(void)categoriesDataSource:(id)arg0 shouldAnimateLayoutForCategories:(id)arg1 ;
-(void)categoriesDataSourceNeedsAnimatedReload:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif