// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSIMPLEAPPLICATIONPOLICYMONITOR_H
#define SBHSIMPLEAPPLICATIONPOLICYMONITOR_H

@class NSHashTable, DMFApplicationPolicyMonitor;

#import <Foundation/Foundation.h>


@interface SBHSimpleApplicationPolicyMonitor : NSObject {
    NSHashTable *_registeredApplications;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) DMFApplicationPolicyMonitor *policyMonitor; // ivar: _policyMonitor


+(id)sharedInstance;
-(id)init;
-(void)registerApplication:(id)arg0 ;
-(void)unregisterApplication:(id)arg0 ;
-(void)updateAllPolicies;


@end


#endif