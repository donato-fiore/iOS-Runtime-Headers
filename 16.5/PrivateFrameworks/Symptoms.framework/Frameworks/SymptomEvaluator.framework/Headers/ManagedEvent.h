// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDEVENT_H
#define MANAGEDEVENT_H


#import <Foundation/Foundation.h>

#import "DecisionDetails.h"

@interface ManagedEvent : NSObject

@property (retain, nonatomic) DecisionDetails *details; // ivar: _details
@property (nonatomic) NSUInteger id_number; // ivar: _id_number


-(id)description;
-(id)initWithId:(NSUInteger)arg0 details:(id)arg1 ;
-(void)serializeToXPCObject:(id)arg0 ;


@end


#endif