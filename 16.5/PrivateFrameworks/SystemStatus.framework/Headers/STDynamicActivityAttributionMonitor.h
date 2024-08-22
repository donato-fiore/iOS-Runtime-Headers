// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONMONITOR_H
#define STDYNAMICACTIVITYATTRIBUTIONMONITOR_H

@class NSMutableDictionary, NSString;
@protocol STDynamicActivityAttributionClientHandle, STDynamicActivityAttributionServerHandle;

#import <Foundation/Foundation.h>


@interface STDynamicActivityAttributionMonitor : NSObject <STDynamicActivityAttributionClientHandle>

 {
    os_unfair_lock_s _lock;
    id *_lock_handler;
    id<STDynamicActivityAttributionServerHandle> *_lock_server;
    NSMutableDictionary *_lock_attributions;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributionForAttribution:(id)arg0 ;
-(id)attributionForClient:(struct ? )arg0 ;
-(id)currentAttributions;
-(id)init;
-(id)initWithServerHandle:(id)arg0 ;
-(struct ? )auditToken;
-(void)activate;
-(void)currentAttributionsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif