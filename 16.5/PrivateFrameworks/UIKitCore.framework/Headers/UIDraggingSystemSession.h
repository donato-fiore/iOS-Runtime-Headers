// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDRAGGINGSYSTEMSESSION_H
#define UIDRAGGINGSYSTEMSESSION_H

@protocol _DUIServerSessionSystemApp;

#import <Foundation/Foundation.h>

#import "UIDraggingSystemSessionInfo.h"
#import "UIDraggingSystemTouchRoutingPolicy.h"

@interface UIDraggingSystemSession : NSObject

@property (nonatomic, getter=isCommandeered) BOOL commandeered; // ivar: _commandeered
@property (retain, nonatomic) UIDraggingSystemSessionInfo *info; // ivar: _info
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy; // ivar: _routingPolicy
@property (retain, nonatomic, getter=_serverSession) NSObject<_DUIServerSessionSystemApp> *serverSession; // ivar: _serverSession


-(NSUInteger)_indexOfDragItemInSession:(id)arg0 ;
-(void)commandeerImmediately;
-(void)loadURLForItem:(id)arg0 completion:(id)arg1 ;
-(void)loadUserActivityForItem:(id)arg0 completion:(id)arg1 ;


@end


#endif