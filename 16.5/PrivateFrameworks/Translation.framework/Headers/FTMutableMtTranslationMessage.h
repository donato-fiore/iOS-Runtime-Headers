// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEMTTRANSLATIONMESSAGE_H
#define FTMUTABLEMTTRANSLATIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTMtTranslationMessage.h"
#import "FTTranslationRequest.h"
#import "FTTranslationResponse.h"

@interface FTMutableMtTranslationMessage : FTMtTranslationMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTTranslationRequest *session_messageAsFTTranslationRequest;
@property (copy, nonatomic) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif