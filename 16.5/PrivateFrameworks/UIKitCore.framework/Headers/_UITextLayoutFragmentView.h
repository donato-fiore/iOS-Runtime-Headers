// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTLAYOUTFRAGMENTVIEW_H
#define _UITEXTLAYOUTFRAGMENTVIEW_H

@class NSString, NSTextLayoutFragment;
@protocol _UIMutableTextLayoutFragmentView;


#import "UIView.h"

@interface _UITextLayoutFragmentView : UIView <_UIMutableTextLayoutFragmentView>



@property (readonly, nonatomic) CGRect clipFrame;
@property (nonatomic) CGRect clipRect; // ivar: _clipRect
@property (nonatomic) CGPoint containerOrigin; // ivar: _containerOrigin
@property (nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSTextLayoutFragment *layoutFragment; // ivar: _layoutFragment
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithLayoutFragment:(id)arg0 containerOrigin:(struct CGPoint )arg1 containerSize:(struct CGSize )arg2 clipRect:(struct CGRect )arg3 ;
-(void)_updateGeometry;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)enumerateTextAttachmentViewsUsingBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)performChanges:(id)arg0 ;


@end


#endif