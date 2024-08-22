// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEASRERRORBLAMERMESSAGE_H
#define FTMUTABLEASRERRORBLAMERMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrErrorBlamerMessage.h"
#import "FTErrorBlamerRequest.h"
#import "FTErrorBlamerResponse.h"

@interface FTMutableAsrErrorBlamerMessage : FTAsrErrorBlamerMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTErrorBlamerRequest *session_messageAsFTErrorBlamerRequest;
@property (copy, nonatomic) FTErrorBlamerResponse *session_messageAsFTErrorBlamerResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif