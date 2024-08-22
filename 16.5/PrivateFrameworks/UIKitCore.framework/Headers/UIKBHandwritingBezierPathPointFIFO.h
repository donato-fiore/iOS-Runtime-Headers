// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBHANDWRITINGBEZIERPATHPOINTFIFO_H
#define UIKBHANDWRITINGBEZIERPATHPOINTFIFO_H

@class NSMutableArray;


#import "UIKBHandwritingPointFIFO.h"
#import "UIBezierPath.h"

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO

@property (copy) id *emissionHandler; // ivar: _emissionHandler
@property (retain, nonatomic) UIBezierPath *path; // ivar: _path
@property (retain, nonatomic) NSMutableArray *prevPoints; // ivar: _prevPoints


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint:(struct ? )arg0 ;
-(void)clear;
-(void)flush;


@end


#endif