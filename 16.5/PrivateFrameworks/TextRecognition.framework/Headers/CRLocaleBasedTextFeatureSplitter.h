// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRLOCALEBASEDTEXTFEATURESPLITTER_H
#define CRLOCALEBASEDTEXTFEATURESPLITTER_H



#import "CRMultiModelTextFeatureSplitter.h"

@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter



-(id)_preferredLocaleFromScriptLocales:(id)arg0 ;
-(id)_scriptCategoryLocaleMappingForScriptCategoryRevision:(NSUInteger)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)preferredLocales;
-(void)enumerateTextFeatures:(id)arg0 usingBlock:(id)arg1 ;
-(void)preferredLocaleBasedScriptVoting:(id)arg0 ;


@end


#endif