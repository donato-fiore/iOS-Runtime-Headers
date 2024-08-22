// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPROPERTYVARIABLEAGGRANDIZEMENT_H
#define WFPROPERTYVARIABLEAGGRANDIZEMENT_H

@class NSString;
@protocol WFPropertyListObject;


#import "WFVariableAggrandizement.h"

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) BOOL negativeProperty;
@property (readonly, nonatomic) NSString *negativePropertyName;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) NSObject<WFPropertyListObject> *propertyUserInfo;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPropertyName:(id)arg0 propertyUserInfo:(id)arg1 ;
-(id)initWithPropertyName:(id)arg0 propertyUserInfo:(id)arg1 negativeProperty:(BOOL)arg2 negativePropertyName:(id)arg3 ;
-(id)processedContentClasses:(id)arg0 ;
-(void)applyToContentCollection:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif