// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAHYPERLINKGESTURERECOGNIZER_H
#define TSAHYPERLINKGESTURERECOGNIZER_H

@class UIGestureRecognizer, TSDRep<TSWPHyperlinkHostRepProtocol>;


#import "TSWPHyperlinkField.h"
#import "TSDInteractiveCanvasController.h"

@interface TSAHyperlinkGestureRecognizer : UIGestureRecognizer {
    CGPoint _touchBeginPoint;
}


@property (retain, nonatomic) TSWPHyperlinkField *hitField; // ivar: _hitField
@property (retain, nonatomic) TSDRep<TSWPHyperlinkHostRepProtocol> *hitRep; // ivar: _hitRep
@property (nonatomic) TSDInteractiveCanvasController *icc; // ivar: _icc
@property (nonatomic) BOOL tapEnabled; // ivar: _tapEnabled
@property (nonatomic) BOOL tapHoldEnabled; // ivar: _tapHoldEnabled
@property (readonly, nonatomic) BOOL wasTapHold; // ivar: _wasTapHold


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)p_smartFieldForTouch:(id)arg0 outRep:(*id)arg1 ;
-(void)dealloc;
-(void)p_delayElapsed:(id)arg0 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif