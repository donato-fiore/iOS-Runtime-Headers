// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSWITCHERDEMOCOMMANDS_H
#define SBSSWITCHERDEMOCOMMANDS_H

@class BSServiceConnection, NSString;
@protocol SBSSwitcherDemoCommandsServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSSwitcherDemoCommands : NSObject <SBSSwitcherDemoCommandsServerToClientInterface>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadStashedSwitcherModelFromPath:(id)arg0 ;
-(BOOL)setShouldDisableSwitcherModelUpdates:(BOOL)arg0 ;
-(BOOL)stashSwitcherModelToPath:(id)arg0 ;
-(BOOL)updateHiddenApplicationBundleIDs:(id)arg0 ;
-(id)_standardizedAbsolutePathForPath:(id)arg0 ;
-(id)init;
-(void)_connectionQueue_invalidate;
-(void)_connectionQueue_setupAndActivate;
-(void)invalidate;


@end


#endif