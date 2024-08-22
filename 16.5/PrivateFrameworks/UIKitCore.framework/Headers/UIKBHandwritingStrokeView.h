// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBHANDWRITINGSTROKEVIEW_H
#define UIKBHANDWRITINGSTROKEVIEW_H



#import "UIView.h"
#import "UIKBHandwritingView.h"

@interface UIKBHandwritingStrokeView : UIView

@property (readonly, nonatomic) CGRect aggregateInvalidRect; // ivar: _aggregateInvalidRect
@property (readonly, nonatomic) *CGContext bitmapContext; // ivar: _bitmapContext
@property (weak, nonatomic) UIKBHandwritingView *keyView; // ivar: _keyView
@property (readonly, nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor


-(BOOL)_wantsDeepDrawing;
-(struct ? )viewPointFromDataPoint:(struct ? )arg0 ;
-(struct CGRect )convertRectToBitmapCoordinates:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToViewCoordinates:(struct CGRect )arg0 ;
-(struct CGRect )handwritingPointToRect:(struct ? )arg0 ;
-(void)addHandwritingPoint:(struct ? )arg0 ;
-(void)addTrapezoidFromFirstPoint:(struct ? )arg0 secondPoint:(struct ? )arg1 ;
-(void)clearRect:(struct CGRect )arg0 ;
-(void)createBitmapIfNeeded;
-(void)dealloc;
-(void)displayAggregateInvalidRect;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)redrawStrokesInRect:(struct CGRect )arg0 ;
-(void)updateInkColor;


@end


#endif