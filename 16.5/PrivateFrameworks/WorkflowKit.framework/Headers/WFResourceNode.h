// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRESOURCENODE_H
#define WFRESOURCENODE_H

@class NSString, NSArray;
@protocol WFResourceNodeDelegate;

#import <Foundation/Foundation.h>

#import "WFResource.h"

@interface WFResourceNode : NSObject <WFResourceNodeDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFResourceNodeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFResource *resource; // ivar: _resource
@property (readonly, nonatomic) NSArray *subnodes; // ivar: _subnodes
@property (readonly) Class superclass;


+(id)nodesWithDefinitions:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)initWithResource:(id)arg0 ;
-(id)initWithResource:(id)arg0 subnodes:(id)arg1 ;
-(void)dealloc;
-(void)refreshAvailability;
-(void)resourceNodeAvailabilityChanged:(id)arg0 ;


@end


#endif