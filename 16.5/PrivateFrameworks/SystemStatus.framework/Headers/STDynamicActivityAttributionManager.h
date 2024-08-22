// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONMANAGER_H
#define STDYNAMICACTIVITYATTRIBUTIONMANAGER_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol STDynamicActivityAttributionServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STDynamicActivityAttributionListener.h"

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle>

 {
    STDynamicActivityAttributionListener *_dynamicAttributionListener;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_clientAttributionMap;
    NSMutableSet *_monitorClients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentAttributedAppForClient:(id)arg0 ;
-(id)currentAttributionForAttribution:(id)arg0 ;
-(id)currentAttributionForClient:(struct ? )arg0 ;
-(id)currentAttributionKeyForClient:(id)arg0 ;
-(id)init;
-(void)setAttributionLocalizableKey:(id)arg0 maskingClientAuditToken:(struct ? )arg1 forClient:(id)arg2 ;
-(void)setAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 forClient:(id)arg2 ;
-(void)setAttributionWebsiteString:(id)arg0 maskingClientAuditToken:(struct ? )arg1 forClient:(id)arg2 ;
-(void)setLocalizableAttributionKey:(id)arg0 andApplication:(id)arg1 forClient:(id)arg2 ;
-(void)subscribeToUpdates:(id)arg0 ;
-(void)unsubscribeFromUpdates:(id)arg0 ;


@end


#endif