// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLMIGRATIONKITCONTROLLER_H
#define WLMIGRATIONKITCONTROLLER_H

@protocol WLDataMigrationDelegate;


#import "WLDaemonConnection.h"

@interface WLMigrationKitController : WLDaemonConnection

@property (weak, nonatomic) NSObject<WLDataMigrationDelegate> *delegate; // ivar: _delegate


-(void)cancel;
-(void)daemonDidGetInterrupted;
-(void)run:(id)arg0 ;


@end


#endif