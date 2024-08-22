// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESOURCENOTIFYHANDLER_H
#define RESOURCENOTIFYHANDLER_H

@class NSString;
@protocol ConfigurableObjectProtocol, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ResourceNotifyHandler : NSObject <ConfigurableObjectProtocol>

 {
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _port;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)processOnBatteryOnly;
+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)resourceNotifyEvent:(id)arg0 triggeredBy:(char)arg1 pid:(int)arg2 path:(char)arg3 endTime:(struct mach_timespec )arg4 observedValue:(NSInteger)arg5 observationWindow:(NSInteger)arg6 limitValue:(NSInteger)arg7 limitWindow:(NSInteger)arg8 fatal:(BOOL)arg9 fatalPort:(unsigned int)arg10 ;
-(void)setupResourceNotifyReceiver;


@end


#endif