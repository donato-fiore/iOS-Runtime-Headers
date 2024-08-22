// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEASRPOSTITNHAMMERMESSAGE_H
#define FTMUTABLEASRPOSTITNHAMMERMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrPostItnHammerMessage.h"
#import "FTPostItnHammerRequest.h"
#import "FTPostItnHammerResponse.h"

@interface FTMutableAsrPostItnHammerMessage : FTAsrPostItnHammerMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTPostItnHammerRequest *session_messageAsFTPostItnHammerRequest;
@property (copy, nonatomic) FTPostItnHammerResponse *session_messageAsFTPostItnHammerResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif