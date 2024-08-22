// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMATCHPOINTTOUCHPROCESSOR_H
#define TVRMATCHPOINTTOUCHPROCESSOR_H

@class UITapGestureRecognizer;


#import "TVRTouchProcessor.h"
#import "_TVRMatchPointArtworkView.h"

@interface TVRMatchPointTouchProcessor : TVRTouchProcessor

@property (retain, nonatomic) _TVRMatchPointArtworkView *artworkView; // ivar: _artworkView
@property (nonatomic) NSInteger highlightedButtonType; // ivar: _highlightedButtonType
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture


-(NSInteger)_pressTypeForLocationInTouchpadView:(struct CGPoint )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_sendButtonPressToDelegate:(NSInteger)arg0 ;
-(void)setTouchpadView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif