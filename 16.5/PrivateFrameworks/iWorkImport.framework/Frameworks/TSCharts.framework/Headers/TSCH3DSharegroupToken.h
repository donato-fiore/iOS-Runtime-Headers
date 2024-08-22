// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSHAREGROUPTOKEN_H
#define TSCH3DSHAREGROUPTOKEN_H


#import <Foundation/Foundation.h>


@interface TSCH3DSharegroupToken : NSObject



+(id)glExport;
+(id)interactiveCanvas;
+(id)sharegroupMapWithDevice:(id)arg0 ;
+(id)sharegroupPool;
-(BOOL)canBeCreatedFromOtherThread;
-(BOOL)forceGL;
-(BOOL)hasInterestForDiscreteGraphics;
-(BOOL)isOneShot;
-(BOOL)mustRunOnMainThread;
-(BOOL)shouldClearCurrentContextOnOwnerChange;
-(BOOL)shouldGarbageCollect;
-(id)targetThreadForFlushingWithOwningThread:(id)arg0 ;


@end


#endif