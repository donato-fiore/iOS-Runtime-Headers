// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOERCIONVARIABLEAGGRANDIZEMENT_H
#define WFCOERCIONVARIABLEAGGRANDIZEMENT_H



#import "WFVariableAggrandizement.h"

@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) Class coercionItemClass;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoercionItemClass:(Class)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)processedContentClasses:(id)arg0 ;
-(void)applyToContentCollection:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif