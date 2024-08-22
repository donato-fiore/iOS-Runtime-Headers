// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTSEARCHINGDIMMINGVIEW_H
#define UITEXTSEARCHINGDIMMINGVIEW_H

@class CAShapeLayer, CALayer, NSArray;


#import "UIView.h"

@interface UITextSearchingDimmingView : UIView {
    CAShapeLayer *_brighteningLayer;
    CALayer *_dimmingLayer;
    CAShapeLayer *_punchoutLayer;
    BOOL _punchoutPathIsValid;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) NSArray *textRects; // ivar: _textRects


-(BOOL)_wantsTargetOfKeyboardEventDeferringEnvironment;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updatePunchoutPathForVisibleRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif