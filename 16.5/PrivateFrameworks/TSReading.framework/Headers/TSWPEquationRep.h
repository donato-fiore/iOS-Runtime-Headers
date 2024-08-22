// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPEQUATIONREP_H
#define TSWPEQUATIONREP_H

@class NSString, CALayer;
@protocol TSDTilingLayerDelegate;


#import "TSDRep.h"

@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CALayer *equationLayer; // ivar: _equationLayer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)directlyManagesLayerContent;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(struct CGRect )clipRect;
-(struct CGRect )visibleBoundsForTilingLayer:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)screenScaleDidChange;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)willBeRemoved;


@end


#endif