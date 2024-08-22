// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONOUTPUTVARIABLE_H
#define WFACTIONOUTPUTVARIABLE_H

@class NSString;
@protocol WFVariableProvider;


#import "WFVariable.h"
#import "WFAction.h"

@interface WFActionOutputVariable : WFVariable {
    id<WFVariableProvider> *_variableProvider;
}


@property (readonly, weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *outputUUID;


-(BOOL)isAvailable;
-(id)UUID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultName;
-(id)icon;
-(id)initWithAction:(id)arg0 variableProvider:(id)arg1 aggrandizements:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 variableProvider:(id)arg1 ;
-(id)initWithOutputUUID:(id)arg0 outputName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(id)variableProvider;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;
-(void)variableProvider:(id)arg0 variableNameDidChangeTo:(id)arg1 ;


@end


#endif