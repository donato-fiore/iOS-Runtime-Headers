// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEAPGPRONGUESSMESSAGE_H
#define FTMUTABLEAPGPRONGUESSMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTApgPronGuessMessage.h"
#import "FTAudioPacket.h"
#import "FTCancelRequest.h"
#import "FTFinishAudio.h"
#import "FTPronGuessResponse.h"
#import "FTStartPronGuessRequest.h"

@interface FTMutableApgPronGuessMessage : FTApgPronGuessMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (copy, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif