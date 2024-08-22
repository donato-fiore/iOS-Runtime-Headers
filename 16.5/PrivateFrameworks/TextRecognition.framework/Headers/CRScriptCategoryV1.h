// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSCRIPTCATEGORYV1_H
#define CRSCRIPTCATEGORYV1_H



#import "CRScriptCategory.h"

@interface CRScriptCategoryV1 : CRScriptCategory



+(NSUInteger)categoryRevision;
+(float)confidenceThreshold;
+(id)sequenceScriptToScriptCategoryMapping;
+(id)supportedCategories;


@end


#endif