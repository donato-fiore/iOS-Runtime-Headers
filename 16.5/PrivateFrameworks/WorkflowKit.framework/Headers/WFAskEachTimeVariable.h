// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFASKEACHTIMEVARIABLE_H
#define WFASKEACHTIMEVARIABLE_H

@class NSString;


#import "WFVariable.h"

@interface WFAskEachTimeVariable : WFVariable

@property (readonly, nonatomic) NSString *prompt;


-(BOOL)isAvailable;
-(BOOL)requiresModernVariableSupport;
-(BOOL)supportsAggrandizements;
-(id)icon;
-(id)init;
-(id)initWithPrompt:(id)arg0 ;
-(id)name;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif