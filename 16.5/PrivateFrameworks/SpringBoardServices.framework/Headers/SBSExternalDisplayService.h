// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSEXTERNALDISPLAYSERVICE_H
#define SBSEXTERNALDISPLAYSERVICE_H

@class BSServiceConnection, NSHashTable, NSString;
@protocol SBSExternalDisplayServiceServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSExternalDisplayService : NSObject <SBSExternalDisplayServiceServerToClientInterface>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_queue_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)externalDisplayDidConnect:(id)arg0 ;
-(void)externalDisplayDidUpdateProperties:(id)arg0 ;
-(void)externalDisplayWillDisconnect:(id)arg0 ;
-(void)getConnectedDisplayInfoWithCompletionHandler:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setDisplayArrangement:(id)arg0 forDisplay:(id)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg0 forDisplay:(id)arg1 ;
-(void)setSettings:(id)arg0 forDisplay:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif