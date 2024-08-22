// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXCAMERATORCHMANAGERBACKGROUNDADAPTER_H
#define AXCAMERATORCHMANAGERBACKGROUNDADAPTER_H

@protocol OS_dispatch_queue, AXCameraTorchManager;

#import <Foundation/Foundation.h>


@interface AXCameraTorchManagerBackgroundAdapter : NSObject {
    NSObject<OS_dispatch_queue> *_q;
}


@property (readonly, nonatomic) NSObject<AXCameraTorchManager> *synchronousTorchManager; // ivar: _synchronousManager


-(id)initWithCameraTorchManager:(id)arg0 ;
-(void)closeTorchDeviceWithCompletion:(id)arg0 ;
-(void)openTorchDeviceWithCompletion:(id)arg0 ;
-(void)turnTorchOffWithCompletion:(id)arg0 ;
-(void)turnTorchOnWithCompletion:(id)arg0 ;


@end


#endif