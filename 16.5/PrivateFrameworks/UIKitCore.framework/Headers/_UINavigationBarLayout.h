// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARLAYOUT_H
#define _UINAVIGATIONBARLAYOUT_H

@class NSMutableArray, NSArray, NSString;
@protocol NSCopying, _UINavigationBarTransitionContextParticipant, _UINavigationBarContentViewVisualProvider;

#import <Foundation/Foundation.h>

#import "_UIBarInsertLayoutData.h"
#import "_UINavigationBarModernPromptView.h"
#import "_UINavigationBarContentView.h"
#import "UIView.h"
#import "_UINavigationBarLargeTitleView.h"
#import "_UINavigationBarContentViewLayout.h"
#import "_UINavigationBarLargeTitleViewLayout.h"
#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayout.h"
#import "_UINavigationControllerRefreshControlHost.h"
#import "UILabel.h"
#import "UISearchBar.h"
#import "_UINavigationBarPalette.h"

@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant>

 {
    _UIBarInsertLayoutData *_topWhitespaceLayoutData;
    _UIBarInsertLayoutData *_promptLayoutData;
    _UIBarInsertLayoutData *_contentLayoutData;
    _UIBarInsertLayoutData *_largeTitleLayoutData;
    _UIBarInsertLayoutData *_refreshControlLayoutData;
    _UIBarInsertLayoutData *_searchBarLayoutData;
    _UIBarInsertLayoutData *_scopeBarLayoutData;
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;
    NSMutableArray *_priorityOrderedLayout;
    NSMutableArray *_stackingOrderedLayout;
    NSArray *_restingHeights;
    BOOL _largeTitleViewOverlaysContentView;
    BOOL _backgroundCoversContentOnly;
    BOOL _clientWantsBackgroundHidden;
    BOOL _useManualScrollEdgeAppearance;
    BOOL _clientUsesManualScrollEdgeAppearanceProgressSPI;
    BOOL _clientCanUpdateChromelessTransitionProgress;
    BOOL _hasInlineSearchBar;
    BOOL _clientWantsToPreserveSearchBarAcrossTransitions;
    BOOL _hidesSearchBarWhenScrolling;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    UIView *_animationContentClippingView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    id<_UINavigationBarContentViewVisualProvider> *_contentViewVisualProvider;
    _UINavigationBarContentViewLayout *_contentViewLayout;
    _UINavigationBarLargeTitleViewLayout *_largeTitleViewLayout;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_compactBackgroundViewLayout;
    _UIBarBackgroundLayout *_standardBackgroundViewLayout;
    CGFloat _backgroundExtension;
    CGFloat _requestedBackgroundViewAlpha;
    CGFloat _manualScrollEdgeAppearanceProgress;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
    UILabel *_weeTitleLabel;
    UISearchBar *_searchBar;
    NSInteger _representedSearchLayoutState;
    _UINavigationBarPalette *_bottomPalette;
    CGFloat _largeTitleExposure;
    CGFloat _largeTitleTransitionProgress;
    CGFloat _chromelessTransitionProgress;
    CGFloat _computedBackgroundViewAlpha;
    NSInteger _apiVersion;
    CGSize _layoutSize;
    NSDirectionalEdgeInsets _largeTitleViewInsets;
    CGRect _originLayoutFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(struct CGRect )_backgroundViewLayoutFrameWithRelevantMaxY:(CGFloat)arg0 ;
-(struct CGRect )_bottomPaletteLayoutFrameWithSearchBarMaxY:(CGFloat)arg0 ;
-(struct CGRect )_contentViewLayoutFrameWithPromptMaxY:(CGFloat)arg0 ;
-(struct CGRect )_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(CGFloat)arg0 ;
-(struct CGRect )_refreshControlLayoutFrameWithContentMaxY:(CGFloat)arg0 ;
-(struct CGRect )_searchBarLayoutFrameWithLargeTitleMaxY:(CGFloat)arg0 ;
-(struct CGRect )promptViewLayoutFrameWithTopMaxY:(CGFloat)arg0 ;
-(struct CGRect )topWhitespaceLayoutFrame;
-(void)_addLayoutItem:(id)arg0 ;
-(void)_includeContentLayoutDataInLayout:(BOOL)arg0 ;
-(void)_removeLayoutItem:(id)arg0 ;
-(void)_reprioritizeLayoutItem:(id)arg0 toPriority:(NSInteger)arg1 ;
-(void)_updateContentViewLayoutItem;
-(void)_updateLargeTitleViewLayoutItem;
-(void)_updateLayoutOutputs;
-(void)_updateLayoutParametersForWidth:(CGFloat)arg0 ;
-(void)_updateRefreshControlLayoutData;
-(void)_updateWhitespaceLayoutItems;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg0 ;
-(void)finalizeStateFromTransition:(id)arg0 ;
-(void)prepareToRecordToState:(id)arg0 ;
-(void)recordFromStateForTransition:(id)arg0 ;
-(void)recordToStateForTransition:(id)arg0 ;


@end


#endif