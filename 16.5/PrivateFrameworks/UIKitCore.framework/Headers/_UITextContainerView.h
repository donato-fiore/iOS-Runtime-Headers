// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTCONTAINERVIEW_H
#define _UITEXTCONTAINERVIEW_H

@class NSDictionary, UIView<_UITextCanvas>, NSString, NSLayoutManager, NSTextContainer, _UITextLayoutControllerBase<_UITextLayoutController>;
@protocol NSUITextViewCommonMethods, _UITextViewCanvasViewContext, _UITextContainerViewDelegate;


#import "UIView.h"
#import "UITextView.h"
#import "UIScrollView.h"
#import "UIColor.h"

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext>

 {
    UIEdgeInsets _textContainerInset;
    CGPoint _textContainerOrigin;
    NSDictionary *_linkTextAttributes;
    NSUInteger _invalidationSeqNo;
    NSInteger _invalidationSeqClipsToBounds;
    ? _tcvFlags;
    UITextView *_textView;
}


@property (readonly, nonatomic) CGRect _clipRectForFadedEdges;
@property (readonly, nonatomic) UIView<_UITextCanvas> *canvasView; // ivar: _canvasView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UITextContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGPoint drawingScale;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) UIScrollView *enclosingScrollView;
@property (nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) BOOL freezeTextContainerSize;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) NSInteger layoutOrientation;
@property (nonatomic) _NSRange markedRange;
@property (readonly, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (nonatomic) CGSize minSize; // ivar: _minSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *textColor;
@property (weak, nonatomic) NSTextContainer *textContainer; // ivar: _textContainer
@property (nonatomic) UIEdgeInsets textContainerInset;
@property (readonly, nonatomic) CGPoint textContainerOrigin;
@property (readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController; // ivar: _textLayoutController
@property (nonatomic) BOOL usesStandardTextScaling;
@property (nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable;


-(BOOL)_ensureLayoutForCappedSize;
-(BOOL)_shouldCapSizeToFitLayoutRange:(struct _NSRange *)arg0 ;
-(BOOL)drawTextInRectIfNeeded:(struct CGRect )arg0 ;
-(BOOL)reconfigureWithLayoutManager:(id)arg0 triggeredBySelector:(SEL)arg1 ;
-(id)attributedSubstringForMarkedRange;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textLayoutController:(id)arg1 textContainer:(id)arg2 delegate:(id)arg3 ;
-(id)layoutManager:(id)arg0 effectiveCUICatalogForTextEffect:(id)arg1 ;
-(id)linkAttributesForLink:(id)arg0 forCharacterAtIndex:(NSUInteger)arg1 ;
-(id)linkTextAttributes;
-(struct CGRect )visibleRect;
-(void)_ensureLayoutCompleteForRect:(struct CGRect )arg0 ;
-(void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange )arg0 ;
-(void)_ensureMinAndMaxSizesConsistentWithBounds;
-(void)_setFrameOrBounds:(struct CGRect )arg0 oldRect:(struct CGRect )arg1 isFrameRect:(BOOL)arg2 settingAction:(id)arg3 ;
-(void)_setNeedsContentsFormatUpdate;
-(void)_sizeToConstrainedContainerUsedRect;
-(void)didAddTextAttachmentViews:(id)arg0 ;
-(void)didLayoutTextAttachmentView:(id)arg0 inFragmentRect:(struct CGRect )arg1 ;
-(void)didRemoveTextAttachmentViews:(id)arg0 ;
-(void)invalidateTextContainerOrigin;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setConstrainedFrameSize:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 avoidAdditionalLayout:(BOOL)arg1 ;
-(void)sizeToFit;
-(void)textContainerUsageDidChangeToSize:(struct CGSize )arg0 ;
-(void)tintColorDidChange;
-(void)updateInsertionPointStateAndRestartTimer:(BOOL)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif