// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSHAREGROUPMAPSHAREGROUPTOKEN_H
#define TSCH3DSHAREGROUPMAPSHAREGROUPTOKEN_H

@protocol MTLDevice;


#import "TSCH3DSharegroupToken.h"
#import "TSCH3DGPUSharegroup.h"

@interface TSCH3DSharegroupMapSharegroupToken : TSCH3DSharegroupToken

@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (retain, nonatomic) TSCH3DGPUSharegroup *sharegroup; // ivar: _sharegroup


+(id)tokenWithDevice:(id)arg0 ;
-(BOOL)hasInterestForDiscreteGraphics;
-(BOOL)shouldClearCurrentContextOnOwnerChange;
-(id)initWithDevice:(id)arg0 ;
-(id)tokenSharegroup;
-(void)dealloc;
-(void)releaseSharegroup:(id)arg0 ;


@end


#endif