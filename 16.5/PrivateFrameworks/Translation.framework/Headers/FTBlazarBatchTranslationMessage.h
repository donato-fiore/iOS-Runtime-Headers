// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTBLAZARBATCHTRANSLATIONMESSAGE_H
#define FTBLAZARBATCHTRANSLATIONMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTBatchTranslationFeedbackRequest.h"
#import "FTBatchTranslationLoggingRequest.h"
#import "FTBatchTranslationRequest.h"
#import "FTBatchTranslationResponse.h"
#import "FTFinalBlazarResponse.h"
#import "FTTranslationSupportedLanguagesRequest.h"
#import "FTTranslationSupportedLanguagesResponse.h"

@interface FTBlazarBatchTranslationMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BlazarBatchTranslationMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTBatchTranslationFeedbackRequest *session_messageAsFTBatchTranslationFeedbackRequest;
@property (readonly, nonatomic) FTBatchTranslationLoggingRequest *session_messageAsFTBatchTranslationLoggingRequest;
@property (readonly, nonatomic) FTBatchTranslationRequest *session_messageAsFTBatchTranslationRequest;
@property (readonly, nonatomic) FTBatchTranslationResponse *session_messageAsFTBatchTranslationResponse;
@property (readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTTranslationSupportedLanguagesRequest *session_messageAsFTTranslationSupportedLanguagesRequest;
@property (readonly, nonatomic) FTTranslationSupportedLanguagesResponse *session_messageAsFTTranslationSupportedLanguagesResponse;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BlazarBatchTranslationMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BlazarBatchTranslationMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BlazarBatchTranslationMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif