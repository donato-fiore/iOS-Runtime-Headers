// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIKBHANDWRITINGPOINTFIFO_H
#define TUIKBHANDWRITINGPOINTFIFO_H


#import <Foundation/Foundation.h>

#import "TUIKBHandwritingPointFIFO.h"

@interface TUIKBHandwritingPointFIFO : NSObject

@property (retain, nonatomic) TUIKBHandwritingPointFIFO *nextFIFO; // ivar: _nextFIFO


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint:(struct ? )arg0 ;
-(void)clear;
-(void)emitPoint:(struct ? )arg0 ;
-(void)flush;


@end


#endif