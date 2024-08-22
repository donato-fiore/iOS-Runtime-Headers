// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDRUIDDESTINATIONCONNECTION_H
#define _UIDRUIDDESTINATIONCONNECTION_H

@class NSXPCConnection, NSString;
@protocol _DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection, _DUIServerSessionDestination;

#import <Foundation/Foundation.h>


@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection>

 {
    NSXPCConnection *_connection;
    id<_DUIServerSessionDestination> *_serverSession;
}


@property (copy, nonatomic) id *connectionBlock; // ivar: _connectionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dragEndBlock; // ivar: _dragEndBlock
@property (copy, nonatomic) id *dragPreviewProviderBlock; // ivar: _dragPreviewProviderBlock
@property (copy, nonatomic) id *dropPerformBlock; // ivar: _dropPerformBlock
@property (copy, nonatomic) id *handOffDroppedItemsBlock; // ivar: _handOffDroppedItemsBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *itemsAddedBlock; // ivar: _itemsAddedBlock
@property (readonly, nonatomic) unsigned int sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithSessionIdentifier:(unsigned int)arg0 systemPolicy:(BOOL)arg1 ;
-(void)addedItemCollection:(id)arg0 ;
-(void)dirtyItems:(id)arg0 ;
-(void)dragEnded;
-(void)enableKeyboardIfNeeded;
-(void)handOffDroppedItems:(id)arg0 withFence:(id)arg1 ;
-(void)performDropWithItemCollection:(id)arg0 dataProviderEndpoint:(id)arg1 visibleDroppedItems:(id)arg2 reply:(id)arg3 ;
-(void)requestDragPreviewsForIndexSet:(id)arg0 reply:(id)arg1 ;
-(void)requestDropWithOperation:(NSUInteger)arg0 ;
-(void)requestVisibleItems:(id)arg0 ;
-(void)sawDragEndEvent;
-(void)takePotentialDrop:(id)arg0 ;


@end


#endif