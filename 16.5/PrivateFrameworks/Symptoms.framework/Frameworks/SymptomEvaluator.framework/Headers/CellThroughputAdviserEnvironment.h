// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CELLTHROUGHPUTADVISERENVIRONMENT_H
#define CELLTHROUGHPUTADVISERENVIRONMENT_H

@class NSString;
@protocol SymptomsAWDObserverDelegate, CoreTelephonyShimDelegate;


#import "ThroughputAdviserEnvironment.h"
#import "CellThroughputAdviser.h"

@interface CellThroughputAdviserEnvironment : ThroughputAdviserEnvironment <SymptomsAWDObserverDelegate, CoreTelephonyShimDelegate>

 {
    BOOL _registeredWithAWDObserver;
}


@property (readonly) CellThroughputAdviser *cellThroughputAdviser; // ivar: _cellThroughputAdviser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)handleEvent:(id)arg0 ;
-(void)infoHighThroughputStateChanged:(id)arg0 ;
-(void)monitorSDMActivations:(BOOL)arg0 ;


@end


#endif