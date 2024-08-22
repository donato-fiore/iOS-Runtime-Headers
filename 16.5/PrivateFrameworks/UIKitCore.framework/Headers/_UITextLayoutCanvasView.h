// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTLAYOUTCANVASVIEW_H
#define _UITEXTLAYOUTCANVASVIEW_H

@class NSTextViewportLayoutController, NSMutableSet, NSMapTable, NSString, NSTextContainer, NSTextLayoutManager;
@protocol NSTextViewportLayoutControllerDelegate, _UITextKit2Canvas, _UITextCanvasContext;


#import "UIView.h"

@interface _UITextLayoutCanvasView : UIView <NSTextViewportLayoutControllerDelegate, _UITextKit2Canvas>

 {
    NSTextViewportLayoutController *_viewportLayoutController;
    NSMutableSet *_viewportElementsToRemove;
    NSMapTable *_viewportElementViews;
    NSMutableSet *_textAttachmentViews;
    NSMutableSet *_newTextAttachmentViews;
    NSUInteger _textContainerIndex;
    CGSize _contentSize;
    BOOL _inLayout;
}


@property (weak, nonatomic) NSObject<_UITextCanvasContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTextContainer *textContainer; // ivar: _textContainer
@property (readonly, nonatomic) NSTextLayoutManager *textLayoutManager; // ivar: _textLayoutManager


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithTextLayoutManager:(id)arg0 textContainer:(id)arg1 ;
-(id)textRangeAtPoint:(struct CGPoint )arg0 ;
-(id)textRangeForBounds:(struct CGRect )arg0 layoutIfNeeded:(BOOL)arg1 ;
-(struct CGRect )viewportBoundsForTextViewportLayoutController:(id)arg0 ;
-(void)_viewportDidLayout;
-(void)_viewportWillLayout;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)textViewportLayoutController:(id)arg0 configureRenderingSurfaceForTextLayoutFragment:(id)arg1 ;
-(void)updateContentSizeIfNeeded;
-(void)viewportBoundsDidChange;


@end


#endif