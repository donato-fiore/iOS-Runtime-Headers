// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLDOMDOMAINEVENTDISPATCHER_H
#define RWIPROTOCOLDOMDOMAINEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface RWIProtocolDOMDomainEventDispatcher : NSObject {
    *AugmentableInspectorController _controller;
}




-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)attributeModifiedWithNodeId:(int)arg0 name:(id)arg1 value:(id)arg2 ;
-(void)attributeRemovedWithNodeId:(int)arg0 name:(id)arg1 ;
-(void)characterDataModifiedWithNodeId:(int)arg0 characterData:(id)arg1 ;
-(void)childNodeCountUpdatedWithNodeId:(int)arg0 childNodeCount:(int)arg1 ;
-(void)childNodeInsertedWithParentNodeId:(int)arg0 previousNodeId:(int)arg1 node:(id)arg2 ;
-(void)childNodeRemovedWithParentNodeId:(int)arg0 nodeId:(int)arg1 ;
-(void)customElementStateChangedWithNodeId:(int)arg0 customElementState:(NSInteger)arg1 ;
-(void)didAddEventListenerWithNodeId:(int)arg0 ;
-(void)didFireEventWithNodeId:(int)arg0 eventName:(id)arg1 timestamp:(CGFloat)arg2 data:(*id)arg3 ;
-(void)documentUpdated;
-(void)inlineStyleInvalidatedWithNodeIds:(id)arg0 ;
-(void)inspectWithNodeId:(int)arg0 ;
-(void)powerEfficientPlaybackStateChangedWithNodeId:(int)arg0 timestamp:(CGFloat)arg1 isPowerEfficient:(BOOL)arg2 ;
-(void)pseudoElementAddedWithParentId:(int)arg0 pseudoElement:(id)arg1 ;
-(void)pseudoElementRemovedWithParentId:(int)arg0 pseudoElementId:(int)arg1 ;
-(void)setChildNodesWithParentId:(int)arg0 nodes:(id)arg1 ;
-(void)shadowRootPoppedWithHostId:(int)arg0 rootId:(int)arg1 ;
-(void)shadowRootPushedWithHostId:(int)arg0 root:(id)arg1 ;
-(void)willDestroyDOMNodeWithNodeId:(int)arg0 ;
-(void)willRemoveEventListenerWithNodeId:(int)arg0 ;


@end


#endif