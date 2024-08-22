// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYBACKLINKINDICATORUSAGESERVICE_H
#define SYBACKLINKINDICATORUSAGESERVICE_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, SYBacklinkIndicatorUsageProtocol;

#import <Foundation/Foundation.h>


@interface SYBacklinkIndicatorUsageService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorUsageProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(id)_testingDelegate;
+(id)sharedInstance;
+(void)beginObservingUsage;
+(void)set_testingDelegate:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didActivateBacklinkItemWithIdentifier:(id)arg0 ;
-(void)didDismissBacklinkItemWithIdentifier:(id)arg0 ;


@end


#endif