// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROOTFOLDERCONTROLLERCONFIGURATION_H
#define SBROOTFOLDERCONTROLLERCONFIGURATION_H

@class UIViewController<SBHRootFolderCustomViewPresenting>, UIViewController, UIView<SBHLegibility>, UIView, UIViewController<SBHSearchPresentable>, UIViewController<SBHLegibility>, CHSWidgetDescriptorProvider;
@protocol SBHSearchPresenting;


#import "SBFolderControllerConfiguration.h"

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration

@property (nonatomic, getter=isDockExternal) BOOL dockExternal; // ivar: _dockExternal
@property (nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation; // ivar: _dockPinnedForRotation
@property (nonatomic) NSUInteger folderPageManagementAllowedOrientations; // ivar: _folderPageManagementAllowedOrientations
@property (nonatomic, getter=isForSnapshot) BOOL forSnapshot; // ivar: _forSnapshot
@property (nonatomic) NSUInteger ignoresOverscrollOnFirstPageOrientations; // ivar: _ignoresOverscrollOnFirstPageOrientations
@property (nonatomic) NSUInteger ignoresOverscrollOnLastPageOrientations; // ivar: _ignoresOverscrollOnLastPageOrientations
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController; // ivar: _leadingCustomViewController
@property (retain, nonatomic) UIViewController *pullDownSearchViewController; // ivar: _pullDownSearchViewController
@property (retain, nonatomic) UIView<SBHLegibility> *scrollAccessoryAuxiliaryView; // ivar: _scrollAccessoryAuxiliaryView
@property (retain, nonatomic) UIView *scrollAccessoryBackgroundView; // ivar: _scrollAccessoryBackgroundView
@property (retain, nonatomic) UIViewController<SBHSearchPresentable> *searchPresentableViewController; // ivar: _searchPresentableViewController
@property (retain, nonatomic) NSObject<SBHSearchPresenting> *searchPresenter; // ivar: _searchPresenter
@property (nonatomic) NSUInteger showsAddWidgetButtonWhileEditingAllowedOrientations; // ivar: _showsAddWidgetButtonWhileEditingAllowedOrientations
@property (nonatomic) BOOL showsDoneButtonWhileEditing; // ivar: _showsDoneButtonWhileEditing
@property (retain, nonatomic) UIViewController<SBHLegibility> *todayViewController;
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController; // ivar: _trailingCustomViewController
@property (retain, nonatomic) CHSWidgetDescriptorProvider *widgetDescriptorProvider; // ivar: _widgetDescriptorProvider


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif