// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USTRACKINGAGENTPRIVATECONNECTION_H
#define USTRACKINGAGENTPRIVATECONNECTION_H


#import <Foundation/Foundation.h>


@interface USTrackingAgentPrivateConnection : NSObject



+(BOOL)connectionHasFamilyControlsEntitlement:(id)arg0 ;
+(BOOL)connectionHasPrivateEntitlement:(id)arg0 ;
+(id)newConnection;
+(id)newInterface;


@end


#endif