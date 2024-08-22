// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACTION_H
#define VUIACTION_H

@class NSString;
@protocol VUIAction;

#import <Foundation/Foundation.h>


@interface VUIAction : NSObject <VUIAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)actionWithDictionary:(id)arg0 appContext:(id)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;
-(void)suiPerformWithTargetResponder:(id)arg0 completeTransitionHandler:(id)arg1 ;


@end


#endif