// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSBONJOURADVERTISE_H
#define TSBONJOURADVERTISE_H

@protocol OS_dispatch_queue, TSBonjourAdvertiseDelegate;

#import <Foundation/Foundation.h>


@interface TSBonjourAdvertise : NSObject {
    *_DNSServiceRef_t _sdRef;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSObject<TSBonjourAdvertiseDelegate> *delegate; // ivar: _delegate


-(BOOL)startAdvertisingWithError:(*id)arg0 ;
-(BOOL)stopAdvertising;
-(id)init;
-(void)dealloc;
-(void)registeredServiceWithName:(char *)arg0 regType:(char *)arg1 domain:(char *)arg2 withFlags:(unsigned int)arg3 ;


@end


#endif