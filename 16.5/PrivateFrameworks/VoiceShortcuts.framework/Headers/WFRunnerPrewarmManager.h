// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRUNNERPREWARMMANAGER_H
#define WFRUNNERPREWARMMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "VCDaemonXPCEventHandler.h"

@interface WFRunnerPrewarmManager : NSObject

@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSXPCConnection *runner; // ivar: _runner


-(id)initWithXPCEventHandler:(id)arg0 ;
-(void)prewarmRunnerIfNecessary;


@end


#endif