// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDICTIONARYVALUEVARIABLEAGGRANDIZEMENT_H
#define WFDICTIONARYVALUEVARIABLEAGGRANDIZEMENT_H

@class NSString;


#import "WFVariableAggrandizement.h"

@interface WFDictionaryValueVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSString *dictionaryKey;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionaryKey:(id)arg0 ;
-(id)processedContentClasses:(id)arg0 ;
-(void)applyToContentCollection:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif