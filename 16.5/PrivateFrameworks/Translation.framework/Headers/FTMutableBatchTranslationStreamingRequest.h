// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEBATCHTRANSLATIONSTREAMINGREQUEST_H
#define FTMUTABLEBATCHTRANSLATIONSTREAMINGREQUEST_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBatchTranslationStreamingRequest.h"
#import "FTBatchTranslationFeedbackRequest.h"
#import "FTBatchTranslationLoggingRequest.h"
#import "FTBatchTranslationRequest.h"
#import "FTTranslationSupportedLanguagesRequest.h"

@interface FTMutableBatchTranslationStreamingRequest : FTBatchTranslationStreamingRequest

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (copy, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (copy, nonatomic) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property (copy, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (copy, nonatomic) FTTranslationSupportedLanguagesRequest *contentAsFTTranslationSupportedLanguagesRequest;
@property (nonatomic) NSInteger content_type;


+(Class)content_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForMutableObject:(id)arg0 ;
+(NSInteger)content_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif