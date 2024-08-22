// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWRUNQUEUEDESCRIPTOR_H
#define WFWORKFLOWRUNQUEUEDESCRIPTOR_H

@protocol NSCopying, WFPropertyListObject;

#import <Foundation/Foundation.h>


@interface WFWorkflowRunQueueDescriptor : NSObject <NSCopying>

 {
    NSUInteger _type;
    id<WFPropertyListObject> *_queueIdentifier;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 ;


@end


#endif