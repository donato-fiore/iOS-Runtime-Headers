// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINPUTVIEWCONTENT_H
#define _UIINPUTVIEWCONTENT_H



#import "UIView.h"
#import "UIInputView.h"

@interface _UIInputViewContent : UIView {
    CGFloat _contentHeight;
    CGFloat _contentWidth;
    UIInputView *_inputView;
}


@property (nonatomic) NSUInteger _unclippableCorners; // ivar: _unclippableCorners


-(BOOL)_isToolbar;
-(id)initWithFrame:(struct CGRect )arg0 inputView:(id)arg1 ;
-(struct CGSize )_contentSize;
-(struct CGSize )_sizeFittingContentViews;
-(void)_setToolbarBackgroundImage:(id)arg0 ;
-(void)_setToolbarBackgroundViewWithImage:(id)arg0 ;
-(void)_updateCornerClipping;
-(void)addSubview:(id)arg0 ;


@end


#endif