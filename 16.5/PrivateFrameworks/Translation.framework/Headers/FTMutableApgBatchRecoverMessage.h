// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEAPGBATCHRECOVERMESSAGE_H
#define FTMUTABLEAPGBATCHRECOVERMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTApgBatchRecoverMessage.h"
#import "FTBatchRecoverFinalResponse.h"
#import "FTPronGuessResponse.h"
#import "FTStartBatchRecoverRequest.h"

@interface FTMutableApgBatchRecoverMessage : FTApgBatchRecoverMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTBatchRecoverFinalResponse *session_messageAsFTBatchRecoverFinalResponse;
@property (copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (copy, nonatomic) FTStartBatchRecoverRequest *session_messageAsFTStartBatchRecoverRequest;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif