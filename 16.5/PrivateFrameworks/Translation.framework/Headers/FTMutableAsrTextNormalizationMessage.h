// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEASRTEXTNORMALIZATIONMESSAGE_H
#define FTMUTABLEASRTEXTNORMALIZATIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrTextNormalizationMessage.h"
#import "FTTextNormalizationRequest.h"
#import "FTTextNormalizationResponse.h"

@interface FTMutableAsrTextNormalizationMessage : FTAsrTextNormalizationMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTTextNormalizationRequest *session_messageAsFTTextNormalizationRequest;
@property (copy, nonatomic) FTTextNormalizationResponse *session_messageAsFTTextNormalizationResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif