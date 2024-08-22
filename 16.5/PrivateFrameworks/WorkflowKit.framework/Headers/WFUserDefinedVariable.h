// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFUSERDEFINEDVARIABLE_H
#define WFUSERDEFINEDVARIABLE_H

@class NSString;
@protocol WFVariableProvider;


#import "WFVariable.h"

@interface WFUserDefinedVariable : WFVariable {
    id<WFVariableProvider> *_variableProvider;
}


@property (readonly, nonatomic) NSString *name;


-(BOOL)isAvailable;
-(BOOL)requiresModernVariableSupport;
-(id)UUID;
-(id)icon;
-(id)initWithDictionary:(id)arg0 variableProvider:(id)arg1 ;
-(id)initWithName:(id)arg0 variableProvider:(id)arg1 aggrandizements:(id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(id)variableProvider;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;
-(void)variableProvider:(id)arg0 variableNameDidChangeTo:(id)arg1 ;


@end


#endif