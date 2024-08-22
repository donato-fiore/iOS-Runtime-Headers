// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WQA_HOSTDEALLOCNOTIFIER_H
#define _WQA_HOSTDEALLOCNOTIFIER_H

@protocol WatchQuickActionHostObserver;

#import <Foundation/Foundation.h>


@interface _WQA_HostDeallocNotifier : NSObject

@property (weak, nonatomic) NSObject<WatchQuickActionHostObserver> *hostObserver; // ivar: _hostObserver


-(void)dealloc;


@end


#endif