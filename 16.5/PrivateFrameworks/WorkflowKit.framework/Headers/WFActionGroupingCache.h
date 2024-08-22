// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONGROUPINGCACHE_H
#define WFACTIONGROUPINGCACHE_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFActionGroupingCache : NSObject

@property (readonly, nonatomic) NSDictionary *actionsByGroupingIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *contents; // ivar: _contents


-(id)actionsForGroupingIdentifier:(id)arg0 ;
-(id)init;
-(void)addAction:(id)arg0 sortingWithWorkflowActions:(id)arg1 ;
-(void)removeAction:(id)arg0 ;
-(void)sortActionsForGroupingIdentifier:(id)arg0 withWorkflowActions:(id)arg1 ;


@end


#endif