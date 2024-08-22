// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DINTERACTIVECANVASSHAREGROUPTOKEN_H
#define TSCH3DINTERACTIVECANVASSHAREGROUPTOKEN_H



#import "TSCH3DCachedSharegroupToken.h"

@interface TSCH3DInteractiveCanvasSharegroupToken : TSCH3DCachedSharegroupToken



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)token;
-(BOOL)canBeCreatedFromOtherThread;
-(BOOL)hasInterestForDiscreteGraphics;
-(BOOL)shouldClearCurrentContextOnOwnerChange;
-(BOOL)shouldGarbageCollect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif