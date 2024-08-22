// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWNOINPUTBEHAVIORASKFORINPUT_H
#define WFWORKFLOWNOINPUTBEHAVIORASKFORINPUT_H

@class NSString, NSDictionary;
@protocol WFWorkflowNoInputBehavior;

#import <Foundation/Foundation.h>


@interface WFWorkflowNoInputBehaviorAskForInput : NSObject <WFWorkflowNoInputBehavior>



@property (readonly, nonatomic) Class contentItemClass; // ivar: _contentItemClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *serializedParameters; // ivar: _serializedParameters
@property (readonly) Class superclass;


+(BOOL)resolvesInput;
+(id)behaviorName;
-(id)initWithContentItemClass:(Class)arg0 serializedParameters:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)serializedRepresentation;
-(void)resolveWithUserInterface:(id)arg0 runningDelegate:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif