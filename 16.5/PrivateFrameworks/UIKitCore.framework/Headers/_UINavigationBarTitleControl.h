// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTITLECONTROL_H
#define _UINAVIGATIONBARTITLECONTROL_H

@class NSDictionary, NSLayoutConstraint, NSArray, NSString;
@protocol _UITAMICAdaptorViewDelegate, _UINavigationBarTitleControlVisualProvider;


#import "UIControl.h"
#import "UILabel.h"
#import "_UITAMICAdaptorView.h"
#import "UIImageView.h"
#import "UILayoutGuide.h"
#import "UIDocumentProperties.h"
#import "UIView.h"

@interface _UINavigationBarTitleControl : UIControl <_UITAMICAdaptorViewDelegate>

 {
    UILabel *_inlineTitleView;
    _UITAMICAdaptorView *_wrapperView;
    NSDictionary *_resolvedAttributes;
    UIImageView *_chevron;
    UILayoutGuide *_chevronGuide;
    NSLayoutConstraint *_sosConstraint;
    NSArray *_titleConstraints;
    NSArray *_inlineTitleConstraints;
    NSArray *_chevronConstraints;
}


@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDocumentProperties *documentProperties; // ivar: _documentProperties
@property (readonly, nonatomic) UIView *effectiveTitleView; // ivar: _effectiveTitleView
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractive;
@property (nonatomic) UIEdgeInsets menuAlignmentInsets; // ivar: _menuAlignmentInsets
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDictionary *titleAttributes; // ivar: _titleAttributes
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILayoutGuide *titleLayoutGuide; // ivar: _titleLayoutGuide
@property (copy, nonatomic) id *titleMenuProvider; // ivar: _titleMenuProvider
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (nonatomic) float titleViewCompressionResistancePriority; // ivar: _titleViewCompressionResistancePriority
@property (readonly, nonatomic) CGFloat trailingPadding;
@property (retain, nonatomic) NSObject<_UINavigationBarTitleControlVisualProvider> *visualProvider; // ivar: _visualProvider


-(BOOL)_inactiveForPointer;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_baselineView;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_debugInfo;
-(id)_preferredPresentationSourceItem;
-(id)_preferredSender;
-(id)_preview;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)pointerShapeInContainer:(id)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGSize )availableSizeForAdaptor:(id)arg0 proposedSize:(struct CGSize )arg1 ;
-(void)_cleanupWrapperView;
-(void)_ensureNecessaryViews;
-(void)_invalidateSceneDraggingBehavior;
-(void)_updateContentAlpha;
-(void)_updateInlineTitleView;
-(void)_updateInteractions;
-(void)didMoveToWindow;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif