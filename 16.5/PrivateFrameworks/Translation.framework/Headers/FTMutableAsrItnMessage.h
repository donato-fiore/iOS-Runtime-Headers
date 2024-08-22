// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEASRITNMESSAGE_H
#define FTMUTABLEASRITNMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrItnMessage.h"
#import "FTItnRequest.h"
#import "FTItnResponse.h"

@interface FTMutableAsrItnMessage : FTAsrItnMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTItnRequest *session_messageAsFTItnRequest;
@property (copy, nonatomic) FTItnResponse *session_messageAsFTItnResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif